// import React from "react";
import Nevbar from "../components/Nevbar";
import "./style.css";
import Footer from "../components/Footer";

function BlogPost() {
  return (
    <>
      <Nevbar />
      <section
        className="inner-banner bg_img"
        style={{
          backgroundImage: 'url("/bus10.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">Policy Details</h2>
          </div>
        </div>
      </section>
      <section className="privacy-policy padding-top padding-bottom">
        <div className="container">
          <div className="row gy-5">
            <div className="col-lg-12">
              <div className="privacy-policy-content">
                <p>
                  <h4
                    className="title"
                    style={{
                      margin: "0px 0px 15px",
                      fontWeight: 600,
                      lineHeight: 1.2,
                      fontSize: "24px",
                      color: "rgb(66,66,72)",
                      fontFamily: "Georama, sans-serif",
                    }}
                  ></h4>
                  <h4
                    className="title"
                    style={{
                      marginBottom: "15px",
                      fontWeight: 600,
                      lineHeight: 1.2,
                      fontSize: "24px",
                      color: "rgb(66,66,72)",
                      fontFamily: "Georama, sans-serif",
                    }}
                  ></h4>
                  <div
                    className="content-item"
                    style={{
                      marginBottom: "40px",
                      color: "rgb(119,119,119)",
                      fontFamily: "Lato, sans-serif",
                      fontSize: "16px",
                      fontWeight: 400,
                    }}
                  >
                    <p
                      style={{
                        marginRight: "0px",
                        marginLeft: "0px",
                        padding: "0px",
                        textDecoration: "none",
                        textAlign: "left",
                      }}
                    >
                      Lorem ipsum dolor sit amet, consectetur adipiscing elit.
                      Duis sem eros, luctus at sem id, commodo maximus mi. In
                      finibus ac mi vitae gravida. Cras hendrerit sit amet quam
                      vel vehicula. Sed id malesuada ante. Etiam vel diam
                      ligula. Nam malesuada nisi sit amet tempor ultricies.
                      Pellentesque felis sapien, fermentum nec tortor nec,
                      consectetur scelerisque risus. Maecenas et mauris odio.
                      Etiam finibus ex vel laoreet semper. Phasellus eget mauris
                      a elit lacinia condimentum. Sed vitae consectetur nibh.
                    </p>
                  </div>
                  <div
                    className="content-item"
                    style={{
                      marginBottom: "40px",
                      color: "rgb(119,119,119)",
                      fontFamily: "Lato, sans-serif",
                      fontSize: "16px",
                      fontWeight: 400,
                    }}
                  >
                    <p
                      style={{
                        marginRight: "0px",
                        marginLeft: "0px",
                        padding: "0px",
                        textDecoration: "none",
                        textAlign: "left",
                      }}
                    >
                      Donec id dui in nibh pellentesque congue. Cras sit amet
                      dictum nisi, a cursus dui. Pellentesque ac hendrerit
                      lacus. Integer faucibus velit et mauris porta, sit amet
                      mollis turpis maximus. Mauris eu semper augue. Curabitur
                      bibendum tellus nec pellentesque elementum. In imperdiet
                      efficitur volutpat. Sed lobortis ultrices eros. Cras
                      efficitur purus vel velit molestie, a blandit metus porta.
                      Fusce nec diam lectus. In iaculis ante consequat dolor
                      vehicula facilisis. Suspendisse gravida turpis vitae risus
                      dignissim, id finibus lacus maximus. Aliquam urna orci,
                      fermentum ac placerat quis, elementum ut dolor.
                    </p>
                  </div>{" "}
                </p>
              </div>
            </div>
          </div>
        </div>
      </section>
      <Footer />
    </>
  );
}

export default BlogPost;
