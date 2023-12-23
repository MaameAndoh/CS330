#include "Person.cpp"
#include "Student.cpp"
#include <iostream>
#include <string>

using namespace std;

//To better understand this code, please look at the Person and Student files. 

int main() {
    //Create instances of Person class
    Person person1 = Person(21, "Sandy");
    Person person2 = Person(19, "James");

    //Get details of each person
    cout << person1.getName() << endl;
    cout << person2.getAge() << endl;

    //change person1's information
    person1.setName("Elise");
    person1.setAge(18);
    //Show updated details of person1
    person1.printPerson();

    //Create an instance of the Student class
    Student stu1 = Student("Kevin", 22, "Personal Finance");
    
    //Print student details 
    cout << stu1.getName() << endl;
    cout << stu1.getAge() << endl;

    //Change student details 
    stu1.setCourse("Data Structures");

    //Show updated changes
    stu1.printStudent();
}