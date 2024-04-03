// import React from "react";
import Nevbar from "../components/Nevbar";
import "./style.css";
import Footer from "../components/Footer";

function About() {
  return (
    <>
      <Nevbar />
      <section
        className="inner-banner bg_img"
        style={{
          backgroundImage: 'url("/10.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">About</h2>
          </div>
        </div>
      </section>
      {/* Know Few Words About Autobus 
      About Us
      Why Make Bus Reservations With AutoBus */}
      <section className="about-section padding-top padding-bottom">
        <div className="container">
          <div className="row mb-4 mb-md-5 gy-4">
            <div className="col-lg-7 col-xl-6">
              <div className="about-content">
                <div className="section-header">
                  <h2 className="title">Know Few Words About Autobus</h2>
                </div>
                <p>
                  <div
                    className="section-header"
                    style={{
                      marginBottom: "20px",
                      color: "rgb(119, 119, 119)",
                      fontFamily: "Lato, sans-serif",
                    }}
                  >
                    <p
                      style={{
                        marginRight: "0px",
                        marginLeft: "0px",
                        padding: "0px",
                        fontSize: "18px",
                        color: "rgb(66, 66, 72)",
                        textAlign: "justify",
                      }}
                    >
                      Lorem ipsum dolor sit amet, consectetur adipiscing elit,
                      sed do eiusmod tempor incididunt ut labore et dolore magna
                      aliqua. Tempus imperdiet nulla malesuada pellentesque elit
                      eget gravida cum sociis. Malesuada fames ac turpis egestas
                      integer eget aliquet nibh. Tempor orci eu lobortis
                      elementum nibh tellus molestie.
                    </p>
                  </div>
                  <p
                    style={{
                      marginRight: "0px",
                      marginLeft: "0px",
                      padding: "0px",
                      color: "rgb(119, 119, 119)",
                      fontFamily: "Lato, sans-serif",
                      fontSize: "16px",
                      textAlign: "justify",
                    }}
                  >
                    Enim nulla aliquet porttitor lacus luctus accumsan. Aliquam
                    sem fringilla ut morbi tincidunt. Ac felis donec et odio.
                    Gravida cum sociis natoque penatibus et magnis dis
                    parturient. Ultricies leo integer malesuada nunc vel risus
                    commodo viverra maecenas. Tincidunt arcu non sodales neque
                    sodales ut. Dui accumsan sit amet nulla facilisi morbi
                    tempus iaculis. Viverra tellus in hac habitasse. Venenatis
                    lectus magna fringilla urna porttitor. Vulputate ut pharetra
                    sit amet. Purus sit amet volutpat consequat mauris nunc
                    congue. Commodo ullamcorper a lacus vestibulum sed arcu.
                    Nibh ipsum consequat nisl vel pretium lectus quam id leo.
                  </p>{" "}
                </p>
              </div>
            </div>
            <div className="col-lg-5 col-xl-6">
              <div className="about-thumb">
                <img src="/14.jpg" alt="Know Few Words About Autobus" />
              </div>
            </div>
          </div>
          <div className="about-details">
            <div className="item">
              <h4 className="title">About Us</h4>
              <p>
                <div
                  className="item"
                  style={{
                    marginRight: "0px",
                    marginLeft: "0px",
                    padding: "0px",
                    color: "rgb(119, 119, 119)",
                    fontFamily: "Lato, sans-serif",
                    fontSize: "16px",
                  }}
                >
                  <p
                    style={{
                      marginRight: "0px",
                      marginBottom: "10px",
                      marginLeft: "0px",
                      padding: "0px",
                      textAlign: "justify",
                    }}
                  >
                    Amet purus gravida quis blandit turpis cursus in. Aliquam
                    ultrices sagittis orci a scelerisque purus semper. Malesuada
                    pellentesque elit eget gravida cum sociis natoque penatibus
                    et. Risus quis varius quam quisque. Rhoncus est pellentesque
                    elit ullamcorper dignissim cras. Porta non pulvinar neque
                    laoreet suspendisse interdum. Morbi quis commodo odio aenean
                    sed adipiscing diam donec adipiscing. Faucibus a
                    pellentesque sit amet porttitor eget dolor morbi. Elementum
                    pulvinar etiam non quam. Sed risus pretium quam vulputate
                    dignissim suspendisse in est. Ante metus dictum at tempor
                    commodo ullamcorper a. Diam donec adipiscing tristique risus
                    nec.
                  </p>
                  <p
                    style={{
                      marginRight: "0px",
                      marginBottom: "10px",
                      marginLeft: "0px",
                      padding: "0px",
                      textAlign: "justify",
                    }}
                  >
                    Massa sapien faucibus et molestie. At lectus urna duis
                    convallis convallis tellus id interdum. Felis donec et odio
                    pellentesque diam. Vitae justo eget magna fermentum iaculis
                    eu. Ipsum dolor sit amet consectetur adipiscing elit ut.
                    Consectetur purus ut faucibus pulvinar elementum. Viverra
                    maecenas accumsan lacus vel facilisis volutpat est. Risus
                    ultricies tristique nulla aliquet enim tortor at auctor. In
                    pellentesque massa placerat duis. Fames ac turpis egestas
                    sed tempus urna et pharetra. In tellus integer feugiat
                    scelerisque varius morbi. Nullam ac tortor vitae purus. Dui
                    id ornare arcu odio ut. Sed vulputate mi sit amet mauris. At
                    lectus urna duis convallis convallis tellus.
                  </p>
                </div>
                <div
                  className="item"
                  style={{
                    marginBottom: "0px",
                    color: "rgb(119, 119, 119)",
                    fontFamily: "Lato, sans-serif",
                  }}
                >
                  <h4
                    className="title"
                    style={{
                      marginBottom: "10px",
                      fontWeight: 600,
                      lineHeight: 1.2,
                      fontSize: "24px",
                      color: "rgb(66, 66, 72)",
                      fontFamily: "Georama, sans-serif",
                    }}
                  >
                    Why Make Bus Reservations With AutoBus
                  </h4>
                  <p
                    style={{
                      marginRight: "0px",
                      marginBottom: "10px",
                      marginLeft: "0px",
                      padding: "0px",
                      textAlign: "justify",
                    }}
                  >
                    Sed vulputate mi sit amet mauris commodo. Amet venenatis
                    urna cursus eget nunc scelerisque viverra. Aliquet lectus
                    proin nibh nisl condimentum id venenatis a condimentum.
                    Ultrices neque ornare aenean euismod. Id velit ut tortor
                    pretium viverra suspendisse potenti nullam ac. Nec sagittis
                    aliquam malesuada bibendum arcu vitae elementum. Tincidunt
                    ornare massa eget egestas purus viverra accumsan in nisl.
                    Rhoncus urna neque viverra justo nec ultrices dui sapien.
                    Duis convallis convallis tellus id interdum. Aliquet nibh
                    praesent tristique magna sit amet. Ultricies integer quis
                    auctor elit sed vulputate mi. Leo vel orci porta non
                    pulvinar neque. Sed id semper risus in hendrerit gravida.
                    Accumsan in nisl nisi scelerisque eu ultrices. Sollicitudin
                    nibh sit amet commodo nulla facilisi. Et magnis dis
                    parturient montes nascetur ridiculus mus.
                  </p>
                  <ul
                    style={{
                      listStyleType: "disc",
                      textAlign: "left",
                      fontWeight: "bold",
                    }}
                  >
                    <li>1. Free Cancellation</li>
                    <li>2. Instant Refunds</li>
                    <li>3. Easy &amp; Quick Bus Booking</li>
                    <li>4. Exciting Cashback &amp; Bus Offers</li>
                    <li>5. Best Price Assured</li>
                    <li>6. 24/7 Customer Assistance</li>
                  </ul>
                </div>
                <h2
                  className="title"
                  style={{
                    marginTop: "-10px",
                    marginBottom: "15px",
                    fontWeight: 600,
                    lineHeight: 1.2,
                    fontSize: "36px",
                    color: "rgb(66, 66, 72)",
                    fontFamily: "Georama, sans-serif",
                  }}
                ></h2>{" "}
              </p>
            </div>
          </div>
        </div>
      </section>
      {/* Frequently Asked Questions */}
      <section className="faq-section padding-top padding-bottom">
        <div className="container">
          <div className="row justify-content-center">
            <div className="col-lg-6 col-md-8">
              <div className="section-header text-center">
                <h2 className="title">Frequently Asked Questions</h2>
              </div>
            </div>
          </div>
          <p style={{ textAlign: "justify" }}>
            In hendrerit gravida rutrum quisque non tellus orci ac auctor. Elit
            pellentesque habitant morbi tristique senectus. Molestie at
            elementum eu facilisis sed odio. Massa eget egestas purus viverra
            accumsan in. Suspendisse ultrices gravida dictum fusce. Mauris augue
            neque gravida in fermentum. Habitasse platea dictumst quisque
            sagittis purus sit amet volutpat. Quis lectus nulla at volutpat diam
            ut venenatis tellus.
          </p>
          <div className="row justify-content-center">
            <div className="col-lg-6">
              <div className="faq-wrapper">
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">
                      Can we choose corporation buses from anywhere?
                    </h5>
                    <p>
                      Orangu ipsum dolor sit amet consectetur adipisicing elit.
                      Sed minima porro aliquid eius laudantium ad quod a
                      corrupti impedit, reiciendis iusto ut aperiam tenetur fuga
                      repellendus tempore necessitatibus omnis libero?
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">
                      Can we choose corporation buses from anywhere?
                    </h5>
                    <p>
                      Orangu ipsum dolor sit amet consectetur adipisicing elit.
                      Sed minima porro aliquid eius laudantium ad quod a
                      corrupti impedit, reiciendis iusto ut aperiam tenetur fuga
                      repellendus tempore necessitatibus omnis libero.reiciendis
                      iusto ut aperiam tenetur fuga repellendus tempore
                      necessitatibus omnis libero.reiciendis iusto ut aperiam
                      tenetur fuga repellendus tempore necessitatibus omnis
                      libero.repellendus tempore necessitatibus omnis libero
                      necessitatibus omnis?
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">What is Lorem Ipsum?</h5>
                    <p>
                      Lorem Ipsum is simply dummy text of the printing and
                      typesetting industry. Lorem Ipsum has been the standard
                      dummy text ever since the 1500s, when an unknown printer
                      took a galley of type and scrambled it to make a type
                      specimen book. It has survived not only five centuries,
                      but also the leap into electronic typesetting, remaining
                      essentially unchanged. It was popularised in the 1960s
                      with the release of Letraset sheets containing Lorem Ipsum
                      passages, and more recently with desktop publishing
                      software like Aldus PageMaker including versions of Lorem
                      Ipsum.
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">Where does it come from?</h5>
                    <p>
                      Lorem Ipsum is simply dummy text of the printing and
                      typesetting industry. Lorem Ipsum has been the industry's
                      standard dummy text ever since the 1500s, when an unknown
                      printer took a galley of type and scrambled it to make a
                      type specimen book. It has survived not only five
                      centuries, but also the leap into electronic typesetting,
                      remaining essentially unchanged. It was popularised in the
                      1960s with the release of Letraset sheets containing Lorem
                      Ipsum passages, and more recently with desktop publishing
                      software like Aldus PageMaker including versions of Lorem
                      Ipsum.
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">What is Lorem Ipsum?</h5>
                    <p>
                      Lorem Ipsum is simply dummy text of the printing and
                      typesetting industry. Lorem Ipsum has been the industry's
                      standard dummy text ever since the 1500s, when an unknown
                      printer took a galley of type and scrambled it to make a
                      type specimen book. It has survived not only five
                      centuries, but also the leap into electronic typesetting,
                      remaining essentially unchanged. It was popularised in the
                      1960s with the release of Letraset sheets containing Lorem
                      Ipsum passages, and more recently with desktop publishing
                      software like Aldus PageMaker including versions of Lorem
                      Ipsum.
                    </p>
                  </div>
                </div>
              </div>
            </div>
            <div className="col-lg-6">
              <div className="faq-wrapper">
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">Where does it come from?</h5>
                    <p>
                      Contrary to popular belief, Lorem Ipsum is not simply
                      random text. It has roots in a piece of classical Latin
                      literature from 45 BC, making it over 2000 years old.
                      Richard McClintock, a Latin professor at Hampden-Sydney
                      College in Virginia, looked up one of the more obscure
                      Latin words, consectetur, from a Lorem Ipsum passage, and
                      going through the cites of the word in classical
                      literature, discovered the undoubtable source. Lorem Ipsum
                      comes from sections 1.10.32 and 1.10.33 of "de Finibus
                      Bonorum et Malorum" (The Extremes of Good and Evil) by
                      Cicero, written in 45 BC. This book is a treatise on the
                      theory of ethics, very popular during the Renaissance. The
                      first line of Lorem Ipsum, "Lorem ipsum dolor sit amet..",
                      comes from a line in section 1.10.32.
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">What is Lorem Ipsum?</h5>
                    <p>
                      Lorem Ipsum is simply dummy text of the printing and
                      typesetting industry. Lorem Ipsum has been the industry's
                      standard dummy text ever since the 1500s, when an unknown
                      printer took a galley of type and scrambled it to make a
                      type specimen book. It has survived not only five
                      centuries, but also the leap into electronic typesetting,
                      remaining essentially unchanged. It was popularised in the
                      1960s with the release of Letraset sheets containing Lorem
                      Ipsum passages, and more recently with desktop publishing
                      software like Aldus PageMaker including versions of Lorem
                      Ipsum.
                    </p>
                  </div>
                </div>
                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">What is Lorem Ipsum?</h5>
                    <p>
                      Lorem Ipsum is simply dummy text of the printing and
                      typesetting industry. Lorem Ipsum has been the industry's
                      standard dummy text ever since the 1500s, when an unknown
                      printer took a galley of type and scrambled it to make a
                      type specimen book. It has survived not only five
                      centuries, but also the leap into electronic typesetting,
                      remaining essentially unchanged. It was popularised in the
                      1960s with the release of Letraset sheets containing Lorem
                      Ipsum passages, and more recently with desktop publishing
                      software like Aldus PageMaker including versions of Lorem
                      Ipsum.
                    </p>
                  </div>
                </div>

                <div className="faq-item">
                  <div
                    className="faq-title"
                    style={{ display: "block", textAlign: "justify" }}
                  >
                    <h5 className="title">Why do we use it?</h5>
                    <p>
                      There are many variations of passages of Lorem Ipsum
                      available, but the majority have suffered alteration in
                      some form, by injected humour, or randomised words which
                      don't look even slightly believable. If you are going to
                      use a passage of Lorem Ipsum, you need to be sure there
                      isn't anything embarrassing hidden in the middle of text.
                      All the Lorem Ipsum generators on the Internet tend to
                      repeat predefined chunks as necessary, making this the
                      first true generator on the Internet. It uses a dictionary
                      of over 200 Latin words, combined with a handful of model
                      sentence structures, to generate Lorem Ipsum which looks
                      reasonable. The generated Lorem Ipsum is therefore always
                      free from repetition, injected humour, or
                      non-characteristic words etc.
                    </p>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>
      <Footer />
    </>
  );
}

export default About;
