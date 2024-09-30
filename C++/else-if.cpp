/*  Conditional Statements */
/*  if else if else statements in C++ language are used to perform different tasks based on a condition that is true or false. 
                    else if can be used multiple times */
                    /*  Syntax:
                    if (condition) {
                        statement(s);
                    } else if (condition) {
                        statement(s);
                    } else if (condition) {
                        statement(s);
                    } else {
                        statement(s);
                    }
                    */
#include <iostream>
using namespace std;
int main () {

    // Example of if-else if statement
    // Grades
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 101) { 
        cout << "Your grade is A!" << endl;
    }else if ( marks >= 80 && marks <= 90) {
        cout << "Your grade is B!" << endl;
    }else if ( marks >= 70 && marks <= 80) {
        cout << "Your grade is C!" << endl;
    }else if ( marks >= 60 && marks <=70) {
        cout << "Your grade is D!" << endl;
    }else if (marks >= 45 && marks <= 60) {
        cout << "Pass!" << endl;
    }else if (marks <= 45) {
        cout << "Fail!"<< endl;
    }else {
        cout << "Invalid Input!" << endl;
    }

    // Example : Uppercase / lowercase characters
    char ch;
    cout << "Enter a single Character/Letter: ";
    cin >> ch;

    if ( ch >= 65 && ch <= 90) {                                                // if ( ch >= 'a' and ch <= 'z' ) 
        cout << ch << " Letter is Uppercase." << endl;
    }
    else if (ch >= 97 && ch <= 122) {                                           // if ( ch >= 'A' and ch <= 'Z' ) 
        cout << ch << " Letter is Lowercase." << endl; 
    }else {
        cout << "Invalid Input! Please enter a single character." << endl;
    }

    /* Ternary Operator / Statement */

    cout << ( marks >= 45 ? "Your Passed!" : "Your Failed!" ) << endl;  /*      syntax = condition ? stt1 : stt2; */
    
    return 0;
}