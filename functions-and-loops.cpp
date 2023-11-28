#include <iostream>
#include <string>
using namespace std;

int loops(int sum){
    //illustrates the different types of loops in C++

    //increments the variable sum (the value of sum is 5 before the loop begins)
    for (int i = 0; i < 5; i++) {
        sum += i;
    }

    //prints all the numbers between 1 and 8
    int i = 1;
    while (i<9) {
        cout << i << endl;
        i++;
    }

    cout << endl; 

    double j = 20;
    //the do/while loop halves the quotient as long as it's greater than 2
    do {
        j = j/2;
        cout << j << endl;
    } while (j>2);

    cout << endl;

    return sum;

    cout << endl;

}

double multiply(double num1, double num2) {
    //takes two numbers, multiplies, returns output
    return num1*num2;
}

int recursion (int factNum) {
    //calculates and returns the factorial of 5
    int res;
    if (factNum >= 1) {
        res = factNum * recursion(factNum-1);
    }
    return res;

    /* 5 * 4 * 3 * 2 * 1 = 120
    */
}

std::pair<string,string> splitString(string str) {
    //take a string, split into two strings, return both
    string split1 = str.substr(0, 4);
    string split2 = str.substr(4, 3);
    return std::make_pair(split1, split2);
}

int comparePass(int x) {
    //test whether language is pass-by reference or pass-by-value
    x += 5;
    cout << "The variable x in the comparePass function: " << x << endl;

    //Use pointers to refer to and make changes to the original x variable in main
    int *px = &x;
    *px += 10;
    return *px;
}

//Main function
int main() {
    //calls the loop function and prints what returns from the for loop
    int num1 = 5;
    int result = loops(num1);
    cout << "The sum is " << result << endl;

    cout << endl;

    //calls and prints the value from the multiply function 
    double num2 = 7.3;
    double multResult = multiply(num1,num2);
    cout << "When we multiply " << num1 << " and "<< num2 << " we get: " <<multResult << endl;

    cout << endl;

    //calls the recursion function to perform a factorial operation on num1
    int recuResult = recursion(num1);
    cout << num1 << " factorial is "<< recuResult << endl;

    cout << endl;

    //calls the splitString function to split the string into two sections
    string str = "Goodbye";
    string str1, str2 = splitString(str);
    cout << "We can split " << str << " into " << str1 << " and " << str2 << endl;

    cout << endl;

    //demonstrates C++'s call by value/reference properties
    int x = 20;
    int changeX = comparePass(x);
    cout << "The variable x in the main: " << x << endl;
    cout << "The variable x using call by reference: " << changeX << endl;

    return 0;

}
