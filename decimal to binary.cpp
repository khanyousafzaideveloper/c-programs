#include <iostream>
using namespace std;
int main()
{
	int a[10], num, i;
	cout <<"Write  a  decimal number ";
	cin >>num;
	for(i=0; i<10; i++)
	{
		a[i]=num%2;
		num=num/2;
	}
	cout <<" The number in Binary is: " ;
	for(i=i-1; i>=0; i--)
	{
	    cout << a[i];
	}
}
