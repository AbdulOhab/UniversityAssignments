import { useEffect, useState } from 'react';
import { useSelector } from 'react-redux';
import { useHistory } from 'react-router';
import Container from '../../../bootstrap/Container/';
import {
  HeroBtn,
  HeroHeader,
  HeroSubHeader,
  HeroTextWrapper,
  HeroWrapper,
} from './Hero.styles.js';

const Hero = ({
  img,
  header,
  subHeader,
  btnText,
  locationRef,
  ...styles
}) => {
  const { webSettingData } = useSelector((state) => state.busLists);
  const [heroData, setHeroData] = useState([]);
  const history = useHistory();
  const isHome = history.location.pathname !== '/';

  const getHeroData = async () => {
    const response = await fetch(
      `${process.env.REACT_APP_API_DOMAIN}/hero`
    );
    const result = await response.json();
    setHeroData(result.data[0]);
  };

  useEffect(() => {
    try {
      getHeroData();
      return () => {
        setHeroData({});
      };
    } catch (error) {
      console.error('hero error', error);
    }
  }, []);

  const cursorPointer = () => {
    locationRef?.current?.focus();
  };

  return (
    <HeroWrapper img={heroData?.image} {...styles}>
      <Container>
        <HeroTextWrapper>
          {!isHome && (
            <>
              <HeroHeader>{heroData?.title}</HeroHeader>
              <HeroSubHeader>{heroData?.sub_title}</HeroSubHeader>
              <HeroBtn
                btnbgcolor={webSettingData?.buttoncolor}
                btnhvcolor={webSettingData?.buttoncolorhover}
                btntextcolor={webSettingData?.buttontextcolor}
                onClick={cursorPointer}
              >
                {heroData?.button_text}
              </HeroBtn>
            </>
          )}
          {isHome && (
            <>
              {header && (
                <>
                  <HeroHeader>{header}</HeroHeader>
                  <HeroSubHeader>{subHeader}</HeroSubHeader>
                </>
              )}
            </>
          )}
        </HeroTextWrapper>
      </Container>
    </HeroWrapper>
  );
};

export default Hero;
