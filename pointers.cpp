#include <iostream>
using namespace std;
int main()
{
    int x, y;
    x=19;
    y=32;
    cout << &x <<endl;
    cout << &y << endl;

    int *ptr1, *ptr2;
    ptr1=&x;
    ptr2=&y;

    cout << "ptr1 : 5"<< ptr1 <<endl;
    cout << "ptr2 : "<< ptr2 <<endl;


    // pointers can be used to access the value of variable. 
    cout << "x :" << *ptr1 << endl;
    cout << "y :" << *ptr2 << endl;

}