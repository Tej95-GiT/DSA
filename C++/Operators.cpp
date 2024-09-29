#include <iostream>
using namespace std;
int main() {
    /* Operators */

    // Arithmetic Operators + - * / % ++ -- 
    cout << "Airthmatic Operators \n" << endl;
    int a = 90, b = 10;
    int c = 50;
    int d = 2;
    int sum = a + b;
    double f = 5;

    // cout << sum << endl;

    cout << "Sum of a + b = " << (a + b) << endl;                       // Addition is the sum of two numbers
    cout << "Difference of a - b = " << (a-b) << endl;                  // Subtraction is the difference of two numbers 
    cout << "Product of sum * c = " << (sum*c) << endl;                 // Multiplication is the product of two numbers 
    cout << "Division of a /d = " << (a/d) << endl;                     // Division is the quotient after division of two numbers
    cout << "Modulus of b % d = " << (b%d) << endl;                     // Modulus is the remainder after division of two numbers
    cout << "Remainder of c % b = " << (c%b) << endl;                   // Remainder is the remainder after division of two numbers

    cout << (f / (double)2) << endl; 
    cout << (13 % 2) << endl; 


    // Relational Operators ( < > <= >= == != ) : relational operators means to compare two values and returns a boolean value 
    cout << "\n Relational Operators \n" << endl;

    cout << (4 < 6) << endl;                    // Returns 0 if false and 1 if true, true if 4 is less than 6 else false
    cout << (6 > 8) << endl;                    // Returns 0 if false and 1 if true, true if 6 is greater than 8 else false
    cout << (5 <= 5) << endl;                   // Returns 0 if false and 1 if true, true if 5 is less than or equal to 5 else false
    cout << (7 >= 9) << endl;                   // Returns 0 if false and 1 if true, true if 7 is greater than or equal to 9 else false
    cout << (2 == 2) << endl;                   // Returns 0 if false and 1 if true, true if 2 is equal to 2 else false
    cout << (3 != 3) << endl;                   // Returns 0 if false and 1 if true, true if 3 is not equal to 3 else false
    cout << (4 != 5) << endl;                   // Returns 0 if false and 1 if true, true if 4 is not equal to 5 else false


    // Logical Operators ( && || ! ) : logical operators means to perform logical operations on two values and returns a boolean value 
    cout << "\n Logical Operators \n" << endl;          // OR, AND, NOT

    cout << (7 > 6 || 7 < 5) << endl;                  // Returns 0 if false and 1 if true, true if 7 is greater than 6 or 7 is greater than 5 else false
    cout << (9 > 3 && 2 < 5) << endl;                  // Returns 0 if false and 1 if true, true if 9 is greater than 3 and 2 is less than 5 else false
    cout << !(1 > 0) << endl;                          // Returns 0 if false and 1 if true, true if 1 is greater than 0 else false

    /*      OR ||                                         And && 

        true || true = true                                true && true = true
        true || false = true                              true && false = false
        false || true = true                              false && true = false 
        false || false = false                            false && false = false

    */

   // Unary Operators ( ++ -- ) : unary operators means to perform operations on a single value and returns a single value
   cout << "\n Unary Operators \n" << endl;          // ++x, --x, x++, x--

    // ++ : increment operator 
    // a++ : a = a + 1
    // a++ - first increment and then update 
    int a1 = 10;
    int b1 = a1++;
    cout << "b = " << b1 << endl;
    cout << "a = " << a1 << endl;

    // ++a - first update and then increment
    int x = 10;
    int y = ++x;
    cout << "y = " << y << endl;
    cout << "x = " << x << endl;

    // -- : decrement operator
    // a-- : a = a - 1
    // a-- - first decrement and then update
    int a2 = 10;
    int b2 = a2--;
    cout << "b = " << b2 << endl;
    cout << "a = " << a2 << endl;

    // --a - first update and then decrement
    int x1 = 10;
    int y1 = --x1;
    cout << "y = " << y1 << endl;
    cout << "x = " << x1 << endl;

    return 0;
}