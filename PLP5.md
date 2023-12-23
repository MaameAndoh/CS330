## Classes and Structs
As an object-oriented language, C++ supports classes and instances of those classes known as objects. 

Classes are defined using the word class, followed by the class name in capital letters. The body of a class contains attributes and functions, as well as access specifiers: private, protected, or public, which influence how accessible a class’s members are to outside functions. C++ classes are private by default, so to use class attributes and methods, they have to be specified as public. 

Here is a sample Person class I created that displays the syntax and conventions of C++ classes:

```
class Person{
    public:
        int age;
        string name;

        Person(int a, string n){
            age = a;
            name = n;
        }

        int getAge() {return age;}

        string getName(){return name;}

        void setAge(int newAge){age = newAge;}

        void setName(string newName) {name = newName;}

        void printPerson() {cout << "Name: " << name << ", Age: " << age << endl;}
};
```
Here are some Person objects I created. Note that the class name stands in the usual position of the data type: 
```
Person person1 = Person(21, "Sandy");
Person person2 = Person(19, "James");
```
In addition to classes, structs are another data structure that is aimed to group related variables together. Structs are public by default and function similar to arrays, but unlike arrays, they can support variables of different data types. The syntax for declaring a struct is as follows:
```
struct {
  dataType1 variable1;
  dataType2 variable2;
  …
  dataTypeN variableN;
} StructName;
```
A standard method for functions that serves similar purposes across all objects are constructors. This is a function that is called whenever there’s a new instance of a class, and serves to initialize the class’s member variables. If you’re familiar with Python, constructors are similar to the ___init__() function in the language.  

Constructors are declared with a name that matches the class name and without a return type. Constructors can have parameters, which are the values that are assigned to the class’s attributes. 

## Inheritance and Method Overloading
C++ supports inheritance, a process in which a child/derived class can use the methods and attributes of its parent class, as well as create its own. The only members that remain inaccessible to the child class are the parent class’s constructors and private members. The inheritance relationship is defined in the header of the child class. The syntax is as follows:
```
class ChildClassName: accessModifier ParentClassName {...};
```
A child class can have multiple parent classes. Simply separate each parent class by commas in the class header. 
C++ also supports method overloading, a feature of object-oriented programming in which class methods can have the same name, as long as they have different parameters. As such, the program is able to distinguish methods by the differences in their parameters, and understand which method to execute in the program.  

However when it comes to classes and inheritance, the parameters don’t necessarily have to be different. Method overloading redefines a function of the parent class inside the child class, which overrides the parent class function. As such, when that function is called, it is the child class function, and not the parent class, that is executed. 

## Sources
[1]“Classes (I),” cplusplus.com. https://cplusplus.com/doc/tutorial/classes/ 

[2]“Structures in C++ ,” GeeksforGeeks, May 25, 2021. https://www.geeksforgeeks.org/structures-in-cpp/ 

[3]The Cherno, “CLASSES vs STRUCTS in C++,” www.youtube.com, Jul. 02, 2017. https://www.youtube.com/watch?v=fLgTtaqqJp0 (accessed Dec. 23, 2023). 

[4]“Friendship and Inheritance,” Cplusplus.com, 2023. https://cplusplus.com/doc/tutorial/inheritance/ 

[5]“Function Overloading in C++,” GeeksforGeeks, Mar. 16, 2023. https://www.geeksforgeeks.org/function-overloading-c/ 

[6]R. S, “Function Overriding in C++: A Comprehensive Guide,” Simplilearn.com, Jul. 27, 2023. https://www.simplilearn.com/tutorials/cpp-tutorial/function-overriding-in-cpp (accessed Dec. 23, 2023).
