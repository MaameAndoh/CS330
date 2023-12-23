## Booleans and Conditionals 
C++ has a bool data type which takes in the values true or false. 
As I explained in the previous tutorials, C++ supports conditional statements. These are in the form of if/else and if/else if/else statements. To review, the syntax for the former is as follows:
```
if (condition) {
  // statements to execute if condition is true;
}
else {
  // statements to execute if condition is false;
}
```
The latter statement is used to address situations in which there are multiple conditions and alternative statements that can be executed in those statements. In that case, the if/else if/else statement is optimal.
```
int age = 38; 
if (age < 18 ) {
  cout << "You are a child " <<endl;
} else if (age < 29) {
  cout << "You are a young adult" <<endl;
} else if (age < 50) {
  cout << "You are middle-aged" <<endl;
} else {
  cout << "You are elderly" <<endl;
    }

```
The language also supports nested conditional statements. This means the statements in each condition could include additional if/else statements, thus allowing the user to expand the statements that can be executed.

Moving on, In C++ code blocks are delimited by curly brackets. The dangling else problem occurs when a programmer forgets the code indentation and loses track of the if statement that goes with the else statement. Unless braces are used to separate the if and else statements, the else statement will be connected to the last if statement used. As such, it is important to use braces when an else follows an if.

## Short circuting
C++ has short-circuit evaluation. Short-circuit evaluation is when the program stops running the rest of an expression when it knows the result can’t end up as True. We can use the following code as a demonstration. In this example, the print statement executes because even though the weather is sunny, since the program evaluates the first condition and comes back with false, it doesn't bother checking the second condition. In conjuction, if the first condition is false, then the whole statment is going to be false as well. 
```
string weather = "Raining";
int temperature = 80;

if (temperature < 40 && weather == "Sunny") {
  cout << "It is not a good day to go to the beach." << endl;}
//Output: It is not a good day to go to the beach.
```
## Switch Statements
C++ supports switch statements. In a switch statement, an expression is evaluated and compared to each case in the program. The case that matches the expression is executed, the program encounters the break and exits switch statements. The following is an example of switch statement: 
```
int number = -1;
switch (number) {
  case -1: cout << "This is -1" << endl; break;
  case 0: cout << "This is 0" << endl; break;
  case 1: cout << "This is 1" << endl; break;
  default : cout << "Its a different number"<<endl;
    }
```
## Loops
C++ supports while, do/while, and for loops. For information about the differences between these, read my previous tutorial on functions and loops (PLP3). Variables declared within a loop are considered local to that loop. They are activated when the loop starts, and terminates when the loop finishes, after which the rest of the function doesn’t have access to those variables.  

## Sources
[1]“C++ Booleans,” W3schools.com, 2020. https://www.w3schools.com/cpp/cpp_booleans.asp 

[2]“C++ if, if...else and Nested if...else,” www.programiz.com. https://www.programiz.com/cpp-programming/if-else#:~:text=C%2B%2B%20if...else. 

[3]Mark, “Short-circuit Evaluation in C++,” Medium, Sep. 08, 2023. https://medium.com/@mark_91480/short-circuit-evaluation-in-c-6978c0dc332a 

[4]J. Popyack, “Nested Conditionals: The Dangling Else Problem,” Drexel.edu, 2005. https://www.cs.drexel.edu/~popyack/Courses/GovSchool/2005/Sp04/lectures/08.2_nested_conditionals/DanglingElse.html?CurrentSlide=3#:~:text=The%20dangling%20else%20problem%20results 

[5]“For Statements (C++),” learn.microsoft.com, Apr. 22, 2022. https://learn.microsoft.com/th-th/cpp/cpp/for-statement-cpp?view=msvc-170&viewFallbackFrom=vs-2017
