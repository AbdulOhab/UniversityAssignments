import { useState } from "react";
import { useDispatch, useSelector } from "react-redux";
import { useHistory } from "react-router-dom";
import { toast } from "react-toastify";
import languageData from "../../../lib/lang.config.json";
import {
  regularBookingInformation,
  ticketTracking,
} from "../../../redux/action/busAction";
import {
  Form,
  Input,
  InputInnerWrapper,
  Label,
  SubmitButton,
  Title,
  Wrapper,
} from "./TrackOrder.styles";

const TrackOrder = () => {
  const { webSettingData } = useSelector((state) => state.busLists);
  const [ticketId, setTicketId] = useState("");
  const history = useHistory();
  const dispatch = useDispatch();

  const handleTrack = async (e) => {
    e.preventDefault();
    dispatch(regularBookingInformation(" "));

    if (ticketId === "") {
      toast.error("Give your ticket id");
    }
    try {
      const response = await fetch(
        `${process.env.REACT_APP_API_MODULE_DOMAIN}/tickets/bookingid/${ticketId}`
      );
      const result = await response.json();

      if (result?.status === "success") {
        dispatch(ticketTracking(result?.data));
        toast.success("success");
        history.push("/ticket-traking");
      }
    } catch (error) {
      console.log("Tracking error", error);
    }
  };

  return (
    <Wrapper>
      <Title>{languageData?.track_title[webSettingData?.language]}</Title>

      <Form onSubmit={handleTrack}>
        <Label htmlFor="ticketId">
          {" "}
          {languageData?.track_sub_title[webSettingData?.language]}
        </Label>
        <InputInnerWrapper>
          <Input
            type="text"
            id="ticketId"
            value={ticketId}
            onChange={(e) => setTicketId(e.target.value)}
          />
          <SubmitButton
            type="submit"
            btnbgcolor={webSettingData?.buttoncolor}
            btnbghvcolor={webSettingData?.buttoncolorhover}
            btntextcolor={webSettingData?.buttontextcolor}
          >
            {languageData?.track_button_text[webSettingData?.language]}
          </SubmitButton>
        </InputInnerWrapper>
      </Form>
    </Wrapper>
  );
};

export default TrackOrder;
