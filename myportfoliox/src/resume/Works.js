import React from 'react';
import "./resumeStyles.css";

export default function works(){
    return <>
     <div className="d-flex flex-column my-4">
        <div className="work-inside-new mx-2">
            <div className="d-flex flex-column">
                <div className="d-flex flex-row justify-content-between ">
                <span className="company-name">Abc Flex</span>
                <span className="year-passedout">2023-present</span>
                </div>
            </div>

            <div className="d-flex flex-column">
                <span className="position"> Full Stack Development</span>
                <span className="description-position">
                <ul>
                    <li>{""} Note that the development build is not optimized.</li>
                    <li>{""} Note that the development build is not optimized.</li>
                    <li>{""} Note that the development build is not optimized.</li>
                    <li>{""} Note that the development build is not optimized.</li>
                </ul>
                </span>
            </div>
        </div>
     </div>
    </>;
} 