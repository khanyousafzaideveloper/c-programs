#include <iostream>
using namespace std;
int fibonacci(int prev1, int prev2);
int main()
{
	int x, y;
	cout << "fibonacci series: "<<endl;
	cout << "Enter first two fibonacci numbers: "<<endl;
	cin >> x >> y;
	fibonacci(x, y);
	
}
int fibonacci(int prev1, int prev2)
{
	int nthfib, counter, current;
	
	cout << "Enter the nth finonacci: ";
	cin >> nthfib;
	if(nthfib==1)
	{
		current=prev1;
	 } 
	 if(nthfib==2)
	 {
	 	current=prev2;
	}
	else
	{
	cout  << prev1 <<","<<prev2 <<",";
	for(counter=3; counter <=nthfib; counter++)
	{
		current = prev1+prev2;
	    prev1=prev2;
	    prev2= current;
	    cout << current << ", ";
	}
	cout << endl;
	}
	cout << "The nth fibonacci series is: "<< current <<endl;  
}


