/* Task:
Write a program that declares variables for the following real-world data. You must choose the correct type from:

    int

    float

    double

    char

    std::string

    bool

Then, print all the values in a clear sentence. */

/*
Variables to declare:
Description                         Variable Name   Expected Value
Number of siblings	                siblings	    3
Average temperature (in Celsius)	temperature	    36.65
Your middle initial	                middleInitial	'J'
Whether you passed the exam	        passedExam	    true
Your full name	                    fullName	    "John Jane Doe"
Pi (approximate)	                pi	            3.141592653589793
*/

/*
John Jane Doe has 3 siblings.
The average temperature is 36.65 degrees Celsius.
Their middle initial is J.
They passed the exam: true.
Pi is approximately 3.141592653589793.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // TODO: Initialize the siblings variable
    int siblings =3;
    // TODO: Initialize the temperature variable
    float temperature = 36.65;
    // TODO: Initialize the middleInitial variable
    char middleInitial = 'J';
    // TODO: Initialize the passedExam variable
    bool passedExam = true;
    // TODO: Initialize the fullName variable
    std::string fullName = "John Jane Doe";
    // TODO: Initialize the pi variable
    double pi = 3.141592653589793;
    // TODO: Print the sentences
    cout << fullName << " has " << siblings << "siblings" << endl;
    cout << "The average temperature is " << temperature << " degrees Celsius." << endl;
    cout << "Their middle initial is " << middleInitial << endl;
    cout << "They passed the exam: " << std::boolalpha << passedExam << endl;
    cout << "Pi is approximately " << pi << endl;

    return 0;
}