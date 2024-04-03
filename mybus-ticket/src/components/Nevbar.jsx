// import React from "react";
import "./style.css";

function Nevbar() {
  return (
    <div className="header-bottom header-top2">
      <div className="container">
        <div className="header-bottom-area">
          <div className="logo">
            <a href="#">
              <img src="/logo4.png" alt="Logo" />
            </a>
          </div>
          <ul className="menu fs-1 ">
            <li>
              <a href="/Home" className="text-decoration-none">
                Home
              </a>
            </li>
            <li>
              <a href="/About" className="text-decoration-none">
                About
              </a>
            </li>

            <li>
              <a href="/Blog" className="text-decoration-none">
                Blog
              </a>
            </li>
            <li>
              <a href="/Contact" className="text-decoration-none">
                Contact
              </a>
            </li>
          </ul>
          <div className="d-flex flex-wrap algin-items-center">
            <a
              href="/login"
              className="text-decoration-none"
              style={{
                padding: "8px",
                fontSize: "1.10rem",
                borderRadius: "3px",
                backgroundColor: "rgb(22, 194, 130)",
                color: "#FFFFFF",
                border: "none",
                cursor: "pointer",
                width: "100px",
              }}
            >
              Sign In
            </a>
          </div>
        </div>
      </div>
    </div>
  );
}
export default Nevbar;
