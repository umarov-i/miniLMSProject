#include <iostream>
#include <vector>
#include "Student.h"
#include "LMS.h"
#include "Course.h"
using namespace std;

    int main() {
        string nameLMS;
        getline(cin,nameLMS);
        LMS myLMS(nameLMS);
        int number_students;
        cin>>number_students;
        //Add students
        for(int i=0;i<number_students;i++){
            int id;
            string name;
            cin>>id>>name;
            Student s1(id, name);
            myLMS.addStudent(s1);
        }
        // Add courses
        int number_courses;
        cin>>number_courses;
        for(int i=0;i<number_courses;i++){
            string name;
            int credit, id;
            cin>>id>>name>>credit;
            Course c1(id, name, credit);
            myLMS.addCourse(c1);
        }
        // Enroll students in courses
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int student_id;
            int course_id;
            cin>>student_id>>course_id;
            myLMS.addStudentToCourse(student_id, course_id);
        }
        // Print LMS details
        myLMS.printDetails();
        return 0;
    }