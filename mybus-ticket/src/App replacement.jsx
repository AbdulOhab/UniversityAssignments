import "./App.css";

function App() {
  return (
    <>
      {/* this is a healing container */}
      <div className="header-bottom header-top2">
        <div className="container">
          <div className="header-bottom-area">
            <div className="logo">
              <a href="#">
                <img src="public/logo4.png" alt="Logo" />
              </a>
            </div>
            <ul className="menu fs-1">
              <li>
                <a href="">Home</a>
              </li>
              <li>
                <a href="about-us.html">About</a>
              </li>
              <li>
                <a href="faq.html">FAQs</a>
              </li>

              <li>
                <a href="blog.html">Blog</a>
              </li>
              <li>
                <a href="contact.html">Contact</a>
              </li>
            </ul>
            <div className="d-flex flex-wrap algin-items-center">
              <a
                href="login.html"
                className="cmn--btn btn--lg fas fa-sign-in-alt"
              >
                Sign In
              </a>
            </div>
          </div>
        </div>
      </div>

      {/* <!-- Banner Section Starts Here --> */}
      <section
        className="banner-section"
        style={{ background: "url(public/banner4.png) repeat-x bottom" }}
      >
        <div className="container">
          <div className="banner-wrapper">
            <div className="banner-content">
              <h1 className="title color-white">
                Get Your Ticket booking, Easy and Safely
              </h1>
              <a href="tickets.html" className="cmn--btn btn--lg ">
                Get ticket now
              </a>
            </div>
            <div className="ticket-form-wrapper">
              <div className="ticket-header nav-tabs nav border-0">
                <h4 className="title fs-2">Choose Your Ticket</h4>
              </div>
              <div className="tab-content">
                <div className="tab-pane fade show active" id="one-way">
                  <form className="ticket-form row g-3 justify-content-center m-0">
                    <div className="col-md-6">
                      <div className="form--group">
                        <i className="las la-location-arrow"></i>
                        <select className="form--control select2" name="pickup">
                          <option>Pickup Point</option>
                          <option>Kansas</option>
                          <option>Dallas</option>
                          <option>Wichita</option>
                          <option>Emi Davenport</option>
                          <option>Echo Bass</option>
                        </select>
                      </div>
                    </div>
                    <div className="col-md-6">
                      <div className="form--group">
                        <i className="las la-map-marker"></i>
                        <select
                          name="destination"
                          className="form--control select2"
                        >
                          <option value="">Dropping Point</option>
                          <option value="1">Kansas</option>
                          <option value="2">Dallas</option>
                          <option value="3">Wichita</option>
                          <option value="4">Emi Davenport</option>
                          <option value="5">Echo Bass</option>
                        </select>
                      </div>
                    </div>
                    <div className="col-md-12">
                      <div className="form--group">
                        <div className="input-group date" id="datepicker">
                          <input
                            type="text"
                            className="form-control"
                            placeholder="Departure Date"
                          />
                          <div className="input-group-append">
                            <span className="input-group-text">
                              <i className="bi bi-calendar"></i>
                              <span className="fa fa-calendar" id="fa-2"></span>
                            </span>
                          </div>
                        </div>
                      </div>
                    </div>

                    <div className="col-md-6">
                      <div className="form--group">
                        <a
                          href="login.html"
                          className="cmn--btn btn--xl fas fa-sign-in-alt w-75 p-3"
                        >
                          Find Tickets
                        </a>
                      </div>
                    </div>
                  </form>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>

      {/* <!-- Working Process Section Starts Here --> */}
      <section className="working-process padding-top padding-bottom">
        <div className="container">
          <div className="row justify-content-center">
            <div className="col-lg-6 col-md-10">
              <div className="section-header text-center">
                <h2 className="title">How It Works</h2>
                <p>
                  Check out our appreciated solution. reasons for selecting your
                  bus. Simply get on a bus and purchase a ticket for an amazing
                  journey!
                </p>
              </div>
            </div>
          </div>
          <div className="row g-4 gy-md-5 justify-content-center">
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="working-process-item">
                <div className="thumb-wrapper">
                  <span>01</span>
                  <div className="thumb">
                    <i className="las la-search"></i>
                  </div>
                </div>
                <div className="content">
                  <h4 className="title">Search Your Bus</h4>
                  <p>
                    Select your starting point, ending point,Simply select a bus
                    journey and its dates, then look for busses.
                  </p>
                </div>
              </div>
            </div>
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="working-process-item">
                <div className="thumb-wrapper">
                  <span>02</span>
                  <div className="thumb">
                    <i className="las la-ticket-alt"></i>
                  </div>
                </div>
                <div className="content">
                  <h4 className="title">Choose The Ticket</h4>
                  <p>
                    Select your starting point, ending point,Find buses and
                    reserve Just a Bus for your fantastic journey dates.
                  </p>
                </div>
              </div>
            </div>
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="working-process-item">
                <div className="thumb-wrapper">
                  <span>03</span>
                  <div className="thumb">
                    <i className="las la-money-bill-wave-alt"></i>
                  </div>
                </div>
                <div className="content">
                  <h4 className="title">Pay Bill</h4>
                  <p>
                    Select your starting point and ending point, pick a bus for
                    your fantastic trip, and look for busses.
                  </p>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>

      {/* <!-- Our Ameninies Section Starts Here --> */}
      <section className="amenities-section padding-bottom">
        <div className="container">
          <div className="row justify-content-center">
            <div className="col-lg-6 col-md-10">
              <div className="section-header text-center">
                <h2 className="title">Our Facilities</h2>
                <p>
                  Have a look at our popular reason. why you should choose you
                  bus.Just choose a Bus and get a ticket for your great journey!
                </p>
              </div>
            </div>
          </div>
          <div className="container amenities-wrapper">
            <div className="row amenities-slider">
              <div className="col single-slider">
                <div className="amenities-item">
                  <div className="thumb">
                    <i className="las la-wifi"></i>
                  </div>
                  <h6 className="title">Wifi</h6>
                </div>
              </div>
              <div className="col single-slider">
                <div className="amenities-item">
                  <div className="thumb">
                    <i className="las la-bed"></i>
                  </div>
                  <h6 className="title">Pillow</h6>
                </div>
              </div>
              <div className="col single-slider">
                <div className="amenities-item">
                  <div className="thumb">
                    <i className="las la-prescription-bottle"></i>
                  </div>
                  <h6 className="title">Water Bottle</h6>
                </div>
              </div>
              <div className="col single-slider">
                <div className="amenities-item">
                  <div className="thumb">
                    <i className="fas fa-wine-glass-alt"></i>
                  </div>
                  <h6 className="title">Soft Drinks</h6>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>

      {/* <!-- Section Starts Here --> */}
      <section className="testimonial-section">
        <div className="row justify-content-center">
          <div className="col-lg-6 col-md-8">
            <div className="section-header text-center">
              <h2 className="title">Our Testimonials</h2>
              <p>
                Explore the compelling reasons why choosing our bus service is
                the best decision for your journey. Simply select a bus, and
                secure your ticket for an unforgettable travel experience!
              </p>
            </div>
          </div>
        </div>
        <div className="container">
          <div className="row">
            <div className="col" style={{ paddingLeft: "65px" }}>
              <blockquote className="quote-box">
                <p className="quotation-mark">“</p>
                <p className="quote-text">
                  Lorem ipsum dolor sit amet consectetur adipisicing elit. Ullam
                  iusto mollitia facere accusantium deleniti odit eius.
                </p>
                <hr />
                <div className="blog-post-actions">
                  <p className="blog-post-bottom pull-left">Abraham Lincoln</p>
                </div>
              </blockquote>
            </div>
            <div className="col">
              <blockquote
                className="quote-box"
                style={{ background: "#80BCBD" }}
              >
                <p className="quotation-mark">“</p>
                <p className="quote-text">
                  Lorem ipsum dolor sit amet consectetur adipisicing elit. Ullam
                  iusto mollitia facere accusantium deleniti odit eius.
                </p>
                <hr />
                <div className="blog-post-actions">
                  <p className="blog-post-bottom pull-left">Abraham Lincoln</p>
                </div>
              </blockquote>
            </div>
            <div className="col">
              <blockquote
                className="quote-box"
                style={{ background: "#AAD9BB" }}
              >
                <p className="quotation-mark">“</p>
                <p className="quote-text">
                  Lorem ipsum dolor sit amet consectetur adipisicing elit. Ullam
                  iusto mollitia facere accusantium deleniti odit eius.
                </p>
                <hr />
                <div className="blog-post-actions">
                  <p className="blog-post-bottom pull-left">Abraham Lincoln</p>
                </div>
              </blockquote>
            </div>
          </div>
        </div>
      </section>

      {/* <!-- Blog Section Starts Here --> */}
      <section className="blog-section padding-top padding-bottom">
        <div className="container">
          <div className="row justify-content-center">
            <div className="col-lg-6 col-md-10">
              <div className="section-header text-center">
                <h2 className="title">Recent Blog Post</h2>
                <p>
                  Have a look at our popular reason. why you should choose you
                  bus. Just choose a Bus and get a ticket for your great
                  journey. !
                </p>
              </div>
            </div>
          </div>
          <div className="row justify-content-center g-4">
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="post-item">
                <div className="post-thumb">
                  <img src="public/pic1.jpg" alt="blog" />
                </div>
                <div className="post-content">
                  <ul className="post-meta">
                    <li>
                      <span className="date">
                        <i className="las la-calendar-check"></i>13 Feb 2020
                      </span>
                    </li>
                  </ul>
                  <h4 className="title">
                    <a href="blog/89/the-standard-lorem-ipsum-passage-used-since-the-1500s.html">
                      The standard Lorem Ipsum passage, used since the 1500s
                    </a>
                  </h4>
                  <p>
                    &quot;Lorem ipsum dolor sit amet, consectetur adipiscing
                    elit, sed do eiusmod tempor incididunt ut labore et dolore
                    magna ali...
                  </p>
                </div>
              </div>
            </div>
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="post-item">
                <div className="post-thumb">
                  <img src="public/pic2.jpg" alt="blog" />
                </div>
                <div className="post-content">
                  <ul className="post-meta">
                    <li>
                      <span className="date">
                        <i className="las la-calendar-check"></i>25 Feb 2020
                      </span>
                    </li>
                  </ul>
                  <h4 className="title">
                    <a href="blog/88/lorem-ipsum-is-simply-dummy.html">
                      Lorem Ipsum is simply dummy
                    </a>
                  </h4>
                  <p>
                    Lorem Ipsum is simply dummy text of the printing and
                    typesetting industry. Lorem Ipsum has been the
                    industry&#039;s standard...
                  </p>
                </div>
              </div>
            </div>
            <div className="col-lg-4 col-md-6 col-sm-10">
              <div className="post-item">
                <div className="post-thumb">
                  <img src="public/pic3.jpg" alt="blog" />
                </div>
                <div className="post-content">
                  <ul className="post-meta">
                    <li>
                      <span className="date">
                        <i className="las la-calendar-check"></i>04 Feb 2020
                      </span>
                    </li>
                  </ul>
                  <h4 className="title">
                    <a href="blog/87/why-do-we-use-it.html">
                      Why do we use it?
                    </a>
                  </h4>
                  <p>
                    Contrary to popular belief, Lorem Ipsum is not simply random
                    text. It has roots in a piece of classical Latin
                    literature...
                  </p>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>
      {/* //Footer Section Starts Here */}
      <section className="footer-seciton">
        <div className="footer-top">
          <div className="container">
            <div className="row footer-wrapper gy-sm-5 gy-4">
              <div className="col-xl-4 col-lg-3 col-md-6 col-sm-6">
                <div className="footer-widget">
                  <div className="logo">
                    <img src="public/logo5.png" alt="Logo" />
                  </div>
                  <p
                    style={{
                      marginBottom: "-1rem",
                    }}
                  >
                    Bus Ticket Reservation system
                  </p>
                  <br />
                  <p>Make your trip</p>
                  <ul className="social-icons">
                    <li>
                      <a href="https://www.facebook.com/">
                        <i className="lab la-facebook-f"></i>
                      </a>
                    </li>
                    <li>
                      <a href="https://twitter.com/?lang=en">
                        <i className="lab la-twitter"></i>
                      </a>
                    </li>
                    <li>
                      <a href="https://vimeo.com/log_in">
                        <i className="lab la-vimeo"></i>
                      </a>
                    </li>
                    <li>
                      <a href="https://www.instagram.com/?hl=en">
                        <i className="lab la-instagram"></i>
                      </a>
                    </li>
                  </ul>
                </div>
              </div>
              <div className="col-xl-2 col-lg-3 col-md-4 col-sm-6">
                <div className="footer-widget">
                  <h4 className="widget-title">Useful Links</h4>
                  <ul className="footer-links">
                    <li>
                      <a href="about-us.html">About</a>
                    </li>
                    <li>
                      <a href="faq.html">FAQs</a>
                    </li>
                    <li>
                      <a href="blog.html">Blog</a>
                    </li>
                    <li>
                      <a href="contact.html">Contact</a>
                    </li>
                  </ul>
                </div>
              </div>
              <div className="col-xl-2 col-lg-3 col-md-4 col-sm-6">
                <div className="footer-widget">
                  <h4 className="widget-title">Policies</h4>
                  <ul className="footer-links">
                    <li>
                      <a href="policy/69/privacy-policy.html">Privacy Policy</a>
                    </li>
                    <li>
                      <a href="policy/71/terms-and-conditions.html">
                        Terms & Conditions
                      </a>
                    </li>
                    <li>
                      <a href="policy/90/ticket-policies.html">
                        Ticket Policies
                      </a>
                    </li>
                    <li>
                      <a href="policy/102/refund-policy.html">Refund Policy</a>
                    </li>
                  </ul>
                </div>
              </div>
              <div className="col-xl-3 col-lg-3 col-md-4 col-sm-6">
                <div className="footer-widget">
                  <h4 className="widget-title">Contact Info</h4>
                  <ul className="footer-contacts">
                    <li>
                      <i className="las la-map-pin"></i> Bengla Road Suite Dhaka
                      1209
                    </li>
                    <li>
                      <i className="las la-phone-volume"></i>
                      <a href="tel:+44 45678908"> +44 45678908</a>
                    </li>
                    <li>
                      <i className="las la-envelope"></i>
                      <a href="">
                        <a> exmple@gmail.com </a>
                      </a>
                    </li>
                  </ul>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>
      {/* //Footer Section Ends Here */}
    </>
  );
}

export default App;
