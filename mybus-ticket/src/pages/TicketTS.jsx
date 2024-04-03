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
          backgroundImage: 'url("/20.jpg")',
          backgroundPosition: "center",
        }}
      >
        <div className="container">
          <div className="inner-banner-content">
            <h2 className="title">Seat Details</h2>
          </div>
        </div>
      </section>

      <div className="padding-top padding-bottom">
        <div className="container">
          <div className="row gx-xl-5 gy-4 gy-sm-5 justify-content-center">
            {/* <div className="col-lg-4 col-md-6">
              <div className="seat-overview-wrapper">
                <form
                  action="https://script.viserlab.com/viserbus/ticket/book/1"
                  method="POST"
                  id="bookingForm"
                  className="row gy-2"
                >
                  <input
                    type="hidden"
                    name="_token"
                    value="VL5z7YyrI6RRMZZsRL5i9WilbIqiSpQ9gtVBrAWZ"
                  />{" "}
                  <input type="text" name="price" hidden />
                  <div className="col-12">
                    <div className="form-group">
                      <label htmlFor="date_of_journey" className="form-label">
                        Journey Date
                      </label>
                      <input
                        type="text"
                        id="date_of_journey"
                        className="form--control datepicker"
                        value="01/21/2024"
                        name="date_of_journey"
                      />
                    </div>
                  </div>
                  <div className="col-12">
                    <div className="form-group">
                      <label htmlFor="pickup_point" className="form-label">
                        Pickup Point
                      </label>
                      <select
                        name="pickup_point"
                        id="pickup_point"
                        className="form--control select2"
                      >
                        <option value="">Select One</option>
                        <option value="1">Kansas</option>
                        <option value="2">Dallas</option>
                        <option value="3">Wichita</option>
                        <option value="4">Emi Davenport</option>
                        <option value="5">Echo Bass</option>
                      </select>
                    </div>
                  </div>
                  <div className="col-12">
                    <div className="form-group">
                      <label htmlFor="dropping_point" className="form-label">
                        Dropping Point
                      </label>
                      <select
                        name="dropping_point"
                        id="dropping_point"
                        className="form--control select2"
                      >
                        <option value="">Select One</option>
                        <option value="1">Kansas</option>
                        <option value="2">Dallas</option>
                        <option value="3">Wichita</option>
                        <option value="4">Emi Davenport</option>
                        <option value="5">Echo Bass</option>
                      </select>
                    </div>
                  </div>
                  <div className="col-12">
                    <label className="form-label">Select Gender</label>
                    <div className="d-flex flex-wrap justify-content-between">
                      <div className="form-group custom--radio">
                        <input id="male" type="radio" name="gender" value="1" />
                        <label className="form-label" htmlFor="male">
                          Male
                        </label>
                      </div>
                      <div className="form-group custom--radio">
                        <input
                          id="female"
                          type="radio"
                          name="gender"
                          value="2"
                        />
                        <label className="form-label" htmlFor="female">
                          Female
                        </label>
                      </div>
                      <div className="form-group custom--radio">
                        <input
                          id="other"
                          type="radio"
                          name="gender"
                          value="3"
                        />
                        <label className="form-label" htmlFor="other">
                          Other
                        </label>
                      </div>
                    </div>
                  </div>
                  <div className="booked-seat-details my-3 d-none">
                    <label>Selected Seats</label>
                    <div className="list-group seat-details-animate">
                      <span className="list-group-item d-flex bg--base text-white justify-content-between">
                        Seat Details<span>Price</span>
                      </span>
                      <div className="selected-seat-details"></div>
                    </div>
                  </div>
                  <input type="text" name="seats" hidden />
                  <div className="col-12">
                    <button type="submit" className="book-bus-btn">
                      Continue
                    </button>
                  </div>
                </form>
              </div>
            </div> */}
            <div className="col-lg-4 col-md-6">
              <h6 className="title">Bus seat Details</h6>
              <div className="seat-plan-inner">
                <div className="single">
                  <span className="front">Front</span>
                  <span className="rear">Rear</span>

                  <span className="lower">Door</span>
                  <span className="driver">
                    <img
                      src="../../assets/templates/basic/images/icon/wheel.svg"
                      alt="icon"
                    />
                  </span>

                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-A1">
                          A1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-A2">
                          A2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-A3">
                          A3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-A4">
                          A4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-B1">
                          B1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-B2">
                          B2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-B3">
                          B3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-B4">
                          B4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-C1">
                          C1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-C2">
                          C2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-C3">
                          C3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-C4">
                          C4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-D1">
                          D1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-D2">
                          D2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-D3">
                          D3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-D4">
                          D4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-E1">
                          E1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-E2">
                          E2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-E3">
                          E3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-E4">
                          E4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-F1">
                          F1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-F2">
                          F2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-F3">
                          F3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-F4">
                          F4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-G1">
                          G1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-G2">
                          G2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-G3">
                          G3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-G4">
                          G4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-H1">
                          H1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-H2">
                          H2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-H3">
                          H3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-H4">
                          H4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-I1">
                          I1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-I2">
                          I2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-I3">
                          I3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-I4">
                          I4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                  <div className="seat-wrapper">
                    <div className="left-side">
                      <div>
                        <span className="seat" data-seat="1-J1">
                          J1
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-J2">
                          J2
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                    <div className="right-side">
                      <div>
                        <span className="seat" data-seat="1-J3">
                          J3
                          <span></span>
                        </span>
                      </div>
                      <div>
                        <span className="seat" data-seat="1-J4">
                          J4
                          <span></span>
                        </span>
                      </div>
                    </div>{" "}
                  </div>
                </div>
              </div>
              <div className="seat-for-reserved">
                <div className="seat-condition available-seat">
                  <span className="seat">
                    <span></span>
                  </span>
                  <p>Available Seats</p>
                </div>
                <div className="seat-condition selected-by-you">
                  <span className="seat">
                    <span></span>
                  </span>
                  <p>Selected by You</p>
                </div>
                <div className="seat-condition selected-by-gents">
                  <div className="seat">
                    <span></span>
                  </div>
                  <p>Booked by Gents</p>
                </div>
                <div className="seat-condition selected-by-ladies">
                  <div className="seat">
                    <span></span>
                  </div>
                  <p>Booked by Ladies</p>
                </div>
                <div className="seat-condition selected-by-others">
                  <div className="seat">
                    <span></span>
                  </div>
                  <p>Booked by Others</p>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div
        className="modal fade"
        id="bookConfirm"
        role="dialog"
        aria-labelledby="myModalLabel"
        aria-hidden="true"
      >
        <div className="modal-dialog">
          <div className="modal-content">
            <div className="modal-header">
              <h5 className="modal-title"> Confirm Booking</h5>
              <button
                type="button"
                className="w-auto btn--close"
                data-bs-dismiss="modal"
              >
                <i className="las la-times"></i>
              </button>
            </div>
            <div className="modal-body">
              <strong className="text-dark">
                Are you sure to book these seats?
              </strong>
            </div>
            <div className="modal-footer">
              <button
                type="button"
                className="btn btn--danger w-auto btn--sm px-3"
                data-bs-dismiss="modal"
              >
                Close{" "}
              </button>
              <button
                type="submit"
                className="btn btn--success btn--sm w-auto"
                id="btnBookConfirm"
              >
                Confirm{" "}
              </button>
            </div>
          </div>
        </div>
      </div>

      <Footer />
    </>
  );
}

export default About;
