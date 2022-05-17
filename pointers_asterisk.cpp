#include <iostream>
using namespace std;
int main()
{
   int x, y;
   int *ptr;
   ptr=&x;
   *ptr=443;

   y=*ptr;



   cout << x << endl;
   cout << y << endl;
}