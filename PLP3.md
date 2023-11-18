# Functions and Loops

## Overview of C++ Functions
Every C++ program has at least one function, known as main(). A function consists of a header containing its name, return type (the data type of the value that is returned), parameters, and the body of the function - statements that are executed when the function is called. 

The syntax is as follows: 

- returnType functionName (dataType parameter1, dataType parameter 2…)
  -   {body of the function;}

To call a function, the format is: functionName(parameter1, parameter 2…);

Functions in C++ accept multiple parameters. If the parameters are of similar data types, you can use the header file <initializer_list> and define a function having a parameter as an initializer_list of the required data type. For example: 
- #include <initializer_list>
- void printNames(initializer_list<string> nameOfList) 

If the parameters have different data types simply state the datatype before the parameter. 

While there are no rules about where a function has to be placed, the function has to be declared/defined before it can be used. In essence, if a function uses another function that is declared above it in the file, then the program will run. But if the function uses a function that is "below" it in a file, the program will return an error message. 

When it comes to returning, functions can only return one value at a time. We can get around this issue by using the tuple of pair library in C++. A tuple is an object capable of holding multiple values, and they can all be of different data types. A pair performs a similar function but can only hold two values. The syntax for using both methods is as follows.

**Tuple**
- #include<tuple>
  - tuple <dataType1, dataType2, … dataTypeN> functionName(dataType parameter1, dataType parameter2, … dataType parameter N) {
    - Statements;
    - return make_tuple(arguments); }

**Pair**
- std::pair<dataType1, dataType2> functionName(dataType parameter1, dataType parameter2) {
  - Statements; 
  - return std::make_pair(param1, param2); }
Calling the pair function: pair<dataType1, dataType2> variableName = functionName(argument1, argument2)

Finally, C++ supports recursive functions. To perform recursion in C++, just call the function inside the function it is being used in. 

## Function/Variable Scopes, Lifetimes, Side Effects
Variables declared outside all functions have file scope, in that they can be accessed and used by all functions in the file. These identifiers exist from their inception till the end of the file. Generally, variables declared inside functions or code blocks are only accessible in those areas, and when it comes to lifetime, they are created when the method is activated and are destroyed when the function finishes. 

Additionally, function parameters, arguments, and local variables are stored on the stack, while global variables are stored on the heap. When it comes to pointers, the address of the variable is stored on the stack but the value stored in that address is on the heap. 

Like most languages, C++ is vulnerable to side effects. 

A source of side effects is when a global variable is used inside a function, instead of the parameters that are passed in or local variables. According to Laurence Boxer, Professor Emeritus of Computer Science and Engineering at SUNY at Buffalo, “since the [global] variable is not used as an actual parameter by the statement that calls upon the subprogram…a change in the value of the variable by the actions of the subprogram cannot be anticipated by a casual reading of either the calling statement or the function header”. 

Another source of side effects is when non-void functions return more than one data value, or if the function has an output or requires user input. These are considered side effects because the function creates additional data beyond the value returned, or the values produced aren’t entirely determined by the parameters passed into the function.  

These side effects can be avoided by making the subprogram a void function and passing in parameters by reference, thus allowing the function to accept input, and produce output. Although the function should not use global variables.

## Pass by Reference and by Value
Pass by value and pass by reference are ways of changing a parameter from outside the function. With pass by value, parameters inside the function are copies of the original variables, so changes made to the parameters have no effect on the original arguments. C++ is pass by value by default.

On the other hand, pass by reference allows the function to change the parameter without making a copy of it. This can be accomplished by using pointers: place an ampersand (&) after the datatype in the function header. This allows programmers to designate parameters as references to an existing variable, instead of a new copy. The syntax for pass by reference is as follows: void functionName (dataType& parameterName) {body;}

## Loops
C++ has three types of loops: while, do/while, and for loops. The Do/While loop executes the loop statements once, before checking if the condition is True, and will continue the loop for as long as the condition is True. I have provided code showing the syntax and requirements for different kinds of loops. 





