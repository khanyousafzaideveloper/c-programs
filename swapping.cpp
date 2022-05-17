#include <iostream>
using namespace std;
int main()
{
	int variable1, variable2;
	cout << "Enter value of variable 1 "<< endl;
	cin >> variable1;
	
	cout << "Enter value of variable 2 "<< endl;
	cin >> variable2;
	  
	cout << "The variables are " << variable1  << " and "<< variable2 << endl;
	int temp=0;
	temp=variable1;
	variable1=variable2;
	variable2=temp;
	cout << "the variable with swaped values are " << variable1 <<" and "<< variable2 << endl; 
}
