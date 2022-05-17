#include <iostream>
using namespace std;
int main()
{
	int i, newnum, sum, avg;
	
	for ( i; i<=5; i+=1)
    { 
      cin>> newnum;
	  sum+= newnum;	
	}
	avg=sum/5; 
    cout << "The sum of numbers: " << sum << endl;
    cout << "The average of numbers: " << avg << endl;
	

	

    
}
