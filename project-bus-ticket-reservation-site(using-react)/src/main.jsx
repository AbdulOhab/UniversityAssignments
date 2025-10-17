import React from "react";
import ReactDOM from "react-dom/client";
import App from "./App.jsx";
import "./index.css";
// import Home from "./pages/Home";
import About from "./pages/About";
import Blog from "./pages/Blog";
import Contact from "./pages/Contact";
import { createBrowserRouter, RouterProvider } from "react-router-dom";
import Login from "./pages/Login.jsx";
import Signup from "./pages/Signup";
import Forgot from "./pages/Forgot";
import GetTicket from "./pages/GetTicket";
import BlogPost from "./pages/BlogPost";
import PrivacyPolicy from "./pages/PrivacyPolicy";
import TicketPolicies from "./pages/TicketPolicies";
import TicketTS from "./pages/TicketTS";
// import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
// import { faUser } from "@fortawesome/free-solid-svg-icons";

const router = createBrowserRouter([
  {
    path: "/",
    element: <App />,
  },
  {
    path: "/Home",
    element: <App />,
  },
  {
    path: "/About",
    element: <About />,
  },
  {
    path: "/Blog",
    element: <Blog />,
  },
  {
    path: "/Contact",
    element: <Contact />,
  },
  {
    path: "/Login",
    element: <Login />,
  },
  {
    path: "/Signup",
    element: <Signup />,
  },
  {
    path: "/Forgot",
    element: <Forgot />,
  },
  {
    path: "/GetTicket",
    element: <GetTicket />,
  },
  {
    path: "/BlogPost",
    element: <BlogPost />,
  },
  {
    path: "/PrivacyPolicy",
    element: <PrivacyPolicy />,
  },
  {
    path: "/TicketPolicies",
    element: <TicketPolicies />,
  },
  {
    path: "/TicketTS",
    element: <TicketTS />,
  },
]);

ReactDOM.createRoot(document.getElementById("root")).render(
  <React.StrictMode>
    <RouterProvider router={router} />
  </React.StrictMode>
);
