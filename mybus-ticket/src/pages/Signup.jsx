// import React from "react";
// import Nevbar from "../components/Nevbar";
import "./Login.css";

function Login() {
  document.body.style.backgroundColor = "#00573f";
  return (
    <>
      <link
        rel="stylesheet"
        href="https://maxcdn.bootstrapcdn.com/font-awesome/4.5.0/css/font-awesome.min.css"
      />
      <link
        href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css"
        rel="stylesheet"
      />
      <div className="container-log" style={{ marginTop: "10%" }}>
        <div className="login" style={{ marginTop: "10%" }}>
          <div className="logo-log">
            <img
              src="./logo5.png"
              alt="Company logo"
              width="280px"
              height="250px"
            />
            <div className="row">
              <h2>Sign Up</h2>
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
                  placeholder="Full Name"
                  required
                />
              </div>
              <div className="form-field">
                <label
                  className="user"
                  htmlFor="login-username"
                  style={{ marginBottom: "0px" }}
                ></label>
                <input
                  type="text"
                  className="form-input"
                  placeholder="Email Address"
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
              <div className="form-field" style={{ marginBottom: "1rem" }}>
                <label
                  className="lock"
                  htmlFor="login-password"
                  style={{ marginBottom: "0px" }}
                ></label>
                <input
                  type="password"
                  className="form-input"
                  placeholder="Confirm Password"
                  required
                />
              </div>
              <div className="form-field">
                <input type="submit" value="Submit" />
              </div>
            </form>
            <div className="sign-up text-decoration-none">
              Already have an account ? <a href="/login">Log In</a>
            </div>
          </div>
        </div>
      </div>
    </>
  );
}

export default Login;
