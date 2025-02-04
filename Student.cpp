#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

using namespace std;

Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
}

int Student::getId () const {
    return id;
}

string Student::getName() const {
    return name;
}

vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}

bool Student::takesCourse(Course course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if (enrolledCourses[i] == stoi(course.getId())) {
            return true;
        }
    }
    return false;
}

bool Student::takeCourse(Course course) {
    if(takesCourse(course)) {
        return true;
    } else {
        if(course.getCredits()<MAX_ALLOWED_CREDITS) {
            enrolledCourses.push_back(stoi(course.getId()));
        }
    }
    return false;
}

void Student::dropCourse(Course course) {
    int courseId = std::stoi(course.getId());
    enrolledCourses.erase(
        std::remove(enrolledCourses.begin(), enrolledCourses.end(), courseId),
        enrolledCourses.end()
    );}

void Student::printDetails() {
    cout << "Student ID: " << id << ", Name: " << name << endl;
    cout << "Enrolled Courses: " << endl;
    for (int i = 0; i < enrolledCourses.size(); i++) {
        cout << enrolledCourses[i] << " ";
    }
}
