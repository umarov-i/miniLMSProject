#include <iostream>
#include <vector>
#include "LMS.h"
#include "Student.h"
#include "Course.h"
using namespace std;

LMS::LMS(string name) {
    this->name = name;
}

void LMS::addStudent(Student student) {
    students.push_back(student);
}

void LMS::addCourse(Course course) {
    courses.push_back(course);
}

void LMS::addStudentToCourse(int student_id,string course_id) {
    for (int i = 0; i < this->courses.size(); i++) {
        if (course_id == stoi(this->courses[i].getId())) {
            for (int j = 0; j < this->students.size(); j++) {
                if (student_id == this->students[j].getId()) {
                    if(courses[i].addStudent(students[j]) && !students[j].takeCourse(courses[i])) {
                        courses[i].dropStudent(students[j]);
                    }

                }

            }
        }

    }
}

void LMS::printDetails() {
    cout << "LMS Name: " << name << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << "Student ID: " << students[i].getId() << endl;
    }
    for (int i = 0; i < courses.size(); i++) {
        cout << "Course ID: " << courses[i].getId() << endl;
    }

}
