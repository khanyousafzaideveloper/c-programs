#include <iostream>
using namespace std;
int main()
{
    int Ftemp;
    cout << "Enter temperature in fahrenheit: "; cin >> Ftemp;
    cout <<endl;

    int Ctemp=(Ftemp-32) *5/9;

    cout << "The equivalent tempearture in Celsius is: " << Ctemp << endl; 
}