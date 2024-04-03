//@ts-nocheck
import { useState, useEffect } from "react";
import {
  CardElement,
  CardNumberElement,
  CardExpiryElement,
  CardCvcElement,
  PaymentElement,
  useStripe,
  useElements,
} from "@stripe/react-stripe-js";

// interface CheckoutProps {
//   amount?: number;
// }

const CheckoutForm = ({ amount, handlePayment }) => {
  const [message, setMessage] = useState(null);
  const [processing, setProcessing] = useState(false);
  const [error, setError] = useState(null);
  const [clientSecret, setClienSecret] = useState(null);
  const [cards, setCards] = useState(null);
  const stripe = useStripe();
  const elements = useElements();

  const handleSubmit = async (event) => {
    event.preventDefault();

    setProcessing(true);
    const paymentMethod = await stripe.createPaymentMethod({
      card: elements.getElement(CardNumberElement),
      type: "card",
    });

    const stripeToken = await stripe.createToken(
      elements.getElement(CardNumberElement)
    );

    console.log("stripeToken", stripeToken);

    var myHeaders = new Headers();
    var formdata = new FormData();
    formdata.append("stripetoken", stripeToken.token.id);
    formdata.append("amount", amount);

    var requestOptions = {
      method: "POST",
      headers: myHeaders,
      body: formdata,
      redirect: "follow",
    };

    const stripePayment = await fetch(
      `${process.env.REACT_APP_API_MODULE_DOMAIN}/tickets/stripe-payment`,
      requestOptions
    );
    const paymentData = await stripePayment.json();

    console.log("paymentData", paymentData);

    if (paymentData.status == "success") {
      handlePayment();
      setProcessing(true);
    } else if (paymentData.status == "fail") {
      setProcessing(false);
      setError(paymentData.message);
    }

    // console.log("stripeToken", stripeToken);
  };

  const cardHandleChange = (event) => {
    const { error } = event;
    setError(error ? error.message : "");
  };

  const cardStyle = {
    style: {
      base: {
        color: "#000",
        fontFamily: "system-ui",
        fontSmoothing: "antialiased",
        fontSize: "16px",
        padding: "15px",
        "::placeholder": {
          color: "#60600",
        },
      },
      invalid: {
        color: "#fa755a",
        iconColor: "#fa755a",
      },
    },
  };

  let cardOption;

  return (
    <>
      <form
        onSubmit={handleSubmit}
        className="d-grid gap-3"
        style={{
          width: "280px",
          padding: "15px",
        }}
      >
        {error && <p className="error-message">{error}</p>}
        {/* <div className="row">
          <label>Card Number</label>
          <CardNumberElement
            className="form-control"
            style={{ padding: "10px" }}
            options={cardStyle}
            onChange={cardHandleChange}
          />
        </div> */}

        <div className="card_element_div row mb-2">
          <label
            className="card_element_label"
            style={{
              width: "100%",
              fontSize: "13px",
              fontFamily: "serif",
            }}
          >
            Card Number
          </label>
          <CardNumberElement
            className="form-control"
            options={cardStyle}
            onChange={cardHandleChange}
          />
        </div>

        <div className="card_element_group row mb-2">
          <div className="col-sm-6">
            <label
              className="card_element_label"
              style={{
                width: "100%",
                fontSize: "13px",
                fontFamily: "serif",
              }}
            >
              Expiration
            </label>
            <CardExpiryElement
              className="form-control"
              options={cardStyle}
              onChange={cardHandleChange}
            />
          </div>
          <div className="col-sm-6">
            <label
              class="card_element_label"
              style={{
                width: "100%",
                fontSize: "13px",
                fontFamily: "serif",
              }}
            >
              CVC
            </label>
            <CardCvcElement
              className="form-control"
              options={cardStyle}
              onChange={cardHandleChange}
            />
          </div>
        </div>
        <div className=""></div>

        <div className="row mb-2">
          <button
            disabled={processing}
            className="btn btn-primary"
            style={{ width: "100%", marginTop: "15px" }}
          >
            {processing ? `PROCESSING` : `PAY`}
          </button>
        </div>
        {/* <PaymentElement id="payment-element" /> */}
        {/* <button
          className="mt-2 text-white bg-blue-700 hover:bg-blue-800 focus:outline-none focus:ring-4 focus:ring-blue-300 font-medium rounded-full text-sm px-5 py-2.5 text-center mr-2 mb-2 dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
          disabled={isProcessing || !stripe || !elements}
          id="submit"
        >
          <span id="button-text">
            {isProcessing ? "Processing ... " : "Pay now"}
          </span>
        </button> */}
        {/* Show any error or success messages */}
        {message && <div id="payment-message">{message}</div>}
      </form>
    </>
  );
};

export default CheckoutForm;
