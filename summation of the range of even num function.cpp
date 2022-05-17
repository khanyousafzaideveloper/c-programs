#include <iostream>
using namespace std;
int Sum_even(int num1, int num2);
int main()
{
	int x, y;
	Sum_even(23, 33);
	cout <<  sum;
}
int Sum_even(int num1, int num2)
{
	int sum;
	cout << "Enter the range in which you want to find the summation of even numbers: "<<endl;
	cin >> num1 >> num2;
	cout << "The even numbers between "<< num1<< " and " << num2 << "are:" <<endl;
    for(num1; num1<=num2; num1++)
    {
    	if(num1%2==0)
		{
			cout << num1 << "\t" << endl;
			sum+=num1;
		}
		
}
	//cout << "The sum of even numbers is: "<< sum <<endl;	
}

