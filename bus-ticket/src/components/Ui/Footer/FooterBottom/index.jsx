import { useSelector } from "react-redux";
import { useHistory } from "react-router";
import Container from "../../../../bootstrap/Container/";
import languageData from "../../../../lib/lang.config.json";
import SocialMedia from "../../SocialMedia";
import {
  CopyRight,
  FollowTitle,
  FooterBottomLeft,
  FooterBottomRight,
  FooterLogo,
  InnerFooterBottom,
  Wrapper,
} from "./FooterBottom.styles.js";

const FooterBottom = () => {
  const { webSettingData } = useSelector((state) => state.busLists);
  const currentYear = new Date().getFullYear();
  const history = useHistory();

  const handelarClick = () => {
    history.push("/");
  };

  return (
    <Wrapper bgColor={webSettingData?.bottomfootercolor}>
      <Container>
        <InnerFooterBottom>
          <FooterBottomLeft>
            <FooterLogo
              img={webSettingData?.footerlogo}
              alt="logo"
              onClick={handelarClick}
            />
            <CopyRight>
              &copy; {currentYear} {webSettingData?.copyright}
            </CopyRight>
          </FooterBottomLeft>

          {/* end footer left */}

          <FooterBottomRight>
            <FollowTitle>
              {languageData?.footer_bottom_title[webSettingData?.language]}
            </FollowTitle>
            <SocialMedia />
          </FooterBottomRight>
          {/* end footer right */}
        </InnerFooterBottom>
      </Container>
    </Wrapper>
  );
};

export default FooterBottom;
