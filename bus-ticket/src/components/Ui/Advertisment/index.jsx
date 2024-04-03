import React from "react";
import { AdvertisementWrapper } from "./Advertisment.styles";

const Advertisment = ({ advertisement }) => {
  return (
    <AdvertisementWrapper>
      {
        advertisement?.image_path == '' ? <></> : <>
          <a href={advertisement?.link}>
            <img src={advertisement?.image_path} alt="add" />
          </a></>
      }
    </AdvertisementWrapper>
  );
};

export default Advertisment;
