#include <iostream>
using namespace std;
int gcd(int , int);
int main()
{
	int x, y;
	cout << "To find the greatest common divisor, input 2 numbers : "<<endl;
	cin >> x >> y;
	gcd(x, y);
	
}
int gcd(int n1, int n2)
{
	int gcd;
	
	if(n1>n2)
	{
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	
	for (int i; i<n2; i++)
	{
			
    if(n1%i==0 && n2%i==0)
	
	 gcd = i;
	}
	
	cout << "Greatest common divisor is : " << gcd <<endl; 
	
}
