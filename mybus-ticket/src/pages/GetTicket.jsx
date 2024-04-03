// import React from "react";
import Nevbar from "../components/Nevbar";
import Footer from "../components/Footer";

function GetTicket() {
  return (
    <>
      <Nevbar />
      <div
        className="ticket-search-bar bg_img padding-top"
        style={{ background: "url(/banner4.png) left center" }}
      >
        <div className="container">
          <div className="bus-search-header">
            <form className="ticket-form ticket-form-two row g-3 justify-content-center">
              <div className="col-md-4 col-lg-3">
                <div className="form--group">
                  <i className="las la-location-arrow"></i>
                  <select name="pickup" className="form--control select2">
                    <option>Pickup Point</option>
                    <option>Dhaka</option>
                    <option>Chattogram</option>
                    <option>Khulna</option>
                    <option>Khulna</option>
                    <option>Rajshahi</option>
                    <option>Sylhet</option>
                    <option>Cumilla</option>
                    <option>Barisal</option>
                  </select>
                </div>
              </div>
              <div className="col-md-4 col-lg-3">
                <div className="form--group">
                  <i className="las la-map-marker"></i>
                  <select name="destination" className="form--control select2">
                    <option>Pickup Point</option>
                    <option>Dhaka</option>
                    <option>Chattogram</option>
                    <option>Khulna</option>
                    <option>Khulna</option>
                    <option>Rajshahi</option>
                    <option>Sylhet</option>
                    <option>Cumilla</option>
                    <option>Barisal</option>
                  </select>
                </div>
              </div>
              <div className="col-md-4 col-lg-3">
                <div className="form--group">
                  <i className="las la-calendar-check"></i>
                  <input
                    type="text"
                    name="date_of_journey"
                    className="form--control datepicker"
                    placeholder="Date of Journey"
                    value=""
                  />
                </div>
              </div>
              <div className="col-md-6 col-lg-3">
                <div className="form--group">
                  <button
                    style={{
                      padding: "8px",
                      fontSize: "1.10rem",
                      borderRadius: "8px",
                      backgroundColor: "rgb(22, 194, 130)",
                      color: "#FFFFFF",
                      border: "none",
                      cursor: "pointer",
                      width: "200px",
                    }}
                  >
                    Find Tickets
                  </button>
                </div>
              </div>
            </form>
          </div>
        </div>
      </div>
      <section className="ticket-section padding-bottom section-bg">
        <div className="container">
          <div className="row gy-5">
            <div className="col-lg-3">
              <form id="filterForm">
                <div className="ticket-filter">
                  <div className="filter-header filter-item">
                    <h4 className="title mb-0">Filter</h4>
                    <button type="reset" className="reset-button h-auto">
                      Reset All
                    </button>
                  </div>
                  <div className="filter-item">
                    <h5 className="title">Vehicle Type</h5>
                    <ul className="bus-type">
                      <li className="custom--checkbox">
                        <input
                          name="fleetType[]"
                          className="search"
                          value="1"
                          id="Classic"
                          type="checkbox"
                        />
                        <label htmlFor="Classic">
                          <span>
                            <i className="las la-bus"></i>Classic
                          </span>
                        </label>
                      </li>
                      <li className="custom--checkbox">
                        <input
                          name="fleetType[]"
                          className="search"
                          value="2"
                          id="Coach"
                          type="checkbox"
                        />
                        <label htmlFor="Coach">
                          <span>
                            <i className="las la-bus"></i>Coach
                          </span>
                        </label>
                      </li>
                      <li className="custom--checkbox">
                        <input
                          name="fleetType[]"
                          className="search"
                          value="3"
                          id="AC"
                          type="checkbox"
                        />
                        <label htmlFor="AC">
                          <span>
                            <i className="las la-bus"></i>AC
                          </span>
                        </label>
                      </li>
                    </ul>
                  </div>

                  <div className="filter-item">
                    <h5 className="title">Routes</h5>
                    <ul className="bus-type">
                      <li className="custom--checkbox">
                        <input
                          name="routes[]"
                          className="search"
                          value="1"
                          id="route.1"
                          type="checkbox"
                        />
                        <label htmlFor="route.1">
                          <span>
                            <i className="las la-road"></i> Dhaka to Rajshahi{" "}
                          </span>
                        </label>
                      </li>
                      <li className="custom--checkbox">
                        <input
                          name="routes[]"
                          className="search"
                          value="2"
                          id="route.2"
                          type="checkbox"
                        />
                        <label htmlFor="route.2">
                          <span>
                            <i className="las la-road"></i> Narayanganj to
                            Rangpur{" "}
                          </span>
                        </label>
                      </li>
                    </ul>
                  </div>

                  <div className="filter-item">
                    <h5 className="title">Schedules</h5>
                    <ul className="bus-type">
                      <li className="custom--checkbox">
                        <input
                          name="schedules[]"
                          className="search"
                          value="1"
                          id="schedule.1"
                          type="checkbox"
                        />
                        <label htmlFor="schedule.1">
                          <span>
                            <i className="las la-clock"></i> 06:00 am - 03:30 pm{" "}
                          </span>
                        </label>
                      </li>
                      <li className="custom--checkbox">
                        <input
                          name="schedules[]"
                          className="search"
                          value="2"
                          id="schedule.2"
                          type="checkbox"
                        />
                        <label htmlFor="schedule.2">
                          <span>
                            <i className="las la-clock"></i> 07:00 am - 04:00 pm{" "}
                          </span>
                        </label>
                      </li>
                      <li className="custom--checkbox">
                        <input
                          name="schedules[]"
                          className="search"
                          value="3"
                          id="schedule.3"
                          type="checkbox"
                        />
                        <label htmlFor="schedule.3">
                          <span>
                            <i className="las la-clock"></i> 08:00 am - 04:30 pm{" "}
                          </span>
                        </label>
                      </li>
                    </ul>
                  </div>
                </div>
              </form>
            </div>
            <div className="col-lg-9">
              <div className="ticket-wrapper">
                <div className="ticket-item">
                  <div className="ticket-item-inner">
                    <h5 className="bus-name">AC - Green Line</h5>
                    <span className="bus-info">Seat Layout - 2 x 2</span>
                    <span className="ratting">
                      <i className="las la-bus"></i>AC
                    </span>
                  </div>
                  <div className="ticket-item-inner travel-time">
                    <div className="bus-time">
                      <p className="time">08:00 AM</p>
                      <p className="place">Dhaka</p>
                    </div>
                    <div className=" bus-time">
                      <i className="las la-arrow-right"></i>
                      <p>08:30 min</p>
                    </div>
                    <div className=" bus-time">
                      <p className="time">04:30 PM</p>
                      <p className="place">Rajshahi</p>
                    </div>
                  </div>
                  <div className="ticket-item-inner book-ticket">
                    <p className="rent mb-0 fa-solid fa-bangladeshi-taka-sign">
                      100.00
                    </p>
                    <div className="seats-left mt-2 mb-3 fs--14px">
                      Off Days:{" "}
                      <div
                        className="d-inline-flex flex-wrap"
                        style={{ gap: "5px" }}
                      >
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Friday
                        </span>
                      </div>
                    </div>
                    <a
                      className="btn btn--base"
                      style={{ background: "#0E9E4De6", color: "#FFF" }}
                    >
                      Select Seat
                    </a>
                  </div>
                  <div className="ticket-item-footer">
                    <div className="d-flex content-justify-center">
                      <span>
                        <strong>Facilities - </strong>
                        <span className="facilities">Water Bottle</span>
                        <span className="facilities">Wifi</span>
                      </span>
                    </div>
                  </div>
                </div>

                <div className="ticket-item">
                  <div className="ticket-item-inner">
                    <h5 className="bus-name">Coach - Green Line</h5>
                    <span className="bus-info">Seat Layout - 2 x 2</span>
                    <span className="ratting">
                      <i className="las la-bus"></i>Coach
                    </span>
                  </div>
                  <div className="ticket-item-inner travel-time">
                    <div className="bus-time">
                      <p className="time">06:00 AM</p>
                      <p className="place">Rajshahi</p>
                    </div>
                    <div className=" bus-time">
                      <i className="las la-arrow-right"></i>
                      <p>09:30 min</p>
                    </div>
                    <div className=" bus-time">
                      <p className="time">03:30 PM</p>
                      <p className="place">Sylhet</p>
                    </div>
                  </div>
                  <div className="ticket-item-inner book-ticket">
                    <p className="rent mb-0 fa-solid fa-bangladeshi-taka-sign">
                      150.00
                    </p>
                    <div className="seats-left mt-2 mb-3 fs--14px">
                      Off Days:{" "}
                      <div
                        className="d-inline-flex flex-wrap"
                        style={{ gap: "5px" }}
                      >
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Thursday
                        </span>
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Friday
                        </span>
                      </div>
                    </div>
                    <a
                      className="btn btn--base"
                      style={{ background: "#0E9E4De6", color: "#FFF" }}
                    >
                      Select Seat
                    </a>
                  </div>
                  <div className="ticket-item-footer">
                    <div className="d-flex content-justify-center">
                      <span>
                        <strong>Facilities - </strong>
                        <span className="facilities">Water Bottle</span>
                      </span>
                    </div>
                  </div>
                </div>

                <div className="ticket-item">
                  <div className="ticket-item-inner">
                    <h5 className="bus-name">Coach - Green Line</h5>
                    <span className="bus-info">Seat Layout - 2 x 2</span>
                    <span className="ratting">
                      <i className="las la-bus"></i>Coach
                    </span>
                  </div>
                  <div className="ticket-item-inner travel-time">
                    <div className="bus-time">
                      <p className="time">07:00 AM</p>
                      <p className="place">Dhaka</p>
                    </div>
                    <div className=" bus-time">
                      <i className="las la-arrow-right"></i>
                      <p>09:00 min</p>
                    </div>
                    <div className=" bus-time">
                      <p className="time">04:00 PM</p>
                      <p className="place">Sylhat</p>
                    </div>
                  </div>
                  <div className="ticket-item-inner book-ticket">
                    <p className="rent mb-0 fa-solid fa-bangladeshi-taka-sign">
                      50.00
                    </p>
                    <div className="seats-left mt-2 mb-3 fs--14px">
                      Off Days:{" "}
                      <div
                        className="d-inline-flex flex-wrap"
                        style={{ gap: "5px" }}
                      >
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Wednesday
                        </span>
                      </div>
                    </div>
                    <a
                      className="btn btn--base"
                      style={{ background: "#0E9E4De6", color: "#FFF" }}
                    >
                      Select Seat
                    </a>
                  </div>
                  <div className="ticket-item-footer">
                    <div className="d-flex content-justify-center">
                      <span>
                        <strong>Facilities - </strong>
                        <span className="facilities">Water Bottle</span>
                      </span>
                    </div>
                  </div>
                </div>

                <div className="ticket-item">
                  <div className="ticket-item-inner">
                    <h5 className="bus-name">Coach - Green Lines</h5>
                    <span className="bus-info">Seat Layout - 2 x 2</span>
                    <span className="ratting">
                      <i className="las la-bus"></i>Coach
                    </span>
                  </div>
                  <div className="ticket-item-inner travel-time">
                    <div className="bus-time">
                      <p className="time">08:00 AM</p>
                      <p className="place">Dhaka</p>
                    </div>
                    <div className=" bus-time">
                      <i className="las la-arrow-right"></i>
                      <p>08:30 min</p>
                    </div>
                    <div className=" bus-time">
                      <p className="time">04:30 PM</p>
                      <p className="place">Chattragram</p>
                    </div>
                  </div>
                  <div className="ticket-item-inner book-ticket">
                    <p className="rent mb-0 fa-solid fa-bangladeshi-taka-sign">
                      150.00
                    </p>
                    <div className="seats-left mt-2 mb-3 fs--14px">
                      Off Days:{" "}
                      <div
                        className="d-inline-flex flex-wrap"
                        style={{ gap: "5px" }}
                      >
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Saturday
                        </span>
                      </div>
                    </div>
                    <a
                      className="btn btn--base"
                      style={{ background: "#0E9E4De6", color: "#FFF" }}
                    >
                      Select Seat
                    </a>
                  </div>
                  <div className="ticket-item-footer">
                    <div className="d-flex content-justify-center">
                      <span>
                        <strong>Facilities - </strong>
                        <span className="facilities">Water Bottle</span>
                      </span>
                    </div>
                  </div>
                </div>

                <div className="ticket-item">
                  <div className="ticket-item-inner">
                    <h5 className="bus-name">AC - Green Line</h5>
                    <span className="bus-info">Seat Layout - 2 x 2</span>
                    <span className="ratting">
                      <i className="las la-bus"></i>AC
                    </span>
                  </div>
                  <div className="ticket-item-inner travel-time">
                    <div className="bus-time">
                      <p className="time">07:00 AM</p>
                      <p className="place">
                        {" "}
                        <p className="place">Dhaka</p>
                      </p>
                    </div>
                    <div className=" bus-time">
                      <i className="las la-arrow-right"></i>
                      <p>09:00 min</p>
                    </div>
                    <div className=" bus-time">
                      <p className="time">04:00 PM</p>
                      <p className="place">Rajshahi</p>
                    </div>
                  </div>
                  <div className="ticket-item-inner book-ticket">
                    <p className="rent mb-0 fa-solid fa-bangladeshi-taka-sign">
                      50.00
                    </p>
                    <div className="seats-left mt-2 mb-3 fs--14px">
                      <div
                        className="d-inline-flex flex-wrap"
                        style={{ gap: "5px" }}
                      >
                        <span
                          className="badge badge--primary"
                          style={{ color: "#7367f0" }}
                        >
                          Thursday
                        </span>
                      </div>
                    </div>
                    <a
                      className="btn btn--base"
                      style={{ background: "#0E9E4De6", color: "#FFF" }}
                    >
                      Select Seat
                    </a>
                  </div>
                  <div className="ticket-item-footer">
                    <div className="d-flex content-justify-center">
                      <span>
                        <strong>Facilities - </strong>
                        <span className="facilities">Water Bottle</span>
                        <span className="facilities">Wifi</span>
                      </span>
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

export default GetTicket;
