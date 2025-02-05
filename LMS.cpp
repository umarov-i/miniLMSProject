#include <iostream>
#include "LMS.h"
#include "Student.h"
#include "Course.h"
using namespace std;

LMS::LMS(string name) {
    this->name = name;
}

void LMS::addStudent(Student student) {
    this->students.push_back(student);
}

void LMS::addCourse(Course course) {
    this->courses.push_back(course);
}

void LMS::addStudentToCourse(int student_id,int course_id) {
    for (int i = 0; i < this->courses.size(); i++) {
        if (courses[i].getId() == course_id) {
            for (int j = 0; j < this->students.size(); j++) {
                if (student_id == this->students[j].getId()) {
                    courses[i].addStudent(students[j]);
                    students[j].takeCourse(courses[i]);
                }

            }
        }

    }
}

void LMS::printDetails() {
    cout << "LMS Name: " << this->name << endl;
    cout << "Students:" << endl;
    for (int i = 0; i < students.size(); i++) {
        students.at(i).printDetails();
    }
    for (int i = 0; i < courses.size(); i++) {
        courses.at(i).printDetails();
    }

}
