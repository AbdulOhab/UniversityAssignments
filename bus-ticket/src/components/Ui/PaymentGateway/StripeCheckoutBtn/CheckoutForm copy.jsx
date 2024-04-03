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

import "./checkoutStyle.css";

const CheckoutForm = (props) => {
  const { amount } = props;
  const [message, setMessage] = useState(null);
  const [processing, setProcessing] = useState(false);
  const [error, setError] = useState(null);
  const [clientSecret, setClienSecret] = useState(null);
  const [cards, setCards] = useState(null);
  const stripe = useStripe();
  const elements = useElements();

  const [succeeded, setSucceeded] = useState(false);
  const [disabled, setDisabled] = useState(true);

  const handleSubmit = async (event) => {
    event.preventDefault();

    const paymentMethod = await stripe.createPaymentMethod({
      card: elements.getElement(CardNumberElement),
      type: "card",
    });

    const stripeToken = await stripe.createToken(
      elements.getElement(CardNumberElement)
    );
    console.log("stripeToken", stripeToken);
  };

  const cardHandleChange = (event) => {
    const { error } = event;
    setError(error ? error.message : "");
  };

  const CARD_OPTIONS = {
    iconStyle: "solid",
    style: {
      base: {
        iconColor: "#c4f0ff",
        color: "black",
        fontWeight: 500,
        fontFamily: "Roboto, Open Sans, Segoe UI, sans-serif",
        fontSize: "16px",
        fontSmoothing: "antialiased",
        ":-webkit-autofill": { color: "black" },
        "::placeholder": { color: "black" },
      },
      invalid: {
        iconColor: "#ffc7ee",
        color: "black",
      },
    },
  };

  let cardOption;

  const handleChange = async (event) => {
    // Listen for changes in the CardElement
    // and display any errors as the customer types their card details
    setDisabled(event.empty);
    setError(event.error ? event.error.message : "");
  };

  //   const handleSubmit = async (ev) => {
  //     ev.preventDefault();
  //     setProcessing(true);

  //     const payload = await stripe.confirmCardPayment(clientSecret, {
  //       payment_method: {
  //         card: elements.getElement(CardElement),
  //       },
  //     });

  //     if (payload.error) {
  //       setError(`Payment failed ${payload.error.message}`);
  //       setProcessing(false);
  //     } else {
  //       setError(null);
  //       setProcessing(false);
  //       setSucceeded(true);
  //     }
  //   };

  return (
    <>
      <form className="form" onSubmit={handleSubmit}>
        {/* <div className="w-full mb-2">
          <label class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">
            Card Number
          </label>
          <CardNumberElement
            className="w-full bg-gray-50 text-gray-800 border focus:ring ring-indigo-300 rounded outline-none transition duration-100 px-3 py-2"
            options={cardStyle}
            onChange={cardHandleChange}
          />
        </div>

        <div className="w-full mb-2 flex gap-3">
          <div className="w-full">
            <label class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">
              Expiration
            </label>
            <CardExpiryElement
              className="w-full bg-gray-50 text-gray-800 border focus:ring ring-indigo-300 rounded outline-none transition duration-100 px-3 py-2"
              options={cardStyle}
              onChange={cardHandleChange}
            />
          </div>
          <div className="w-full">
            <label class="block mb-2 text-sm font-medium text-gray-900 dark:text-white">
              CVC
            </label>
            <CardCvcElement
              className="w-full bg-gray-50 text-gray-800 border focus:ring ring-indigo-300 rounded outline-none transition duration-100 px-3 py-2"
              options={cardStyle}
              onChange={cardHandleChange}
            />
          </div>
        </div>

        <div className="w-full">
          <button
            disabled={processing}
            className="w-full mt-2 text-white bg-blue-700 hover:bg-blue-800 focus:outline-none focus:ring-4 focus:ring-blue-300 font-medium rounded-md text-sm px-5 py-2.5 text-center mr-2 mb-2 dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
          >
            {processing ? `PROCESSING` : `PAY $${amount}`}
          </button>
        </div> */}
        {/* {error && <p className="error-message">{error}</p>}
        <PaymentElement id="payment-element" /> */}
        {/* <button
          className="mt-2 text-white bg-blue-700 hover:bg-blue-800 focus:outline-none focus:ring-4 focus:ring-blue-300 font-medium rounded-full text-sm px-5 py-2.5 text-center mr-2 mb-2 dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800"
          disabled={isProcessing || !stripe || !elements}
          id="submit"
        >
          <span id="button-text">
            {isProcessing ? "Processing ... " : "Pay now"}
          </span>
        </button>
        {/* Show any error or success messages */}
        {/* {message && <div id="payment-message">{message}</div>} */}

        {/* Show any error that happens when processing the payment */}
        {error && (
          <div className="card-error" role="alert">
            {error}
          </div>
        )}
      </form>
    </>
  );
};

export default CheckoutForm;
