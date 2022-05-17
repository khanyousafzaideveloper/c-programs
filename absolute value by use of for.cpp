#include <iostream>
using namespace std;
int main()
{
	int num, temp;
	cout << "Enter an integer : " <<endl;
	cin >> num;
	cout << endl;
	
	temp=num;
	if( num<0)
	num=-num;
	
	cout << "The absolute value of " << temp << " is: |" << temp << "| = " <<  num << endl; 
	
}

