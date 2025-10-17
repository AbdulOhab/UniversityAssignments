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
          backgroundImage: 'url("/bus6.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">Blog Page</h2>
          </div>
        </div>
      </section>

      {/* <!-- Blog Section Starts Here --> */}
      <section className="blog-section padding-top">
        <div className="container">
          <div className="row">
            <div className="col-lg-12 col-md-12">
              <div className="row justify-content-center g-4">
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img
                        src="/bus15.jpg"
                        alt="The standard Lorem Ipsum passage, used since the 1500s"
                      />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>19 Feb 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          The standard Lorem Ipsum passage, used since the 1500s
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        &quot;Lorem ipsum dolor sit amet, consectetur adipiscing
                        elit, sed do eiusmod tempor incididunt ut labore et
                        dolore magna ali...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img src="/bus13.jpg" alt="Lorem Ipsum is simply dummy" />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>19 Feb 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          Lorem Ipsum is simply dummy
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        Lorem Ipsum is simply dummy text of the printing and
                        typesetting industry. Lorem Ipsum has been the
                        industry&#039;s standard...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img src="/bus14.jpg" alt="Why do we use it?" />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>19 Feb 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          Why do we use it?
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        Contrary to popular belief, Lorem Ipsum is not simply
                        random text. It has roots in a piece of classNameical
                        Latin literature...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img src="/bus12.jpg" alt="Where can I get some?" />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>19 Feb 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          Where can I get some?
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        There are many variations of passages of Lorem Ipsum
                        available, but the majority have suffered alteration in
                        some form,...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img src="/bus11.jpg" alt="Why buy tickets from us?" />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>26 Jan 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          Why buy tickets from us?
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        Contrary to popular belief, Lorem Ipsum is not simply
                        random text. It has roots in a piece of classical Latin
                        literature...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img src="/bus8.jpg" alt="A wonderful bus journy." />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>26 Jan 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          A wonderful bus journy.
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        In most legal cases there are one or more accusers and
                        one or more defendants. A legal case is typically based
                        on either...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img
                        src="/bus5.jpg"
                        alt="A consectetur adipisicing elit."
                      />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>26 Jan 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          A consectetur adipisicing elit.
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        In most legal cases there are one or more accusers and
                        one or more defendants. A legal case is typically based
                        on either...
                      </p>
                    </div>
                  </div>
                </div>
                <div className="col-lg-3 col-md-3 col-sm-10">
                  <div className="post-item">
                    <div className="post-thumb">
                      <img
                        src="/bus6.jpg"
                        alt="What to do if your bus get demaged?"
                      />
                    </div>
                    <div className="post-content">
                      <ul className="post-meta">
                        <li>
                          <span className="date">
                            <i className="las la-calendar-check"></i>26 Jan 2022
                          </span>
                        </li>
                      </ul>
                      <h4 className="title">
                        <a
                          href="/BlogPost"
                          style={{ textDecoration: "none", textAlign: "left" }}
                        >
                          What to do if your bus get demaged?
                        </a>
                      </h4>
                      <p style={{ textDecoration: "none", textAlign: "left" }}>
                        In most legal cases there are one or more accusers and
                        one or more defendants. A legal case is typically based
                        on either...
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <ul className="pagination"></ul>
            </div>
          </div>
        </div>
      </section>
      <Footer />
    </>
  );
}

export default About;
