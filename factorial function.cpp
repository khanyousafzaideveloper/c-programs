#include <iostream>
using namespace std;
int factorial(int x);
int main()
{ 
 int num;
 cout << "Write a number to find its factorial: " <<endl;
 factorial(num);
	
}
int factorial(int x)
{
	int fac=1;
	if(x<0)
	{
		cout << "No factorial" <<endl;
	}
	else
	cin >> x;
	for(x; x>=1; x--)
	{
		fac*=x;
		
	}
	cout << fac;
}

