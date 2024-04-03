import { useSelector } from "react-redux";
import { Link } from "react-router-dom";
import android from "../../../../assets/images/android.png";
import apple from "../../../../assets/images/ios-1.png";
import Container from "../../../../bootstrap/Container/";
import languageData from "../../../../lib/lang.config.json";
import ScrollUp from "../../ScrollUP";
import {
  About,
  Address,
  CommonNavItem,
  Download,
  DownloadHeader,
  FooterBottomWrapper,
  FooterIcon,
  InnerAbout,
  InnerPrivacy,
  Privacy,
  SocialImage,
  Wrapper,
} from "./FooterBottom.styles.js";

const FooterTop = () => {
  const { webSettingData, contactInfoData, appDataAction } = useSelector(
    (state) => state.busLists
  );

  return (
    <Wrapper bgColor={webSettingData?.footercolor}>
      <Container>
        <FooterBottomWrapper>
          <Address>
            Phone: {contactInfoData?.contact} <br />
            {contactInfoData?.opentime} <br /> {contactInfoData?.address}
          </Address>

          <About>
            <InnerAbout>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/about">
                  {
                    languageData?.footer_top_about_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/blog">
                  {
                    languageData?.footer_top_blog_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/faq">
                  {
                    languageData?.footer_top_FAQ_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/contact-us">
                  {
                    languageData?.footer_top_contact_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
            </InnerAbout>
          </About>

          <Privacy>
            <InnerPrivacy>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/privacy">
                  {
                    languageData?.footer_top_privacy_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/cookies">
                  {
                    languageData?.footer_top_cookies_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
              <CommonNavItem hvcolor={webSettingData?.headercolor}>
                <Link to="/terms-and-condition">
                  {
                    languageData?.footer_top_terms_button[
                    webSettingData?.language
                    ]
                  }
                </Link>
              </CommonNavItem>
            </InnerPrivacy>
          </Privacy>

          <Download>
            {(appDataAction?.button_one_status == '1' || appDataAction?.button_two_status == '1') && (
              <>
                <DownloadHeader>
                  {languageData?.footer_top_download_app[webSettingData?.language]}
                </DownloadHeader>
                <FooterIcon>

                  {appDataAction?.button_one_status != '0' && (
                    <a
                      href={appDataAction?.button_one_link}
                      target="_blank"
                      rel="noreferrer"
                    >
                      <SocialImage img={apple} alt="android" />
                    </a>
                  )}

                  {appDataAction?.button_two_status != '0' && (
                    <a
                      href={appDataAction?.button_two_link}
                      target="_blank"
                      rel="noreferrer"
                    >
                      <SocialImage img={android} alt="apple" />
                    </a>
                  )}

                </FooterIcon>
              </>
            )}
            <ScrollUp />
          </Download>
        </FooterBottomWrapper>
      </Container>
    </Wrapper>
  );
};

export default FooterTop;
