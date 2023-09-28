# Data Types and Naming Conventions
In C++, variables are declared in the following format: type variableName = value;

All variables start with a lowercase letter or an underscore. Also, variable names (aka identifiers) cannot contain whitespace or special characters like !, #, %, etc. Additionally, identifiers can be written in camelCase or snake_case. For classes, the names should be nouns, must start with a capital letter, and cannot include underscores. These conventions are enforced by the compiler. 

By default, binding of classes, functions, variables, and operators occur at compile time.  

There are 95 reserved words in C++ and these words (such as ‘int’) cannot be used for identifiers. These reserved words include and, bool, char, private, public, float, switch, etc. 

One of the most unique data types in C++ is pointers. While normal variables store data, a pointer stores a memory location. In essence, it ‘points’ to an address in which there is a value. To declare a pointer, place a * in front of the identifier and include a “p” or “ptr” as a prefix or suffix. 

It is also important to discuss creating arrays in C++. The format for doing so is type arrayName[integerValue] = {val1, val2, …valn};  
The integer value in the bracket represents the maximum amount of entries allowed in the array. In the code example shown, the maximum is 3. An empty bracket acts as a dynamic array, in which case the compiler will assume a size for the array that matches the number in the curly brackets {}. Finally, you cannot store values of different types in an array. All values in an array must be an integer, or character, or string, etc. 

The code below illustrates how to declare and write variables of different types in C++: 

```
#include <iostream>
#include <string>
using namespace std;
#include <unordered_map>
using namespace std;

int main() {

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

return 0;
}
```
## Typing
C++ is a statically typed language since identifiers must be explicitly attached to a type by compile time. As opposed to Python where the type of the variable is interpreted at runtime, one must declare a variable type for C++ before proceeding. 

Additionally, C++ is considered strongly typed because operations are only allowed with certain data types and there are limits on combining identifiers with varying types. 

C++ is both implicitly and explicitly typed, especially when it comes to conversions. Implicit type conversion occurs when the compiler converts a variable of one type to another, in order to avoid data loss. However, explicit occurs the programmer casts a variable of one type into another type in order to better perform an operation. Examples of both these cases are show in the code below:

In C++, non-constant objects are mutable, while constants are immutable. Finally, arithmetic (+, /, *, etc.), assignment (var = value), comparison (==, >, <, etc.), and logical (&&, ||, !) operators are allowed in C++. 

## Performing Operations 
Mixed type operations are allowed but only under certain conditions. For example, operations performed between numbers, such as ints, floats, and doubles are appropriate in C++ because the compiler will perform conversions in order to make the calculations possible. Additionally, C++ will support operations between ints and chars, by converting the character to its numerical ASCII representation. 

However, operations performed between numbers and strings will yield an error message. 

Examples of operations performed are outlined below:

```
#include <iostream>
#include <string>
using namespace std;
#include <unordered_map>
using namespace std;

int main() {

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
```

## Sources
[1]“C++ Variables,” www.w3schools.com. https://www.w3schools.com/cpp/cpp_variables.asp#:~:text=Declaring%20(Creating)%20Variables&text=type%20variableName%20%3D%20value%3B

[2]“C++ Identifiers,” www.w3schools.com. https://www.w3schools.com/cpp/cpp_variables_identifiers.asp#:~:text=Names%20must%20begin%20with%20a (accessed Sep. 28, 2023).

[3]A. Thakur, “Reserved Keywords in C++?,” www.tutorialspoint.com, Jun. 19, 2020. https://www.tutorialspoint.com/Reserved-keywords-in-Cplusplus#:~:text=A%20reserved%20word%20is%20a (accessed Sep. 28, 2023).

[4]“Naming Convention in C++,” GeeksforGeeks, Jan. 11, 2022. https://www.geeksforgeeks.org/naming-convention-in-c/

[5]N. Kanodia and S. Jacobson, “C++ Strings ,” Sep. 2012. Available: https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf

[6]“C++ Float and Double,” www.programiz.com. https://www.programiz.com/cpp-programming/float-double (accessed Sep. 28, 2023).

[7]C. Hock-Chuan, “C++ Pointers and References,” www3.ntu.edu.sg, Apr. 2013. https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html#:~:text=The%20syntax%20of%20declaring%20a (accessed Sep. 28, 2023).

[8]“C++ Boolean,” www.javatpoint.com. https://www.javatpoint.com/cpp-boolean (accessed Sep. 28, 2023).

[9]“Arrays,” Cplusplus.com, 2022. https://cplusplus.com/doc/tutorial/arrays/

[10]M. Aslam, “What Is a Hash Map in C++?,” Educative. https://www.educative.io/answers/what-is-a-hash-map-in-cpp (accessed Sep. 28, 2023).

[11]A. Fabijanic, “Dynamic C++, Part 1,” accu.org, Jun. 2013. https://accu.org/journals/overload/21/115/fabijanic_1855/#:~:text=C%2B%2B%20is%20a%20statically%2Dtyped (accessed Sep. 28, 2023).

[12]A. Zola, “What Is a Strongly Typed Programming language?,” WhatIs.com, Jun. 2022. https://www.techtarget.com/whatis/definition/strongly-typed#:~:text=The%20C%2B%2B%20programming%20language%20is (accessed Sep. 28, 2023).

[13]“C++ Operators,” www.w3schools.com. https://www.w3schools.com/cpp/cpp_operators.asp

[14]“CMPS 350 Lecture Notes - Names, Bindings, Type & Scope,” Csub.edu, 2023. https://www.cs.csub.edu/~melissa/cs350-f15/notes/notes05.html#top (accessed Sep. 28, 2023).

[15]“Type Conversion in C++,” GeeksforGeeks, Oct. 22, 2018. https://www.geeksforgeeks.org/type-conversion-in-c/
