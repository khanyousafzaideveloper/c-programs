#include <iostream>
using namespace std;
int main()
{
	float m, n, x, y, z;
	cout <<"Enter 5 decimal numbers: " << endl;
	cout <<"m="<<endl;
	cin >>  m; 
	cout << "n="<<endl;
	cin >> n;
	cout <<"x="<<endl;
	cin>>x;
	cout << "y="<<endl;
	cin>>y;
	cout << "z="<<endl;
	cin>> z; 
	
	 
	int a=m, b=n, c=x, d=y, e=z; 
	cout << "Numbers as an integer: " << "m=" << a << "  n=" << b << "  x=" << c << "  y=" << d<< "  z=" <<e << endl;
	cout << "sum of 5 integers numbers:" << "m+n+x+y+z=" << a+b+c+d+e << endl;
	cout << "Average of 5 integers:" <<  "m+n+x+y+z/5=" <<   (a+b+c+d+e)/5 <<endl;
}
