#include  <iostream>
using namespace std;
int main()
{
	int x=4, y;
	
	y= 2 + (++x);
	cout << "x= " << x <<endl;
	cout << "y= " << y << endl;
	
	int a=4, b;
	b= 2 + (a++); 
	cout << "a= " << a << endl;
	cout << "b= "  << b << endl;
	
}
