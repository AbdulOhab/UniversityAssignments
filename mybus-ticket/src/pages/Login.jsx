// import React from "react";
// import Nevbar from "../components/Nevbar";
import "./Login.css";
import { Link } from "react-router-dom";
function Login() {
  document.body.style.backgroundColor = "#00573f";
  return (
    <>
      {/* <Nevbar /> */}
      <div className="container-log">
        <div className="login">
          <div className="logo-log">
            <div className="col-1">
              <Link to="/Home">
                <i className="fas fa-arrow-left"></i>
              </Link>
            </div>
            <Link to="#">
              <img
                src="./logo5.png"
                alt="Company logo"
                width="280px"
                height="250px"
              />
            </Link>
            <div className="row">
              <h2>Log In</h2>
            </div>
          </div>
          <div className="login-item">
            <form action="" method="post" className="form form-login">
              <div className="form-field">
                <label
                  className="user"
                  htmlFor="login-username"
                  style={{ marginBottom: "0px" }}
                ></label>
                <input
                  type="text"
                  className="form-input"
                  placeholder="Username"
                  required
                />
              </div>

              <div className="form-field" style={{ marginBottom: "1rem" }}>
                <label
                  className="lock"
                  htmlFor="login-password"
                  style={{ marginBottom: "0px" }}
                ></label>
                <input
                  type="password"
                  className="form-input"
                  placeholder="Password"
                  required
                />
              </div>
              <div className="one-line mb-2">
                <a className="forgot" href="/Forgot">
                  Forgot password?
                </a>
              </div>
              <div className="form-field">
                <input type="submit" value="Log in" />
              </div>
            </form>
            <div className="sign-up">
              {"Don't"} have an account? <a href="/Signup">Create an Account</a>
            </div>
          </div>
        </div>
      </div>
    </>
  );
}

export default Login;
