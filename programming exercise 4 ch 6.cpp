#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double PI=3.1419;
	double r;
	cout << sqrt(PI) << endl;
	cout << "Enter radius of a sphere : " << endl;
	cin >> r;
	cout << "surface                   area of sphere : ";
	cout << 4*PI*r*r<<endl;
	cout << "Volume of sphere : ";
	cout << (4/3)*PI*r*r*r << endl;
	 
} 
