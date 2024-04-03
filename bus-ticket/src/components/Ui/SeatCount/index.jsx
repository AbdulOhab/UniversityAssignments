import { useEffect, useState } from "react";
import { useSelector } from "react-redux";
import { toast } from "react-toastify";
import languageData from "../../../lib/lang.config.json";
import {
  Adult,
  Children,
  InputArea,
  InputHeader,
  SingleInput,
  Special,
} from "./SeatCount.styles.js";

const SeatCount = ({
  totalSelectSeat,
  setTotalSelectSeat,
  setAdultSelectSeat,
  adultSelectSeat,
  setSpecialSelectSeat,
  childrenSelectSeat,
  setChildrenSelectSeat,
  specialSelectSeat,
}) => {
  const { webSettingData } = useSelector((state) => state.busLists);
  const [bookingData, setBookingData] = useState(null);

  useEffect(() => {
    const bookingInfo = JSON.parse(localStorage.getItem("bookingInfo"));
    setBookingData(bookingInfo);
  }, []);

  console.log("bookingData", bookingData);

  const handleChildren = (e) => {
    if (e.target.value < 0) return;

    if (e.target.value > Number(totalSelectSeat)) {
      toast.error(`You can't take more than ${totalSelectSeat} seat(s)`);
    } else {
      if (e.target.value > Number(bookingData?.cseat)) {
        toast.error(`Maximum ${bookingData?.cseat || 0} seat(s) are available for children.`);
        setChildrenSelectSeat("");
        return;
      }

      setChildrenSelectSeat(e.target.value);
      setAdultSelectSeat(Number(specialSelectSeat) + totalSelectSeat - e.target.value);
    }
  };

  const handleAdult = (e) => {
    if (e.target.value < 0) return;

    if (e.target.value > Number(totalSelectSeat)) {
      toast.error(`you can't take more than ${totalSelectSeat} seat(s)`);
      setAdultSelectSeat(Number(totalSelectSeat));
    } else {
      setAdultSelectSeat(e.target.value);
    }
  };

  const handleSpecial = (e) => {
    if (e.target.value < 0) return;

    if (e.target.value > Number(totalSelectSeat)) {
      toast.error(`You can't take more than ${totalSelectSeat} seat(s)`);
    } else {
      if (e.target.value > Number(bookingData?.spseat)) {
        toast.error(`Maximum ${bookingData?.cseat || 0} seat(s) are available for special.`);
        setSpecialSelectSeat("");
        return;
      }

      setSpecialSelectSeat(e.target.value);
      setAdultSelectSeat(totalSelectSeat - Number(childrenSelectSeat) - e.target.value);
    }
  };

  return (
    <>
      <InputArea>
        <Children>
          <InputHeader htmlFor="children">
            {languageData?.booking_page_children_seat[webSettingData?.language]}
          </InputHeader>
          <SingleInput
            id="children"
            type="number"
            inputProps={{ min: 0, max: bookingData?.cseat }}
            min={0}
            max={bookingData?.cseat}
            value={childrenSelectSeat}
            onChange={handleChildren}
            placeholder="0"
          />
        </Children>
        {/* end children */}

        <Adult>
          <InputHeader htmlFor="adult">
            {languageData?.booking_page_adul_seat[webSettingData?.language]}
          </InputHeader>
          <SingleInput
            id="adult"
            type="number"
            value={adultSelectSeat}
            onChange={handleAdult}
            placeholder="0"
          />
        </Adult>
        {/* end Adult */}

        <Special>
          <InputHeader htmlFor="special">
            {languageData?.booking_page_special_seat[webSettingData?.language]}
          </InputHeader>
          <SingleInput
            id="special"
            type="number"
            inputProps={{ min: 0, max: bookingData?.spseat }}
            min={0}
            max={bookingData?.spseat}
            value={specialSelectSeat}
            onChange={handleSpecial}
            placeholder="0"
          />
        </Special>
        {/* end Spcial */}
      </InputArea>
      {/* end input area */}
    </>
  );
};

export default SeatCount;
