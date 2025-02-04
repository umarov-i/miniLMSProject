#ifndef LMS_H
#define LMS_H

#include <iostream>
#include <vector>
class Student;
class Course;
using namespace std;

class LMS {
    string name;
    vector<Student> students;
    vector<Course> courses;
public:
    LMS(string name);
    void addStudent(Student);
    void addCourse(Course);
    void addStudentToCourse(Student, Course);
    void printDetails();
};






#endif //LMS_H
