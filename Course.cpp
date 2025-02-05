#include <iostream>
#include <vector>
#include "Course.h"
#include "Student.h"
#include <algorithm>
using namespace std;

Course::Course(string id, string name, int credits) {
    this->id = id;
    this->name = name;
    this->credits = credits;
}

string Course::getId () const {
    return id;
}

string Course::getName() const {
    return name;
}

int Course::getCredits() const {
    return credits;
}

bool Course::hasStudent(Student student) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i] == student.getId()) {
            return true;
        }
    }
    return false;
}

bool Course::addStudent(Student student) {
    students.push_back(student.getId());
    return true;
}

void Course::dropStudent(Student student) {
    string studentId = to_string(student.getId());
    students.erase(
        remove(students.begin(), students.end(), studentId),
        students.end()
    );
}

void Course::printDetails() {
cout << "Courses: " << endl;
    cout << "Course ID: " << id << ", Name: " << name << ", Credits: " << credits << endl;
    cout << "Enrolled Students: ";
    for (int i = 0; i < students.size(); i++) {
        cout << students[i] << " ";
    }
    cout << endl;
}


