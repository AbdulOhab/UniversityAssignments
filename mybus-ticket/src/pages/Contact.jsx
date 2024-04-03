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
          backgroundImage: 'url("/bus9.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">Contact Us</h2>
          </div>
        </div>
      </section>
      <section className="contact-section padding-top padding-bottom overflow-hidden">
        <div className="container">
          <div className="text-center">
            <h3 className="title mb-2">Let&#039;s get in touch</h3>
            <p className="mb-5">
              We are open for any suggestion or just to have a chat
            </p>
          </div>
          <div className="row pb-80 gy-4 justify-content-center">
            <div className="col-sm-6 col-lg-4">
              <div className="info-item">
                <div className="icon">
                  <i className="flaticon-location"></i>
                </div>
                <div className="content">
                  <h5 className="title">Our Address</h5>
                  Address : Fakirapool, Motijheel, Dhaka 1209
                </div>
              </div>
            </div>
            <div className="col-sm-6 col-lg-4">
              <div className="info-item active">
                <div className="icon">
                  <i className="flaticon-call"></i>
                </div>
                <div className="content">
                  <h5 className="title">Call Us</h5>
                  <a href="tel:+44 234567890">+44 234567890</a>
                </div>
              </div>
            </div>
            <div className="col-sm-6 col-lg-4">
              <div className="info-item">
                <div className="icon">
                  <i className="flaticon-envelope"></i>
                </div>
                <div className="content">
                  <h5 className="title">Email Us</h5>
                  <a>
                    <span>exmple@gmail.com</span>
                  </a>
                </div>
              </div>
            </div>
          </div>
          <div className="row gy-5">
            <div className="col-lg-6">
              <div className="contact-form-wrapper">
                <h4 className="title mb-4">Have any Questions?</h4>
                <form className="contact-form row gy-3" method="post">
                  <input
                    type="hidden"
                    name="_token"
                    value="VL5z7YyrI6RRMZZsRL5i9WilbIqiSpQ9gtVBrAWZ"
                  />{" "}
                  <div className=" col-xl-6 col-lg-12 col-md-6">
                    <div className="form--group">
                      <label htmlFor="name">
                        Name <span>*</span>
                      </label>
                      <input
                        id="name"
                        name="name"
                        type="text"
                        className="form--control"
                        placeholder="Name"
                        value=""
                        required
                      />
                    </div>
                  </div>
                  <div className=" col-xl-6 col-lg-12 col-md-6">
                    <div className="form--group">
                      <label htmlFor="email">
                        Email <span>*</span>
                      </label>
                      <input
                        id="email"
                        name="email"
                        type="email"
                        className="form--control"
                        placeholder="Email"
                        value=""
                        required
                      />
                    </div>
                  </div>
                  <div className=" col-xl-12">
                    <div className="form--group">
                      <label htmlFor="subject">
                        Subject <span>*</span>
                      </label>
                      <input
                        id="subject"
                        name="subject"
                        type="text"
                        className="form--control"
                        placeholder="Subject"
                        value=""
                        required
                      />
                    </div>
                  </div>
                  <div className="col-lg-12">
                    <div className="form--group">
                      <label htmlFor="msg">
                        Your Message <span>*</span>
                      </label>
                      <textarea
                        id="msg"
                        name="message"
                        className="form--control"
                        placeholder="Message"
                      ></textarea>
                    </div>
                  </div>
                  <div className="col-lg-12">
                    <div className="form--group">
                      <button className="contact-button" type="submit">
                        Send Us Message
                      </button>
                    </div>
                  </div>
                </form>
              </div>
            </div>
            <div className="col-lg-6">
              <div className="map-wrapper">
                <iframe
                  title="Google Map"
                  src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2302.7691022545905!2d90.3962824544442!3d23.769973887004582!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3755c766e5865649%3A0x6eec214cec2dd1a9!2sNakhalpara%20Railcrossing!5e0!3m2!1sen!2sbd!4v1707326153776!5m2!1sen!2sbd"
                  width="600"
                  height="450"
                  style={{ border: 0 }}
                  allowFullScreen=""
                  loading="lazy"
                ></iframe>
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
