#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
class Student;
using namespace std;

class Course {
    string id;
    int credits;
    string name;
    vector<int> students;
public:
    Course(string id, string name, int credits);

    string getId() const;
    string getName() const;
    int getCredits() const;
    bool hasStudent(Student);
    bool addStudent(Student);
    void dropStudent(Student);
    void printDetails();
};











#endif //COURSE_H
