#include <iostream>
#include <vector>
#include <string>
#include "Student.h"
#include "Course.h"
using namespace std;

Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
}

int Student::getId () {
    return id;
}

string Student::getName() {
    return name;
}

vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}

bool Student::takesCourse(Course course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if (enrolledCourses[i] == course.getId()) {
            return true;
        }
    }
    return false;
}

bool Student::takeCourse(Course course) {
        if(!takesCourse(course)) {
            enrolledCourses.push_back(course.getId());
        }
    return true;
}

void Student::dropCourse(Course course) {
    int courseId = course.getId();
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if (enrolledCourses[i] == courseId) {
            enrolledCourses.erase(enrolledCourses.begin() + i);
        }
    }
}

void Student::printDetails() {
    cout << "Student ID: " << id << ", Name: " << name << endl;
    cout << "Enrolled Courses: " << endl;
    for (int i = 0; i < enrolledCourses.size(); i++) {
        cout << enrolledCourses[i] << " " << endl;
    }
}
