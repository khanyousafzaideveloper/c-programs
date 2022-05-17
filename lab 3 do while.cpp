//Lab Problem-3
//Write a C++ program to find the summation of even digits for any read number from the
//keyboard (the number could be of any length) 
#include <iostream>
using namespace std;
int main()
{      // Variable declaration
	int  num, sum, r;
	cout << "Enter the number to find the sum of even digits:" ;
	cin>> num;
	
	do{
		r=(num%10);
		if(r%2==0)
		sum+=r;     // if r is even then adding r to sum.
		num=num/10; // removing the rightmost digit 
	}
	while( num!=0);
	
	cout << "Sum of even numbers:  " << sum;
}
