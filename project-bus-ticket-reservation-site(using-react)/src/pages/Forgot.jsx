// import React from "react";
// import Nevbar from "../components/Nevbar";
import "./Login.css";
import { Link } from "react-router-dom";
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
      <div className="form-gap"></div>
      <div className="container container-logs">
        <div className="row">
          <div className="col-md-4 col-md-offset-4">
            <div className="panel panel-default">
              <div className="col-1">
                <Link to="/Login">
                  <i className="fas fa-arrow-left"></i>
                </Link>
              </div>
              <div className="panel-body">
                <div className="text-center">
                  <h3>
                    <i className="fa fa-lock fa-4x"></i>
                  </h3>
                  <h2 className="text-center">Forgot Password?</h2>
                  <p>You can reset your password here.</p>
                  <div className="panel-body">
                    <form
                      id="register-form"
                      role="form"
                      className="form"
                      method="post"
                    >
                      <div className="form-group">
                        <div className="input-group">
                          <span className="input-group-addon">
                            <i className="glyphicon glyphicon-envelope color-blue"></i>
                          </span>
                          <input
                            id="email"
                            name="email"
                            placeholder="email address"
                            className="form-control"
                            type="email"
                          />
                        </div>
                      </div>
                      <div className="form-group">
                        <input
                          name="recover-submit"
                          className="btn btn-lg btn-primary btn-block"
                          value="Reset Password"
                          type="submit"
                        />
                      </div>

                      <input
                        type="hidden"
                        className="hide"
                        name="token"
                        id="token"
                        value=""
                      />
                    </form>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </>
  );
}

export default Login;
