#include <iostream>
#include <string>
using namespace std;
#include <unordered_map>
using namespace std;

int main() {
    //Creating variables of different types 

    //integer variable 
    int age = 54;
    cout << "I am " << age << " years old."<< endl;

    //string variable 
    string name = "Ellen";
    cout << name << endl;

    //pointer variable 
    string * ptr1; //Declare a string pointer
    ptr1 = &name; //store the address of the variable "name" in ptr1

    //float varible
    /*
    You must add f or F at the end of a float value 
    or else the compiler will view it as a double */
    float height1 = 5.5f;
    cout << height1 << endl;

    //double variable
    double height2 = 5.10;
    cout << height2 << endl;

    //boolean variable 
    bool person = true;
    cout << person << endl;

    //array variable 
    string children[3] = {"Joey", "Anna", "Paul"};
    //accessing elements in the array
    cout << "Ellen's sons are " << children[0] << "and" << children[2] << endl;

    // Create a hashmap
    unordered_map < string, string > siblings;
    // Insert key-value pairs
    siblings.insert({"sib1", "Helena"});
    siblings.insert({"sib2", "Margaret"});
    siblings.insert({"sib3", "Frank"});

    //Performing Operations
    int int1 = 12;
    int int2 = 8;
    float float1 = 6.2f;
    double double1 = 6.235;
    char char1 = 'a';
    string greeting = "Hello";

    //Adding integers
    cout << "Adding integers: " << int1 + int2 << endl; //Passes

    //Mixed type operations 
    cout << "Adding float and double: " << float1 + double1 << endl; //Passes
    cout << "Multiplying float and int: " << int2 * float1 << endl; //Passes

    cout << "Adding int and char: " << int1 + char1 << endl; //Passes
    cout << "Adding char and string: " << greeting + char1 << endl; //Passes

    cout << "Converting from a double to an int: " << int2 + int(double1) << endl; //Passes

    cout << "Adding int and string: " << int1 + greeting << endl; //Fails. Cannot add ints and strings

    return 0;
}



