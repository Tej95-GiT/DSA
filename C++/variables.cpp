#include <iostream>
using namespace std;
int main()  {
    
    // *Data Types - Primitive Types*

    // int : whole numbers, positive or negative, without decimals, e.g. 123 or -123, 2,147,483,647.            4 bytes

        int Age = 19;
        cout << "Age is " << Age << endl;

    // long : whole numbers, positive or negative, without decimals, e.g. 2,147,483,647 or -2,.147,48.3,6.47.   8 bytes

        long date = 29 / 9 / 2022;
        cout << "date is " << date << endl;

    // float : fractional numbers, positive or negative, with decimals, e.g. 3.1416 or -3.1416.                 4 bytes

        float PI = 3.14f;     // to make it float use f at the end of the number 
        cout << "PI is " << PI << endl;

    // double : fractional numbers, positive or negative, with decimals, e.g. 2.71828 or -2.71828.              8 bytes

        double PI2 = 3.14159;
        cout << "PI2 is " << PI2 << endl;

    // char : a single character, from 0 to 255.                                                                1 byte

        char Sex = 'F';
        cout << "Sex is " << Sex << endl;

    // bool : true or false.                                                                                    1 byte

        bool IsSafe = true;
        cout << "IsSafe is " << IsSafe << endl;

    // string : a sequence of characters.                                                                        1 byte

        string Name = "Lolita";
        cout << "Name is " << Name << endl;

    // sizeof : returns the size of a variable or a data type in bytes.

        cout << sizeof(Age) << endl;
        cout << sizeof(Sex) << endl;
        cout << sizeof(PI2) << endl;
    //    cout << "is " << Age << " years old" << endl;
    //    cout << "PI is " << PI << endl;

    cout << "Sir, today's date is " << date << ", and my name is " << Name << ". I am " << Age << " years old. " << "\n";
    cout << "The value of PI is " << PI << ", in exact " << PI2 << ". The size of Boolean is " << sizeof(IsSafe) << " bytes. value = " << IsSafe << "." << endl;

    return 0;
}