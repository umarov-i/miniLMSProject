#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
#include "Course.h"
class Course;
using namespace std;

class Student {
    int id;
    string name;
    vector<int> enrolledCourses;
    const int MAX_ALLOWED_CREDITS = 18;
public:
    Student(int id,string name);

    int getId() const;
    string getName() const;
    vector<int> getEnrolledCourses() const;
    bool takesCourse(Course course);
    bool takeCourse(Course course);
    void dropCourse(Course course);
    void printDetails();

};
#endif //STUDENT_H