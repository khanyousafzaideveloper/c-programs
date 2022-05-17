//Lab Problem-2
//Write a C++ program to print all numbers (that are multiple of 3) from 1 to 100 every 6
//numbers on a line.
#include <iostream>
using namespace std;
int main()
{        // Variable declaration
		int n=1;
do{
	if(n%3==0)
	{
		cout <<n << ",  ";	
	}

	if(n%18==0)
	{
		cout <<endl;	
	}
}
while(n<100);
}
