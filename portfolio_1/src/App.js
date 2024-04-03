import "./App.css";
import React, { useState, useEffect } from "react";
import "./style.css";
import "./App.css";
import "react-vertical-timeline-component/style.min.css";
import "bootstrap/dist/css/bootstrap.min.css";
import Preloader from "./Preloader";
import MyNav from "./components/navbar/MyNav";
import { BrowserRouter as Router } from "react-router-dom";
import Home from "./pages/home_page/HomePage";
import { Route, Routes } from "react-router-dom";
import Footer from "./components/footer/Footer";
import About from "./components/aboutme/about/About";
import EducationJourney from "./components/aboutme/journey/EducationJourney";
import TechnicalSkill from "./components/aboutme/skills/TechnicalSkill";
import SocialMedia from "./components/aboutme/social_media/SocialMedia";
// import Zoom from 'react-reveal/Zoom';
import Toolkit from "./components/aboutme/skills/Toolkit";

function App() {
  const [load, updateLoad] = useState(true);

  useEffect(() => {
    const timer = setTimeout(() => {
      updateLoad(false);
    }, 4000);

    return () => clearTimeout(timer);
  }, []);

  return (
    <Router>
      <Preloader load={load} />
      <div className="App" id={load ? "no-scroll" : "scroll"}>
        <MyNav />
        <Routes>
          <Route path="/" element={<Home />}>
            <Route path="/" element={<About />}></Route>
            <Route path="technicalskill" element={<TechnicalSkill />} />
            <Route
              path="educationjourney"
              element={<EducationJourney />}
            ></Route>

            <Route path="socialmedia" element={<SocialMedia />}></Route>
            <Route path="toolkit" element={<Toolkit />}></Route>
          </Route>
        </Routes>
        <Footer />
      </div>
    </Router>
  );
}

export default App;
