#include <iostream>
using namespace std;
int main()
{
	int a;
	cout <<"Enter first number: ";
	cin>> a;
	cout << endl;
	
	char op;
	cout << "Enter operator: ";
	cin>> op;
	cout << endl;
	
	int b;
	cout << "Enter second number: ";
	cin>>b;
	cout << endl;
	
	switch(op)
	{
		
	
	case'+':
		
		cout << a << "+"<< b << " = "<< a + b << endl;
	break;
	
	case '-':
		cout << a << "-"<< b << " = "<< a - b << endl;
	break;
	
	case'*':
		cout << a << "*"<< b << " = "<< a * b << endl;
	break;
		
	case'/':
		cout << a << "/"<< b << " = "<< a / b << endl;
	break;
}}
	
