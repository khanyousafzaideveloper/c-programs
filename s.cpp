#include <iostream>
using namespace std;
int main()
{
	int sum, counter=1, num;
	cin>> num;
	if((num>999) && (num<10000))
	{
		for(counter; counter<=4; counter++)
		{
			if(num%2!=0)
			sum=sum+num;
			
			num=num/10;
		}
		
	}
	else
	cout <<"Wrong input "<<endl;
	
	cout <<"the sum of odd numbers is : " <<sum <<endl;
}
