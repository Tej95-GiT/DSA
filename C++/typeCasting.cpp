/* Type Casting*/
//  Casting is the process of converting one data type to another data type
//  C++ provides two types of type casting
//  1. Implicit type casting    [Casting is done automatically] 
//  2. Explicit type casting    [Casting is done manually]


//  Implicit type casting
#include <iostream>
using namespace std;
int main() {

    /* Implicit type casting */ // is done automatically when we assign a value to a variable or a data type
    // int to float
    int a = 10;
    float b = a;
    cout << b << endl;
    
    //  ASCII value
    char grade = 'A';
    int value = grade;
    cout << value << endl;

    // int to char
    int i = 69;
    char ch = i;
    cout << ch << endl;

    /* Explicit type casting */ // Bigger data type to smaller data type
    // double to int
    double d = 100.99;
    int c = (int)d;             // we mention new data type in ()
    cout << c << endl;

    // float to int
    float f = 99.09;
    int e = (int)f;
    cout << e << endl;

    return 0;
}