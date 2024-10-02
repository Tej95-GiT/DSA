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
 
   return 0;
}