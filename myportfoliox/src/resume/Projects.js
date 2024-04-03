import React from "react";
import "./resumeStyles.css";

export default function Projects() {
  return (
    <>
      <div class="scrollable-div mobile-scroll">
        <div>
          <div className="d-flex flex-column my-4">
            <div className="work-inside-new mx-2">
              <div className="d-flex flex-column">
                <div className="d-flex flex-row justify-content-between ">
                  <span className="university-Name">
                    Online Bus Ticketing System
                  </span>
                  <a
                    href="https://github.com/AbdulOhab/Bus-Ticketing-System-Using-JavaFX"
                    className="git-link"
                  >
                    Github Link
                  </a>
                </div>
              </div>

              <div className="d-flex flex-column">
                <span className="university-degree">
                  {" "}
                  Using Java JavaFx OOP MySQL
                </span>
                <span className="description-position">
                  <ul>
                    <li>{""} User can Register, Login</li>
                    <li>{""} User can purchase ticket, can cancel ticket</li>
                    <li>{""} User get an confirmation slip of ticket</li>
                  </ul>
                </span>
              </div>
            </div>
            <div className="work-inside-new mx-2">
              <div className="d-flex flex-column">
                <div className="d-flex flex-row justify-content-between ">
                  <span className="university-Name">Book Database System</span>
                  <a
                    href="https://github.com/AbdulOhab/Online_Food_delivsery_Management_System_Project_Paper"
                    className="git-link"
                  >
                    Github Link
                  </a>
                </div>
              </div>

              <div className="d-flex flex-column">
                <span className="university-degree">
                  {" "}
                  Using PHP JavaScript MySQL HTML5 CSS3 Bootstrap
                </span>
                <span className="description-position">
                  <ul>
                    <li>
                      {""} Store books, author, publication details in database.
                    </li>
                    <li>{""} Books are stored category and author wised.</li>
                    <li>
                      {""} User can create, update, delete and complex queries
                      to retrieve books form database.
                    </li>
                  </ul>
                </span>
              </div>
            </div>

            <div className="work-inside-new mx-2">
              <div className="d-flex flex-column">
                <div className="d-flex flex-row justify-content-between ">
                  <span className="university-Name">
                    Online Food Delivery System Design
                  </span>
                  <a
                    href="https://github.com/AbdulOhab/Online_Food_delivsery_Management_System_Project_Paper"
                    className="git-link"
                  >
                    Github Link
                  </a>
                </div>
              </div>

              <div className="d-flex flex-column">
                <span className="university-degree">
                  {" "}
                  Online food ordering system design with necessary steps.
                </span>
                <span className="description-position">
                  <ul>
                    <li>
                      {""} User can find restaurant, place order and track
                      order.
                    </li>
                    <li>
                      {""} Feasibility analysis, cost-benefit analysis, use case
                      diagram.
                    </li>
                    <li>
                      {""} Note that the development build is not optimized.
                    </li>
                    <li>{""} ERD and Dataflow diagram of the system design.</li>
                  </ul>
                </span>
              </div>
            </div>
          </div>
        </div>
      </div>
    </>
  );
}
