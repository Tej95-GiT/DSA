#include <iostream>
using namespace std;

int main () {

    /* Patterns : C++ provides various types of patterns for different purposes like number patterns, character patterns, etc.  */
    
    // Square Pattern

    int n;
    cout << "Enter the number for Square Pattern : ";
    cin >> n;

    for ( int i = 0; i < n; i++) {                 //  Outer Loop
        for ( int j = 0; j <= n - 1; j++) {             //  Inner Loop
            cout << j << " ";                       //  Printing the number or we can print any character (e.g. *, #, @, etc.)
        }
        cout << endl;
    }
    cout << endl;

    /*  for ABCD [ASCII value]
        for ( int i = o; i < n; i++) {
            char ch = 'A';
            for ( int j = 0; j < n; j++) {
                cout << ch << " ";
                ch++;       // or ch = ch + 1   // Incrementing the ASCII value [ 'A' + 1 = 'B' / 65 + 1 = 66 ]
            }
        }
    */

   // Square Pattern for continuous numbers

    char ch = 'A';
   for ( int i = 0; i < n; i++) {                 //  Outer Loop   
        for ( int j = 0; j < n; j++) {             //  Inner Loop
            cout << ch << " ";
            ch++; 
        }
        cout << endl;
   }
   cout << endl;


    // Triangle Pattern

    char ch1 = 'A';
    for ( int i = 0; i < n; i++) {

        for ( int j = 0; j < i+1; j++) {
            cout << "* ";                            // for * pattern
            //cout << (i+1) << " ";                   // for number pattern
            //cout << (j+1) << " ";                   // for number pattern
            //cout << ch1 << " ";                      // for character pattern
        }
        cout << endl;
        ch1++;                                       // for character increment
    }
    cout << endl;


    // Reverse Triangle Pattern

    for ( int i = n; i > 0; i--) {
        for ( int j = i; j > 0; j--) {
            //cout << i << " ";
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;


    // Floyd's Triangle Pattern

    int num = 1;
    for ( int i = 0; i < n; i++) {
        for ( int j = i+1; j > 0; j--) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;


    // Invert Triangle Pattern

    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < i+1; j++) {
            cout << " " << " ";
        }
        for (int j = 0; j < n-i; j++) {
            cout << (i+1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Charcter Pattern
    char ch2 = 'A';
    for ( int i = 0; i < n; i++) {
        for( int j = 0; j < i+1; j++) {
            cout << " " ;
        }
        for ( int j = 0; j < n-i; j++) {
            cout << ch2 << " ";
        }
        ch2++;
        cout << endl;
    }
    cout << endl;

    // Pyramid Pattern

    for ( int i = 0; i < n; i++) {
        // Spaces
        for ( int j = 0; j < n-i-1; j++) {
            cout << " " << " " ;
        }

        // Numbers 1 
       for ( int j = 1; j <= i+1; j++) {
        cout << j << " " ;
       }

       // Numbers 2
       for ( int j = i; j > 0; j--) {
        cout << j << " " ;
       }
       cout << endl;
    }
    cout << endl;


    // Hallow Diamond Pattern

    //top
    for ( int i = 0; i < n; i++) {
        for ( int j = 0; j < n-i-1; j++) {
            cout << " " << " ";
        }
        
        cout << "*";
        
        if ( i != 0) {
            //Spaces
            for ( int j = 0; j < 2*i-1; j++ ){
                cout << " " << " ";
            }
        }
        cout << "*"; 
        cout << endl;
    }

    // bottom

    for ( int i = 0; i < n; i++) {
        //Spcaes

        for ( int j = 0; j < i+1; j++ ) {
            cout << " " << " ";
        }

        cout << "*"; 

        if( i != n-1 ) {
            //Spaces
            for ( int j = 0; j < 2*(n-1)-5; j++ ) {
                cout << " " << " ";
            }
            cout << "*"; 
        }
        cout << endl;
    }

    


    return 0;
}