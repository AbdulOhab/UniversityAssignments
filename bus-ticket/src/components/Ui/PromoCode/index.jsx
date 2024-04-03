import { useEffect, useState } from "react";
import { useSelector } from "react-redux";
import { toast } from "react-toastify";
import TextField from "../../../bootstrap/TextField";
import languageData from "../../../lib/lang.config.json";
import {
  Apply,
  ApplyButton,
  ApplyHeader,
  ApplySubHeader,
  ApplyWrapper,
  Container,
} from "./PromoCode.styles";

const PromoCode = ({ setDiscountValue }) => {
  const { webSettingData } = useSelector((state) => state.busLists);
  const [promoCode, setPromoCode] = useState("");
  const [journeyDate, setJourneyDate] = useState(null);
  const [journeyInfo, setJourneyInfo] = useState(null);
  const [bookingInfo, setBookingInfo] = useState(null);

  useEffect(() => {
    setJourneyDate(JSON.parse(localStorage.getItem("searchInfo")));
    setJourneyInfo(JSON.parse(localStorage.getItem("journeyInfo")));
    setBookingInfo(JSON.parse(localStorage.getItem("bookingInfo")));
  }, []);

  const handleChange = (e) => {
    setPromoCode(e.target.value);
  };

  const handleSubmit = async (e) => {
    e.preventDefault();

    if (journeyInfo?.subtripId) {
      const response = await fetch(
        `${process.env.REACT_APP_API_MODULE_DOMAIN}/coupons/validation/${promoCode}/${journeyInfo?.subtripId}/${journeyDate?.returnDate}`
      );
      const result = await response.json();

      if (result?.status === "success") {
        setDiscountValue(result);
        localStorage.setItem("discount", JSON.stringify(result));
        localStorage.setItem(
          "subtripId",
          JSON.stringify(journeyInfo?.subtripId)
        );
      } else {
        const response = await fetch(
          `${process.env.REACT_APP_API_MODULE_DOMAIN}/coupons/validation/${promoCode}/${bookingInfo?.subtripId}/${journeyDate?.journeydate}`
        );
        const result = await response.json();
        setDiscountValue(result);
        localStorage.setItem("discount", JSON.stringify(result));
        localStorage.setItem(
          "subtripId",
          JSON.stringify(bookingInfo?.subtripId)
        );
      }
    } else {
      const response = await fetch(
        `${process.env.REACT_APP_API_MODULE_DOMAIN}/coupons/validation/${promoCode}/${bookingInfo?.subtripId}/${journeyDate?.journeydate}`
      );
      const result = await response.json();

      console.log("PromoCode", result);

      if (result?.status === "fail") {
        toast.error("code not valid");
      }

      setDiscountValue(result);
      localStorage.setItem("discount", JSON.stringify(result));
      localStorage.setItem("subtripId", JSON.stringify(bookingInfo?.subtripId));
    }
  };

  return (
    <Container>
      <Apply>
        <ApplyHeader>
          {languageData?.side_bar_dicount_title[webSettingData?.language]}
        </ApplyHeader>
        <ApplySubHeader>
          {languageData?.side_bar_dicount_sub_title[webSettingData?.language]}
        </ApplySubHeader>
        {/* <ApplySubHeader>Redeem</ApplySubHeader> */}
        <form onSubmit={handleSubmit}>
          <ApplyWrapper>
            <TextField
              id="promo_code"
              value={promoCode}
              type="text"
              onChange={handleChange}
              placeholder={
                languageData?.side_bar_promo_code_text[webSettingData?.language]
              }
            />
            <ApplyButton
              type="submit"
              btnbgcolor={webSettingData?.buttoncolor}
              btnbghvcolor={webSettingData?.buttoncolorhover}
              btntextcolor={webSettingData?.buttontextcolor}
            >
              {languageData?.side_bar_promo_code_btn[webSettingData?.language]}
            </ApplyButton>
          </ApplyWrapper>
        </form>
      </Apply>
    </Container>
  );
};

export default PromoCode;
