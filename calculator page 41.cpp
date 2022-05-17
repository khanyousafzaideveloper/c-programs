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
	
	
	if(op== '+')
	{
		cout << a << "+"<< b << " = "<< a + b << endl;
	}
	else if(op=='-')
	{
		cout << a <<"-" << b << " = "<< a-b << endl;
	}
	else if(op=='*')
	{
		cout << a<< "*"<< b<< " = "<< a*b<< endl;
	}
	else if(op=='/')
	{
		cout << a<< "/"<< b << " = "<< a/b <<endl;
	}
	else
	cout << "Invalide operator was intered" <<endl;
}

