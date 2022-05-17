#include<iostream>
using namespace std;
int main()
{
	int count, sum;
	for(count=1; count<=100; count++)
	{
		cout << count <<"\t";
	    sum+=count;
	}
	
	cout <<endl;
	cout << "The sum of numbers is: " << sum <<endl;
}

