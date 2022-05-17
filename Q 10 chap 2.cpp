#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float num1, num2, num3, num4, num5;
	int x;
	cout << "Enter 5 decimal numbers:"<< endl;
	cin >> num1>>num2>>num3>>num4>>num5;
	cout << "Average of entered numbers: "<<endl;  
	cout << ( num1+ num2+ num3+ num4+ num5 )/5<<endl;
	
	cout << "Average to the nearest integer:" << endl; 
	x= ( num1+ num2+ num3+ num4+ num5)/5;
	cout << round (x);
}
