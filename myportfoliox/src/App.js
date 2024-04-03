import "./App.css";
import React, { useState, useEffect, useRef } from "react";
import Education from "./resume/Education";
import Programming from "./resume/Programming";
import Works from "./resume/Works";
import Projects from "./resume/Projects";
import Testimonial from "./Testimonial";
import "./style.css";
import Contect from "./Contact";
import Footer from "./Footer";
import Typed from "typed.js";

function App() {
  const [education, seteducation] = useState(true);
  const [programming, setprogramming] = useState(false);
  const [works, setworks] = useState(false);
  const [projects, setprojects] = useState(false);
  const [opennavbar, setopennavbar] = useState(false);

  function setAllFalse() {
    seteducation(false);
    setprogramming(false);
    setworks(false);
    setprojects(false);
  }

  function ChangeState(function1, State1) {
    setAllFalse();
    function1(State1);
  }
  const el = useRef(null);
  useEffect(() => {
    const typed = new Typed(el.current, {
      strings: [
        "Competitive programer",
        "Software Engineer",
        "Teach Enthusiastic",
      ],
      startDelay: 300,
      typeSpeed: 100,
      backSpeed: 50,
      backDelay: 500,
      smartBackspace: true,
      loop: true,
      showCursor: true,
      autoInsertCss: true,
      cursorChar: "|",
    });
    return () => {
      typed.destroy();
    };
  }, []);

  return (
    <div className="App">
      <div className="navbar-option-mobile bg-new">
        <div className="d-flex flex-row justify-content-between">
          <span className="brand-name d-flex align-items-center justify-content-center">
            Abdul Wahab{""}
          </span>
          <div className="bars mx-2" onClick={() => setopennavbar(!opennavbar)}>
            {""}
          </div>
        </div>
      </div>
      <nav
        className={
          !opennavbar
            ? "d-flex bg-new flex-rows navbar-new px-9 py-5 justify-content-between transition-all"
            : "d-flex bg-new flex-rows navbar-fixed-new px-9 py-5 justify-content-between transition-all"
        }
      >
        <span className="brand-name display-mobile" id="home">
          Abdul Wahab
        </span>
        <div className="d-flex flex-rows">
          <a
            href="#home"
            className="mx-4 nav-items"
            onClick={() => setopennavbar(false)}
          >
            Home
          </a>
          <a
            href="#about-me"
            className="mx-4 nav-items"
            onClick={() => setopennavbar(false)}
          >
            Abdout Me
          </a>
          <a
            href="#myreume"
            className="mx-4 nav-items"
            onClick={() => setopennavbar(false)}
          >
            Resume
          </a>
          <a
            href="#contect-with-me"
            className="mx-4 nav-items"
            onClick={() => setopennavbar(false)}
          >
            Contact
          </a>
        </div>
      </nav>
      <div className="herosection px-10 py-2">
        <div className="herosection-2 row justify-content-cnter">
          <div className="col-lg-6 col-md-6 col-sm-12">
            <div className="d-flex flex-column justify-content-center Im-text-section">
              <span className="Im-text">
                Hello,I'm <span className="name-Im-text">Abdul Wahab</span>
              </span>
              <span className="Im-text-enthusiastic" ref={el}>
                {/* Software Engineer */}
              </span>
              <span className="Im-text-subheading">
                Computer Science and Engineering student with good understanding
                of various technologies and problem solving.
              </span>
              <div className="d-flex flex-row justify-content-center In-btn">
                <a href="#contect-with-me" className="btn-hire-me">
                  Hire Me{" "}
                </a>
                <a href="./AbdulOhab.pdf" className="btn-resume-me">
                  Get Resume{" "}
                </a>
              </div>
            </div>
          </div>
          <div className="col-lg-6 col-md-6 col-sm-12">
            <div className="d-flex justify-content-cnter ">
              <img
                className="img-fluid custom-img"
                alt="heroimage"
                src="./images/my-image.jpg"
              ></img>
            </div>
          </div>
        </div>
      </div>
      <div className="about-me-section about-inside my-5" id="about-me">
        <div className="d-flex flex-column">
          <span className="about-me-text">About me</span>
          <span className="why-text-sub">Why Choose me?</span>
          <div className="row justify-content-center shadow-lg my-5">
            <div className="col-lg-6 col-md-6 col-sm-12 d-flex align-items-center justify-content-center">
              <dotlottie-player
                src="https://lottie.host/3268f7ac-c358-4ef5-bf33-7ede4c7d2369/R4FCEQg18p.json"
                background="transparent"
                speed="1"
                style={{ width: "300px", height: "300px" }}
                loop
                autoplay
              ></dotlottie-player>
            </div>
            <div className="col-lg-6 col-md-6 col-sm-6 py-5 d-flex flex-column">
              <span className="soome-test-about-me">
                My name is <b className="purple">MD ABDUL OHAB </b>
                and I am a{" "}
                <b className="purple">Computer Science and Engineering </b>
                student at <b className="purple">Southeast University </b>
                in Dhaka, Bangladesh. I am proficient in various programming
                languages such as &nbsp;
                <b className="purple">
                  {" "}
                  C, C++, Java, Python, HTML, CSS, PHP, and JavaScript.{" "}
                </b>
                <br />
                <br />I also have experience working with frameworks and
                libraries such as &nbsp;
                <b className="purple">
                  {" "}
                  NodeJS, ReactJS, Tensorflow, Pandas, and NumPy.{" "}
                </b>
                Whenever possible, I also apply my passion for developing
                products with &nbsp;
                <b className="purple">
                  {" "}
                  Modern Javascript Library and Frameworks.
                </b>
                <br />
                <br />
                In my free time, I enjoy learning new technologies and &nbsp;
                <b className="purple">solve problem. </b>
              </span>
            </div>
          </div>
        </div>
      </div>

      <div className="resume-outer-section d-flex flex-column" id="myreume">
        <span className="about-me-text">Resume</span>
        <span className="why-text-sub">My formal bio details</span>

        <div
          className="resume-new-section row"
          style={{ width: "78%", marginInline: "auto", height: "630px" }}
        >
          <div className="col-lg-4 col-md-4 resume-left-section d-flex px-0 shadow-lg flex-row">
            <div className="d-flex flex-column bg-new text-derk">
              <span className="icons-span">
                <i class="fa-solid fa-graduation-cap"></i>
              </span>
              <span className="icons-span">
                <i class="fa-solid fa-briefcase"></i>
              </span>
              <span className="icons-span">
                <i class="fa-solid fa-code"></i>
              </span>
              <span className="icons-span">
                <i class="fa-solid fa-tasks"></i>
              </span>
            </div>
            <div className="d-flex flex-column bg-add">
              <span
                className={
                  education === false
                    ? "resume-options-items"
                    : "selected resume-options-items"
                }
                onClick={() => {
                  ChangeState(seteducation, true);
                }}
              >
                {" "}
                Education{" "}
              </span>

              <span
                className={
                  works === false
                    ? "resume-options-items"
                    : "selected resume-options-items"
                }
                onClick={() => {
                  ChangeState(setworks, true);
                }}
              >
                {" "}
                works{" "}
              </span>

              <span
                className={
                  programming === false
                    ? "resume-options-items"
                    : "selected resume-options-items"
                }
                onClick={() => {
                  ChangeState(setprogramming, true);
                }}
              >
                {" "}
                Programming{" "}
              </span>
              <span
                className={
                  projects === false
                    ? "resume-options-items"
                    : "selected resume-options-items"
                }
                onClick={() => {
                  ChangeState(setprojects, true);
                }}
              >
                {" "}
                Projects{" "}
              </span>
            </div>
          </div>
          <div className="col-lg-8 col-md-8 resume-right-section">
            {education === true && <Education />}
            {programming === true && <Programming />}
            {works === true && <Works />}
            {projects === true && <Projects />}
          </div>
        </div>
      </div>
      {/* Testimonial  section*/}
      <div className="testimnial-part my-5">
        <div className=" testimonial inner-content d-flex flex-column">
          <span className="about-me-text">Testimonial</span>
          <span className="why-text-sub mb-5">
            {" "}
            what my friend say about me{" "}
          </span>
          <Testimonial />
        </div>
      </div>
      {/* Contact Me Section */}
      <div className="contect-me-part" id="contect-with-me">
        <div className="relative-bg"></div>
        <div className="contect-inner-part d-flex flex-column">
          <span className="about-me-text"> Contact Me</span>
          <span className="why-text-sub mb-5">Lets Keep in touch</span>
          <Contect />
        </div>
      </div>
      {/* footer section */}
      <div className="footer">
        <Footer />
      </div>
    </div>
  );
}

export default App;
