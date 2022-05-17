#include <iostream>
using namespace std;
 
main() {
   int a = 21;
   int c ;
 
   // Value of a will not be increased before assignment.
   c = a++;   
   cout << "Line 1 - Value of a++ is :" << c << endl ;
 
   // After expression value of a is increased
   cout << "Line 2 - Value of a is :" << a << endl ;
 
   // Value of a will be increased before assignment.
   c = ++a;  
   cout << "Line 3 - Value of ++a is  :" << c << endl ;
   
   
   int x = 21;
   int y ;
 
   // Value of a will not be increased before assignment.
   y = x--;   
   cout << "\nLine 1 - Value of x++ is :" << y << endl ;
 
   // After expression value of x is increased
   cout << "Line 2 - Value of x is :" << x << endl ;
 
   // Value of a will be increased before assignment.
   y = --x;  
   cout << "Line 3 - Value of ++x is  :" << y << endl ;
   return 0;
}

