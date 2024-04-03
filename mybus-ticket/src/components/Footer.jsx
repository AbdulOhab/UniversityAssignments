// import React from "react";
import "./style.css";

function Nevbar() {
  return (
    <div className="footer-top">
      <div className="container">
        <div className="row footer-wrapper gy-sm-5 gy-4">
          <div className="col-xl-4 col-lg-3 col-md-6 col-sm-6">
            <div className="footer-widget">
              <div className="logo">
                <img src="/logo5.png" alt="Logo" />
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
                  <a
                    href="about-us.html"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    About
                  </a>
                </li>
                <li>
                  <a
                    href="faq.html"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    FAQs
                  </a>
                </li>
                <li>
                  <a
                    href="blog.html"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Blog
                  </a>
                </li>
                <li>
                  <a
                    href="contact.html"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Contact
                  </a>
                </li>
              </ul>
            </div>
          </div>
          <div className="col-xl-2 col-lg-3 col-md-4 col-sm-6">
            <div className="footer-widget">
              <h4 className="widget-title">Policies</h4>
              <ul className="footer-links">
                <li>
                  <a
                    href="/PrivacyPolicy"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Privacy Policy
                  </a>
                </li>
                <li>
                  <a
                    href="/PrivacyPolicy"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Terms & Conditions
                  </a>
                </li>
                <li>
                  <a
                    href="/TicketPolicies"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Ticket Policies
                  </a>
                </li>
                <li>
                  <a
                    href="/TicketTS"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    Refund Policy
                  </a>
                </li>
              </ul>
            </div>
          </div>
          <div className="col-xl-3 col-lg-3 col-md-4 col-sm-6">
            <div className="footer-widget">
              <h4 className="widget-title">Contact Info</h4>
              <ul className="footer-contacts">
                <li>
                  <i className="las la-map-pin"></i> Fakirapool, Motijheel,
                  Dhaka 1209
                </li>
                <li>
                  <i className="las la-phone-volume"></i>
                  <a
                    href="tel:+44 45678908"
                    style={{ textDecoration: "none", textAlign: "left" }}
                  >
                    {" "}
                    +44 234567890
                  </a>
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
  );
}
export default Nevbar;
