#include<iostream>
using namespace std;
double larger(double x, double y)
{
double max;
if (x >= y)
max = x;
else
max = y;
return max;
}
int main()
{
	double a, b, c;
	cout <<"Enter two numbers: ";
	cin>> a;
	cout <<endl;
	cin>> b;
	c = larger(a, b);
	cout << "The larger number is: "<< c << endl;
	
}
