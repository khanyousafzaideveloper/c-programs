//• Lab Problem-1
//Write a C++ program to find the summation of the following series (using for statement)
//S=1+ 4 + 9+ 16+………+(n*n)
// THIS PROGRAME IS ON "do...while" LOOP 

#include <iostream>
using namespace std;
int main()
{//Variable declaration
	int sum, limit, n=1;
	cout <<"Enter limit of the series: ";
	cin>> limit;
	
	do
	{
		sum+=n*n;
	    n++;
	}
	while(n<=limit);
	cout << "sum =" <<sum << endl;
}
