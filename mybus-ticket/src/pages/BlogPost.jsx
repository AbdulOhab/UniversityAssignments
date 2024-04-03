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
          backgroundImage: 'url("/bus6.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">Blog Details</h2>
          </div>
        </div>
      </section>

      <section className="blog-details padding-top padding-bottom">
        <div className="container">
          <div className="row gy-5">
            <div className="col-lg-8">
              <div className="post-thumb">
                <img
                  src="/bus7.jpg"
                  alt="The standard Lorem Ipsum passage, used since the 1500s"
                />
              </div>
              <div className="post-details-content">
                <div className="content-inner">
                  <ul className="meta-post">
                    <li>
                      <i className="las la-calendar-check"></i>
                      <span>19 Feb 2022</span>
                    </li>
                  </ul>
                  <h4
                    className="title"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    The standard Lorem Ipsum passage, used since the 1500s
                  </h4>
                  <p>
                    <h3
                      style={{
                        marginTop: "15px",
                        marginBottom: "15px",
                        padding: "0px",
                        fontWeight: 700,
                        fontSize: "14px",
                        color: "rgb(0,0,0)",
                        fontFamily: "'Open Sans', Arial, sans-serif",
                      }}
                    >
                      <span
                        style={{
                          color: "rgb(0,0,0)",
                          fontWeight: 400,
                          textAlign: "justify",
                        }}
                      >
                        Lorem ipsum dolor sit amet, consectetur adipiscing elit,
                        sed do eiusmod tempor incididunt ut labore et dolore
                        magna aliqua. Ut enim ad minim veniam, quis nostrud
                        exercitation ullamco laboris nisi ut aliquip ex ea
                        commodo consequat. Duis aute irure dolor in
                        reprehenderit in voluptate velit esse cillum dolore eu
                        fugiat nulla pariatur. Excepteur sint occaecat cupidatat
                        non proident, sunt in culpa qui officia deserunt mollit
                        anim id est laborum.
                      </span>

                      <br />
                    </h3>
                    <h3
                      style={{
                        marginTop: "15px",
                        marginBottom: "15px",
                        padding: "0px",
                        fontWeight: 700,
                        fontSize: "14px",
                        color: "rgb(0,0,0)",
                        fontFamily: "'Open Sans', Arial, sans-serif",
                      }}
                    >
                      Section 1.10.32 of de Finibus Bonorum et Malorum, written
                      by Cicero in 45 BC
                    </h3>
                    <p
                      style={{
                        marginRight: "0px",
                        marginBottom: "15px",
                        marginLeft: "0px",
                        padding: "0px",
                        textAlign: "justify",
                        color: "rgb(0,0,0)",
                        fontFamily: "'Open Sans', Arial, sans-serif",
                        fontSize: "14px",
                      }}
                    >
                      Sed ut perspiciatis unde omnis iste natus error sit
                      voluptatem accusantium doloremque laudantium, totam rem
                      aperiam, eaque ipsa quae ab illo inventore veritatis et
                      quasi architecto beatae vitae dicta sunt explicabo. Nemo
                      enim ipsam voluptatem quia voluptas sit aspernatur aut
                      odit aut fugit, sed quia consequuntur magni dolores eos
                      qui ratione voluptatem sequi nesciunt. Neque porro
                      quisquam est, qui dolorem ipsum quia dolor sit amet,
                      consectetur, adipisci velit, sed quia non numquam eius
                      modi tempora incidunt ut labore et dolore magnam aliquam
                      quaerat voluptatem. Ut enim ad minima veniam, quis nostrum
                      exercitationem ullam corporis suscipit laboriosam, nisi ut
                      aliquid ex ea commodi consequatur? Quis autem vel eum iure
                      reprehenderit qui in ea voluptate velit esse quam nihil
                      molestiae consequatur, vel illum qui dolorem eum fugiat
                      quo voluptas nulla pariatur?
                    </p>
                  </p>
                  <ul className="meta-content">
                    <li>
                      <h5 className="title">Share On</h5>
                      <ul className="social-icons">
                        <li>
                          <a href="" className="facebook">
                            <i className="lab la-facebook-f"></i>
                          </a>
                        </li>
                        <li>
                          <a href="" title="Pinterest">
                            <i className="lab la-pinterest-p"></i>
                          </a>
                        </li>
                        <li>
                          <a href="" title="Linkedin">
                            <i className="lab la-linkedin-in"></i>
                          </a>
                        </li>
                        <li>
                          <a href="" title="Twitter">
                            <i className="lab la-twitter"></i>
                          </a>
                        </li>
                      </ul>
                    </li>
                  </ul>
                </div>
                <div
                  className="fb-comments mt-3"
                  data-href=""
                  data-numposts="5"
                ></div>
              </div>
            </div>
            <div className="col-lg-4 col-md-12">
              <div className="blog-sidebar">
                <div className="sidebar-item">
                  <div className="latest-post-wrapper item-inner">
                    <h5 className="title">Latest Post</h5>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href=""
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            Lorem Ipsum is simply dummy
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 19 Feb 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus2.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../87/why-do-we-use-it.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            Why do we use it?
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 19 Feb 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus3.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../86/where-can-i-get-some.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            Where can I get some?
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 19 Feb 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus4.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../62/why-buy-tickets-from-us.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            Why buy tickets from us?
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 26 Jan 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus5.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../60/a-wonderful-bus-journy.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            A wonderful bus journy.
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 26 Jan 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus7.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../59/a-consectetur-adipisicing-elit.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            A consectetur adipisicing elit.
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 26 Jan 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div className="lastest-post-item">
                      <div className="thumb">
                        <img src="/bus8.jpg" alt="blog" />
                      </div>
                      <div className="content">
                        <h6 className="title">
                          <a
                            href="../58/what-to-do-if-your-bus-get-demaged.html"
                            style={{
                              textDecoration: "none",
                            }}
                          >
                            What to do if your bus get demaged?
                          </a>
                        </h6>
                        <ul className="meta-post">
                          <li>
                            <i className="fas fa-calendar-week"></i>{" "}
                            <span> 26 Jan 2022</span>
                          </li>
                        </ul>
                      </div>
                    </div>
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

export default BlogPost;
