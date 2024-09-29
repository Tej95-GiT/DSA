#include <iostream>
using namespace std;
int main() {
    /* Input and Output streams */
    int age;
    cout << "Enter your or your granny's age: ";    // cout : standard output stream (terminal) Global Objects     << : insertion operator , overloading operator
    cin >> age;                                     // cin : standard input stream (terminal)   Global Objects    >> : extraction operator, overloading operator
                                                    
    cout << "Entered age is " << age << endl;
    return 0;
}