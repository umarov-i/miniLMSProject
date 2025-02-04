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

void LMS::addStudentToCourse(Student student, Course course) {
    int studentIndex = -1;
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].getId() == student.getId()) {
            studentIndex = i;
            break;
        }
    }
}










void LMS::printDetails() {
    cout << "LMS Name: " << name << endl;

}
