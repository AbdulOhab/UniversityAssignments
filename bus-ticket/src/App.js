import logo from "./logo.svg";
import "./App.css";
import "bootstrap/dist/css/bootstrap.css";

import React from "react";

function App() {
  return (
    <>
      <div className="App">
        <header className="App-header">
          <img src={logo} className="App-logo" alt="logo" />
        </header>
      </div>
      <div class="header-top">
        <div class="container">
          <div class="header-top-area">
            <ul class="left-content">
              <li>
                <i class="las la-phone"></i>
                <a href="tel:+44 45678908">+44 45678908</a>
              </li>
              <li>
                <i class="las la-envelope-open"></i>
                <a href="https://script.viserlab.com/cdn-cgi/l/email-protection#2b4e534a465b474e6b4c464a424705484446">
                  <span
                    class="__cf_email__"
                    data-cfemail="77120f161a071b1237101a161e1b5914181a"
                  >
                    [email&#160;protected]
                  </span>
                </a>
              </li>
            </ul>
            <div class="right-content d-flex flex-wrap" style={{ gap: "10px" }}>
              <div>
                <select class="langSel form--control">
                  <option value="en" selected>
                    English
                  </option>
                  <option value="hn">Hindi</option>
                  <option value="bn">Bangla</option>
                </select>
              </div>
              <ul class="header-login">
                <li>
                  <a class="sign-in" href="login.html">
                    <i class="fas fa-sign-in-alt"></i>Sign In
                  </a>
                </li>
                <li>/</li>
                <li>
                  <a class="sign-up" href="register.html">
                    <i class="fas fa-user-plus"></i>Sign Up
                  </a>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </div>
      <div class="header-bottom">
        <div class="container">
          <div class="header-bottom-area">
            <div class="logo">
              <a href="https://script.viserlab.com/viserbus">
                <img src="assets/images/logoIcon/logo.png" alt="Logo" />
              </a>
            </div>
            <ul class="menu">
              <li>
                <a href="https://script.viserlab.com/viserbus">Home</a>
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
            <div class="d-flex flex-wrap algin-items-center">
              <a href="tickets.html" class="cmn--btn btn--sm">
                Buy Tickets
              </a>
              <div class="header-trigger-wrapper d-flex d-lg-none ms-4">
                <div class="header-trigger d-block d-lg-none">
                  <span></span>
                </div>
                <div class="top-bar-trigger">
                  <i class="las la-ellipsis-v"></i>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
      <button type="button" class="btn btn-primary">
        Primary
      </button>
      <button type="button" class="btn btn-secondary">
        Secondary
      </button>
      <button type="button" class="btn btn-success">
        Success
      </button>
      <button type="button" class="btn btn-danger">
        Danger
      </button>
      <button type="button" class="btn btn-warning">
        Warning
      </button>
      <button type="button" class="btn btn-info">
        Info
      </button>
      <button type="button" class="btn btn-light">
        Light
      </button>
      <button type="button" class="btn btn-dark">
        Dark
      </button>

      <button type="button" class="btn btn-link">
        Link
      </button>
    </>
  );
}

export default App;
