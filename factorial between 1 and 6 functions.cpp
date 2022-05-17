#include <iostream>
using namespace std;


	int factorial_of_number(int n1)
{
	int fact=1;
	for(int i=n1; i>0; i--)
	fact=fact*i;
	return fact;
}
int main()
{
	int num, factorial;
	cout << "Enter a number between 1 and 6 to find its factorial"<< endl;
	cin>>num;
	if( (num>=1)&&(num<=6) )
	{
		factorial=factorial_of_number(num);

	cout <<"Factorial of " << num << " is "<< factorial <<endl;
}	else
	cout <<"number is not between 1 and 6";
}
