import React from "react";
import "./resumeStyles.css";

export default function Programming() {
  const value = [
    {
      text: "C",
      percentage: 90,
    },
    {
      text: "C++",
      percentage: 90,
    },
    {
      text: "Java",
      percentage: 60,
    },
    {
      text: "Pyhton",
      percentage: 80,
    },
    {
      text: "JavaScript",
      percentage: 60,
    },
    {
      text: "NodeJs",
      percentage: 85,
    },
  ];
  return (
    <>
      <div class="scrollable-div">
        <div className="row">
          {value.map((value, index) => {
            return (
              <>
                <div className="col-lg-6 col-mg-6 col-sm-12 my-2">
                  <span className="language">{value.text}</span>
                  <div className="progress-some">
                    <div className="progress-some">
                      <div
                        className="progress-new"
                        style={{ width: `${value.percentage}%` }}
                      ></div>
                    </div>
                  </div>
                </div>
              </>
            );
          })}
        </div>
      </div>
    </>
  );
}
