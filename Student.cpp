#include <iostream>
#include <string>
using namespace std;


class Student: public Person{
    public:
        string course;

        Student(string n, int a, string c): Person(a, n) {
            course = c;
        }

        string getCourse(){
            return course;
        }

        void setCourse(string newCourse) {
            course = newCourse; 
        }

        void printStudent() {
            Person::printPerson();
            cout << "Course: " << course << endl;
        }
};