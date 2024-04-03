import React from 'react';
import "./resumeStyles.css";


export default function Education(){
    return <>
     <div className="d-flex flex-column">
        <div className="education-one my-4 justify-content-between d-flex flex-row">
            <div className="d-flex flex-column new-one">
                <span className="university-Name">Southeast University{" "}
                </span>
                <span className="university-degree"> Bachelors of Computer Science and Engineering (CSE) {" "}
                </span>
            </div>{" "}
            <div>
                <span className="year-passedout">2019-2023{" "}</span>
            </div>
        </div>
        <div className="education-one my-4 justify-content-between d-flex flex-row">
            <div className="d-flex flex-column new-one">
                <span className="university-Name">Rajshahi Model School and college{" "}
                </span>
                <span className="university-degree"> Intermediate {" "}
                </span>
            </div>{" "}
            <div>
                <span className="year-passedout">2016-2018{" "}</span>
            </div>
        </div>
        <div className="education-one my-4 justify-content-between d-flex flex-row">
            <div className="d-flex flex-column new-one">
                <span className="university-Name">Nazipur Siddikia Fazil Madrasah{" "}
                </span>
                <span className="university-degree"> High School{" "}
                </span>
            </div>{" "}
            <div>
                <span className="year-passedout">2015-2015{" "}</span>
            </div>
        </div>
     </div>
    </>;
} 