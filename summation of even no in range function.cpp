#include <iostream>
using namespace std;
int Sum_even(int num1, int num2);
int main()
{
	int num1, num2;
	cout << "Enter the range in which you want to find the summation of even numbers: "<<endl;
	cin>> num1 >> num2;
	Sum_even(num1, num2);
}
int Sum_even(int N, int M)
{
	int sum;
	cout << "The even numbers are:"<< endl;
    for(N; N<=M; N++)
    {
    	if(N%2==0)
		{
			cout << N << endl;
			sum+=N;
		}
    }
		cout << "The sum of even numbers is: "<< sum <<endl;
}

