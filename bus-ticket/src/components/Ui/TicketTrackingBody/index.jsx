import { useEffect, useState } from "react";
import { useSelector } from "react-redux";
import { dateForm } from "../../../helpers";
import languageData from "../../../lib/lang.config.json";
import {
  Amount,
  AmountProperty,
  AmountWrapper,
  BookingTime,
  Discount,
  DropLocation,
  Due,
  JourneyDetails,
  JourneyDetailsProperty,
  JourneyTime,
  PickLocation,
  Seat,
  SeatAndAmount,
  SeatNumber,
  SeatProperty,
  Time,
  TimeProperty,
  Total,
  TotalTax,
  Wrapper,
} from "./TicketTrackingBody.style";

const TicketTrackingBody = () => {
  const { ticketTracking, webSettingData } = useSelector(
    (state) => state.busLists
  );
  const [boardingPoint, setBoardingPoint] = useState(null);
  const [droppingPoint, setDroppingPoint] = useState(null);
  const [standLists, setStandLists] = useState(null);

  useEffect(() => {
    fetch(
      `${process.env.REACT_APP_API_MODULE_DOMAIN}/triplist/boardings/${ticketTracking?.trip_id}`
    )
      .then((res) => res.json())
      .then((data) => setBoardingPoint(data.data));

    fetch(
      `${process.env.REACT_APP_API_MODULE_DOMAIN}/triplist/droppings/${ticketTracking?.trip_id}`
    )
      .then((res) => res.json())
      .then((data) => setDroppingPoint(data.data));

    fetch(`${process.env.REACT_APP_API_MODULE_DOMAIN}/stands`)
      .then((res) => res.json())
      .then((data) => setStandLists(data.data));
  }, [ticketTracking]);

  const PicktandName = (id) => {
    const findNumber = boardingPoint?.find((item) => item?.id === id);
    const findName = standLists?.find(
      (item) => item?.id === findNumber?.stand_id
    );
    return findName?.name;
  };

  const dropStandName = (id) => {
    const findNumber = droppingPoint?.find((item) => item?.id === id);
    const findName = standLists?.find(
      (item) => item?.id === findNumber?.stand_id
    );
    return findName?.name;
  };

  return (
    <Wrapper>
      <JourneyDetails>
        <PickLocation>
          <JourneyDetailsProperty>
            {
              languageData?.ticket_traking_page_pick_laction[
                webSettingData?.language
              ]
            }{" "}
          </JourneyDetailsProperty>
          : {PicktandName(ticketTracking?.pick_stand_id)}
        </PickLocation>
        <DropLocation>
          <JourneyDetailsProperty>
            {
              languageData?.ticket_traking_page_drop_laction[
                webSettingData?.language
              ]
            }{" "}
          </JourneyDetailsProperty>
          : {dropStandName(ticketTracking?.drop_stand_id)}
        </DropLocation>
      </JourneyDetails>

      <Time>
        <BookingTime>
          <TimeProperty>
            {
              languageData?.ticket_traking_page_booking_date[
                webSettingData?.language
              ]
            }
          </TimeProperty>
          : {dateForm(ticketTracking?.created_at)}{" "}
        </BookingTime>
        <JourneyTime>
          <TimeProperty>
            {
              languageData?.ticket_traking_page_journey_date[
                webSettingData?.language
              ]
            }
          </TimeProperty>
          : {dateForm(ticketTracking?.journeydata)}
        </JourneyTime>
      </Time>

      <SeatAndAmount>
        <Seat>
          <SeatProperty>
            {
              languageData?.ticket_traking_page_seat_number[
                webSettingData?.language
              ]
            }
          </SeatProperty>

          <SeatNumber> {ticketTracking?.seatnumber}</SeatNumber>
        </Seat>
        <AmountWrapper>
          <AmountProperty>
            {
              languageData?.ticket_traking_page_ammount[
                webSettingData?.language
              ]
            }
          </AmountProperty>

          <Amount>
            {" "}
            {webSettingData?.currency_symbol}
            {ticketTracking?.paidamount}
          </Amount>
        </AmountWrapper>
      </SeatAndAmount>

      <Discount>
        <div>
          {" "}
          {languageData?.ticket_traking_page_discount[webSettingData?.language]}
        </div>
        <div>
          {webSettingData?.currency_symbol}
          {ticketTracking?.discount}
        </div>
      </Discount>
      <TotalTax>
        <div>
          {
            languageData?.ticket_traking_page_total_tax[
              webSettingData?.language
            ]
          }
        </div>
        <div>
          {webSettingData?.currency_symbol}
          {ticketTracking?.totaltax}
        </div>
      </TotalTax>
      <Total>
        <div>
          {languageData?.ticket_traking_page_total[webSettingData?.language]}
        </div>
        <div>
          {webSettingData?.currency_symbol}
          {ticketTracking?.paidamount}
        </div>
      </Total>

      {ticketTracking?.payment_status === "unpaid" && (
        <Due>
          <div>
            {languageData?.ticket_traking_page_due[webSettingData?.language]}
          </div>
          <div>
            {webSettingData?.currency_symbol}
            {ticketTracking?.paidamount}
          </div>
        </Due>
      )}
    </Wrapper>
  );
};

export default TicketTrackingBody;
