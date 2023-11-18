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
- #include tuple
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

A source of side effects is when a global variable is used inside a function, instead of the parameters that are passed in or local variables. According to Laurence Boxer, Professor Emeritus of Computer Science and Engineering at SUNY at Buffalo, “since the [global] variable is not used as an actual parameter by the statement that calls upon the subprogram…a change in the value of the variable by the actions of the subprogram cannot be anticipated by a casual reading of either the calling statement or the function header” [15]. 

Another source of side effects is when non-void functions return more than one data value, or if the function has an output or requires user input. These are considered side effects because the function creates additional data beyond the value returned, or the values produced aren’t entirely determined by the parameters passed into the function.  

These side effects can be avoided by making the subprogram a void function and passing in parameters by reference, thus allowing the function to accept input, and produce output. Although the function should not use global variables.

## Pass by Reference and by Value
Pass by value and pass by reference are ways of changing a parameter from outside the function. With pass by value, parameters inside the function are copies of the original variables, so changes made to the parameters have no effect on the original arguments. C++ is pass by value by default.

On the other hand, pass by reference allows the function to change the parameter without making a copy of it. This can be accomplished by using pointers: place an ampersand (&) after the datatype in the function header. This allows programmers to designate parameters as references to an existing variable, instead of a new copy. The syntax for pass by reference is as follows: void functionName (dataType& parameterName) {body;}

## Loops
C++ has three types of loops: while, do/while, and for loops. The Do/While loop executes the loop statements once, before checking if the condition is True, and will continue the loop for as long as the condition is True. I have provided code showing the syntax and requirements for different kinds of loops. 

```
int loops(int sum){
    //illustrates the different types of loops in C++

    //increments the variable sum (the value of sum is 5 before the loop begins)
    for (int i = 0; i < 5; i++) {
        sum += i;
    }
    cout << sum << endl;

    //prints all the numbers between 1 and 8
    int i = 1;
    while (i<9) {
        cout << i << endl;
        i++;
    }

    double j = 20;
    //the do/while loop halves the quotient as long as it's greater than 2
    do {
        j = j/2;
        cout << j << endl;
    } while (j>2);

}
```

## Sources
[1]Tutorialspoint, “C++ Functions ,” www.tutorialspoint.com. https://www.tutorialspoint.com/cplusplus/cpp_functions.htm 

[2]J. Germain, “C Programming - Functions,” users.cs.utah.edu. https://users.cs.utah.edu/~germain/PPS/Topics/C_Language/c_functions.html#:~:text=The%20order%20of%20functions%20inside (accessed Nov. 18, 2023). 

[3]C. Fontanella, “How to Call a Function in C++,” blog.hubspot.com, Jun. 26, 2023. https://blog.hubspot.com/website/call-a-function-in-c#how (accessed Nov. 18, 2023). 

[4]GeeksForGeeks, “Functions in C++,” GeeksforGeeks, Jun. 20, 2015. https://www.geeksforgeeks.org/functions-in-cpp/# (accessed Nov. 18, 2023). 

[5]Udacity, “Developer’s Guide to C++ Function Parameters,” Udacity, Sep. 13, 2021. https://www.udacity.com/blog/2021/09/developers-guide-to-cpp-function-parameters.html 

[6]“Functions,” cplusplus.com. https://cplusplus.com/doc/tutorial/functions/ 

[7]N. Thakur, “Returning Multiple Values from a Function Using Tuple and Pair in C++,” www.tutorialspoint.com, Jul. 30, 2019. https://www.tutorialspoint.com/returning-multiple-values-from-a-function-using-tuple-and-pair-in-cplusplus (accessed Nov. 18, 2023). 

[8]J. Chen and R. Guo, “Stack and Heap Memory,” courses.engr.illinois.edu. https://courses.engr.illinois.edu/cs225/fa2022/resources/stack-heap/#:~:text=stack%20%3A%20stores%20local%20variables (accessed Nov. 18, 2023). 

[9]D. Calvanese, “Lifetime of Local Variables,” www.inf.unibz.it, 2005. https://www.inf.unibz.it/~calvanese/teaching/04-05-ip/lecture-notes/uni03/node17.html#:~:text=The%20lifetime%20of%20a%20variable 

[10]R. Klein, “The C++ Call Stack,” www.youtube.com, Jul. 11, 2019. https://www.youtube.com/watch?v=uG_JOJgwbco (accessed Nov. 18, 2023). 

[11]Learn C++, “20.2 — The Stack and the Heap ,” www.learncpp.com, Sep. 11, 2023. https://www.learncpp.com/cpp-tutorial/the-stack-and-the-heap/ 

[12]P. Forogh, “C++ Tutorial - Loops In C++ [For Loop, While Loop, Do While Loop],” www.youtube.com, Apr. 27, 2020. https://www.youtube.com/watch?v=jNl5gJ_xSNQ 

[13]S. Goyal, “Find in String C++ | Examples to Find Substrings & More! // Unstop (formerly Dare2Compete),” unstop.com, Nov. 09, 2023. https://unstop.com/blog/find-in-string-cpp 

[14]W3schools, “C++ While Loop,” W3schools.com, 2019. https://www.w3schools.com/cpp/cpp_while_loop.asp 

[15]L. Boxer, “Side Effects,” purple.niagara.edu. https://purple.niagara.edu/boxer/essays/prog/side-eff.htm#:~:text=Other%20ways%20in%20which%20side (accessed Nov. 18, 2023). 
