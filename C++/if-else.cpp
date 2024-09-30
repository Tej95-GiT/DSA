/* Conditional Statements */
/* if-else : if and else statements in C++ language are used to perform different tasks based on a condition that is true or false. */
/* Syntax : if (condition) { statement(s) } else { statement(s) } */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : " ;
    cin >> n;

    if (n >= 0) {
        cout << "The number is positive : " << n << endl;
        if (n % 2 == 0){
            cout << "The number is Even" << endl;
        }else{
            cout << "The number is Odd" << endl;
        }
    } else {
        cout << "The number is negative : " << n << endl;
    }
    return 0;
}