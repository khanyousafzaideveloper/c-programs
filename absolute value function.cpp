#include <iostream>
using namespace std;

int abs(int number)
{
if (number < 0)
number = -number;
return number;
}
int main()
{
	int a, absolute;
	cout <<"Enter any number to get its absolute value: ";
	
	while(cin)
	{
	cin>>a;	
	cout <<endl;
	absolute=abs(a);
	cout << "The absolute value of the number is: "<< absolute<< endl;
}
}
