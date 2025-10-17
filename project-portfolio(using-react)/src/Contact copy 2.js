import React, { useRef, useState } from "react";
// import emailjs from "@emailjs/browser";
import emailjs from "emailjs-com";
import "./style.css";

export default function Contact() {
  const [name, setName] = useState("");
  const [email, setemail] = useState("");
  const [massage, setmassage] = useState("");

  const form = useRef();
  const sendEmail = (e) => {
    e.preventDefault();

    emailjs
      .sendForm(
        "service_bvbfv3w",
        "template_4afz32e ",
        form.current,
        "Y2D2rexALnyU7jpQT"
      )
      .then(
        (result) => {
          console.log(result.text);
        },
        (error) => {
          console.log(error.text);
        }
      );
  };

  return (
    <>
      <div>
        <div className="Contect-me-card row">
          <div className="col-lg-6 col-md-5 col-sm-12 left-cntect px-2 py-2">
            <span className="get-in-touch mx-4 my-5">Get In </span>
            <div className="py-5 d-flex justify-content-center">
              <dotlottie-player
                src="https://lottie.host/61345686-3ea3-48d8-8f51-0eec2fdcae74/OgUldc6aMC.json"
                background="transparent"
                speed="1"
                style={{ width: "300px", height: "300px" }}
                loop
                autoplay
              ></dotlottie-player>
            </div>
          </div>
          <div className="col-lg-6 col-md-5 col-sm-12 my-auto">
            <from
              ref={form}
              onSubmit={sendEmail}
              className="d-flex flex-column card-contect-right"
            >
              <div className="input-group my-1 d-flex flex-column">
                <label className="lebs">Name</label>
                <input
                  value={name}
                  conChange={(e) => {
                    setName(e.target.value);
                  }}
                  name="user_name"
                  type="text"
                  placeholder="Enter your name"
                  className="input-groups"
                />
              </div>
              <div className="input-group my-1 d-flex flex-column">
                <label className="lebs">Email ID</label>
                <input
                  value={email}
                  conChange={(e) => {
                    setemail(e.target.value);
                  }}
                  name="user_email"
                  type="text"
                  placeholder="Enter your email"
                  className="input-groups"
                />
              </div>
              <div className="input-group my-1 d-flex flex-column">
                <label className="lebs">Massage</label>
                <textarea
                  value={massage}
                  conChange={(e) => {
                    setmassage(e.target.value);
                  }}
                  name="message"
                  type="text"
                  placeholder="Write your Massage"
                  className="input-groups"
                />
              </div>
              <div className="input-group d-flex flex-column">
                <input
                  className="btn btn-success"
                  type="submit"
                  value="Send Me Massage"
                />
              </div>
            </from>
          </div>
        </div>
      </div>
    </>
  );
}
