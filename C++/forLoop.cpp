#include <iostream>
using namespace std;
int main() {

    /* For Loop : loop through the list of elements in the list and print them out in the output file
                    for (initialization; condition; updation/ incremental/decremental) {
                        statement(s); 
                    }
    */

   int n;
   int sum = 0;
   cout << "Enter number for count: ";
   cin >> n;
   for ( int i = 1; i <= n; i++) {
    sum += i; 
   }
   cout << "Sum of natural numbers from 1 to " << n << " is: " << sum << endl;
   cout << endl;


    // Even and Odd numbers from 1 to m and sum of it.

    int m;
    int oddSum = 0;
    int evenSum = 0;
    cout << "Enter the number wizard : ";
    cin >> m;
    
    for ( int i = 0; i <= m; i++) {
        if ( i%2 != 0 ) {
            cout << i << " ";           // Prints odd numbers
            oddSum += i;
        } /*else {
            cout << i << " ";           // Prints even numbers
            evenSum = i++;
        }   */
    }

    cout << endl << "Sum of odd numbers: " << oddSum << endl;
    cout << "Sum of Even numbers: " << evenSum << endl;
    cout << endl;

    /*  while loop conversion */

    //int n;
    //int evenSum = 0;
    int i = 0;
    while (i <= n) {
        if ( i%2 == 0) {
            evenSum += i;
        }
        i++;
        }
    cout << "Sum of even numbers: " << evenSum << " of " << n << endl;



    return 0;
}