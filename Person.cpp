#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        int age;
        string name;

        Person(int a, string n){
            age = a;
            name = n;
        }

        int getAge() {
            return age;
        }

        string getName(){
            return name;
        }

        void setAge(int newAge){
            age = newAge;
        }

        void setName(string newName) {
            name = newName; 
        }

        void printPerson() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};