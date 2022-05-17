#include <iostream>
using namespace std;
int main()
{
	int num, sum, r;
	cout << "Enter the number to find the sum of even digits:" ;
	cin>> num;
	while( num!=0)
	{
		r= num%10;
		if( r%2!=0)
		
		sum += r; // if r is even, then adding r to sum
		
		num= num /10; // removing rightmost digit
		
	}
		cout << "Sum of even numbers:  " << sum;
	
	}
