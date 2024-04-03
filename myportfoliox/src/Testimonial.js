import React from "react";
import "./style.css";

export default function Testimonial() {
  const testimonials = [
    {
      name: "John Doe",
      text: "I was amazed by your work! Your attention to detail and creativity are truly impressive. Keep up the great work!",
    },
    {
      name: "Jane Smith",
      text: "I can't thank you enough for the outstanding work you did on my project. Your professionalism and expertise are top-notch.",
    },
    {
      name: "David Johnson",
      text: "Working with you was a pleasure. Your designs are exceptional, and you delivered everything on time. I highly recommend your services.",
    },
  ];

  return (
    <>
      <div>
        <div className="row mx-5">
          {testimonials.map((value) => {
            return (
              <div className="mobile-border col-lg-4 col-sm-12 col-md-6">
                <div>
                  <div className="card shadow testimonial-card d-flex flex-column">
                    <span className="descriptiom">{value.text}</span>
                    <span className="name">{value.name}</span>
                  </div>
                </div>
              </div>
            );
          })}
        </div>
      </div>
    </>
  );
}
