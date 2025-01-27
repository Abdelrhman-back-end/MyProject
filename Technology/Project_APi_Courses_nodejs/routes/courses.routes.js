const express = require('express');
const {body} = require("express-validator");
const Controller = require('../controller/course.controller');
const router = express.Router();
router.route("/").get(Controller.Getallcourses).post(
  
  [
    body("title")
      .notEmpty()
      .withMessage("title is require")
      .isLength({ min: 2 })
      .withMessage("title at least 2 digit"),
    body("price")
      .notEmpty()
      .withMessage("price is empty")
      .isLength({ min: 3 })
      .withMessage("just price is 3 digits"),
  ],Controller.Addcourses);

router.route('/:courseId')
.get(Controller.singlcourse).
patch(Controller.Updatecourse).
delete(Controller.deletecourse)

module.exports = router;
    
