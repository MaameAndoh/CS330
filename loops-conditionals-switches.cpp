#include <iostream>
using namespace std;

int main()
{
    //Create age variables
    int firstAge = 13;
    int secAge = 38;

    //A one-conditional if-else statement
    if (firstAge < 18) {
        cout << "You are a child" <<endl;
    } else {
        cout << "You are an adult" <<endl;
    }

    //Multiconditional if/else if/else statement
    if (firstAge > 12 && firstAge < 18) {
        cout << "You are a teenager " <<endl;
    } else {
        cout << "You are not a teenager" <<endl;
    }

    //if/else if/else statement
    if (secAge < 18 ) {
        cout << "You are a child " <<endl;
    } else if (secAge < 29) {
        cout << "You are a young adult" <<endl;
    } else if (secAge < 50) {
        cout << "You are middle-aged" <<endl;
    } else {
        cout << "You are elderly" <<endl;
    }

    //Weather variables 
    string weather = "Raining";
    int temperature = 80;

    //Example of short-circut logic 
    if (temperature < 40 && weather == "Sunny") {
        cout << "It is not a good day to go to the beach" << endl;} 


    int number = -1;

    switch (number) {
        case -1: cout << "This is -1" << endl; break;
        case 0: cout << "This is 0" << endl; break;
        case 1: cout << "This is 1" << endl; break;
        default : cout << "Its a different number"<<endl;
    }
    return 0;
}