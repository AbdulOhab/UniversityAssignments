import { useSelector } from "react-redux";
import languageData from "../../../lib/lang.config.json";
import {
  BorddingAndDroppingPoint,
  CommonHeader,
  Container,
  LocationFrom,
  LocationFromName,
  LocationName,
  LocationRoadName,
  LocationTo,
  Time,
} from "./SelectedBoardingAndDropping.styles.js";

const SelectedBoardingAndDropping = ({
  boardingInfromation,
  droppingInformation,
}) => {
  const { webSettingData } = useSelector((state) => state.busLists);

  return (
    <Container>
      <BorddingAndDroppingPoint>
        <div>
          <CommonHeader>
            {languageData?.selected_boarding_title[webSettingData?.language]}
          </CommonHeader>
          <LocationFrom>
            <LocationFromName>
              <LocationName>{boardingInfromation.standName}</LocationName>
              <LocationRoadName>{boardingInfromation.detail}</LocationRoadName>
            </LocationFromName>
            <Time>{boardingInfromation.time}</Time>
          </LocationFrom>
        </div>

        <div>
          <CommonHeader>
            {languageData?.selected_dropping_title[webSettingData?.language]}
          </CommonHeader>
          <LocationTo>
            <LocationFromName>
              <LocationName>{droppingInformation.standName}</LocationName>
              <LocationRoadName>{droppingInformation.detail}</LocationRoadName>
            </LocationFromName>
            <Time>{droppingInformation.time}</Time>
          </LocationTo>
        </div>
      </BorddingAndDroppingPoint>
    </Container>
  );
};

export default SelectedBoardingAndDropping;
