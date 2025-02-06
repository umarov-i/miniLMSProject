#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include <vector>


class Student;
using namespace std;

class Course {
private:
    int id;
    int credits;
    string name;
    vector<int> students;
public:
    Course(int id, string name, int credits);

    int getId() const;
    string getName() const;
    int getCredits() const;
    bool hasStudent(Student student);
    bool addStudent(Student student);
    void dropStudent(Student student);
    void printDetails();
};











#endif //COURSE_H
