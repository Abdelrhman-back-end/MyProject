const {validationResult } = require("express-validator");
let {courses} = require('../data/courses'); 
const Getallcourses = (req, res) => {
    res.json(courses);
  }

  const singlcourse =(req, res) => {
    const courseId = +req.params.courseId;
    const course = courses.find((course) => course.id === courseId);
    if (!course) {
      return res.status(404).json([{ mgs: "course not found" }]);
    }
    res.json(course);
  }
  const Updatecourse =  (req, res) => {
    const courseId = +req.params.coursId;
    const courseUpdate = courses.find((courseUpdate) => courseUpdate.id === courseId
    );
    if (!courseUpdate) {
      return res.status(404).json({ msg: "not found update on coursese" });
    }
    course = { ...courseUpdate, ...req.body };
    res.status(200).json(courseUpdate);
  }
  const deletecourse = (req, res) => {
    const courseId = +req.params.coursId;
    courses = courses.filter((course) => course.id ==! courseId);
  
    res.status(200).json({ success: true });
  }
  const Addcourses =(req, res) => {
      const error = validationResult(req);
      if (!error.isEmpty()) {
        return res.status(400).json(error.array());
      }
      const course = { id: courses.length + 1, ...req.body };
      courses.push(course);
      res.status(201).json(course);
    }

  module.exports ={
    Getallcourses,
    singlcourse,
    Updatecourse,
    deletecourse,
    Addcourses
  }