#ifndef LMS_H
#define LMS_H
#include "Course.h"
#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;

class LMS {
    string name;
    vector<Student> students;
    vector<Course> courses;
public:
    LMS(string name);

    void addStudent(Student student);
    void addCourse(Course course);
    void addStudentToCourse(int student, int course);
    void printDetails();
};






#endif //LMS_H
