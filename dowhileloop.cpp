#include <iostream>
using namespace std;
int main()
{
    int diviser;
    int dividend;
    char ch;

    do
    {
        cout <<"Enter the dividend "; cin >> dividend; cout<< endl;
        cout << "Enter the diviser ";cin >> diviser; cout<< endl;
        cout << "Quotient is "<< dividend/diviser << endl;
        cout << "Remainder is " << dividend % diviser <<endl;
        cout << "Do another (y/n)" <<endl; cin << ch; 
    }
    while( ch !='n' );
    return 0;
}