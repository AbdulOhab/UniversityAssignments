import { useSelector } from "react-redux";
import Truncate from "../../../bootstrap/Truncate/index.jsx";
import languageData from "../../../lib/lang.config.json";
import {
  CardWrapper,
  ReadMoreBtn,
  RelatedCalendar,
  RelatedCalenderImg,
  RelatedDate,
  SingleImg,
  TextWrapper,
  Title,
} from "./Card.styles.js";

const Card = ({
  item,
  icon,
  headerLength,
  url,
  descriptaionLength,
  ...styles
}) => {
  const { webSettingData } = useSelector((state) => state.busLists);

  return (
    <CardWrapper {...styles}>
      <SingleImg src={item?.image} alt="workAreasPhoto" {...styles} />
      <TextWrapper>
        {icon && (
          <RelatedCalendar>
            <RelatedCalenderImg src={icon} alt="calendarIcon" />
            <RelatedDate>{item?.created_at}</RelatedDate>
          </RelatedCalendar>
        )}
        <Title header={item?.title} headerLength={headerLength} />
        <Truncate str={item?.description} number={descriptaionLength} />
        <ReadMoreBtn
          to={`${url}`}
          btnbgcolor={webSettingData?.buttoncolor}
          btnbghvcolor={webSettingData?.buttoncolorhover}
          btntextcolor={webSettingData?.buttontextcolor}
        >
          {item?.button_text
            ? item?.button_text
            : languageData?.card_read_more_btn[webSettingData?.language]}
        </ReadMoreBtn>
      </TextWrapper>
    </CardWrapper>
  );
};

export default Card;
