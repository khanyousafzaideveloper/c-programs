#include<iostream>
using namespace std;
int main()
{
	const int districts=4;
	const int months =3;
	int d, m;
	double sales [districts][months];  //two dimensional arrays
	for(d=0; d<districts; d++)
	for(m=0; m<months; m++)
	{
		cout << "Enter sales for districts: " << d+1 ;
		cout << ", month " << m+1 <<" :";
		cin >> sales[d][m]; // put number in array
	}
	for(d=0; d<districts; d++)
	for(m=0; m<months; m++)
	{
		cout << sales[d][m] << "\t" ; 
	}
} 
