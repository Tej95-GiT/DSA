#include <iostream>
using namespace std;
int main () {

    /*
    * While Loop : loop through the list of elements in the list and print them out in the output file
    */
 
   int count = 0;

   while( count <= 10) {

    cout << count << " " ;
    count++;                                // Increment count by 1 each time the loop runs 
   }
    cout << endl;

   // numbers from 0 to n

   int n;
   int countt = 0;
   cout << "Enter number for count: ";
   cin >> n;

   while ( countt <= n) {
    cout << countt << ",";
    countt++;
   } 

   cout << endl;

   // Sum of numbers till s

   int s = 10;
   int sum = 0;
   int i = 1;
   while ( i <= s) {
    sum += i;
    i++;
   }
   cout << "Sum of numbers till " << s << " is: " << sum << endl;
 
   return 0;
}