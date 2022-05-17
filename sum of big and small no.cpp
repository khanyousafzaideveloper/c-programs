#include <iostream>
using namespace std;
int lsd_msd(int);
int main()
{
	int x;
	cout <<"Enter the number: "<<endl;
	cin>>x;
		lsd_msd(x);
}
int lsd_msd(int num)
{
	int r;
	//cin>> num;
	r=num%10;
	while (num>=10)
	{
		num=num/10;
	}
	cout << "The first number is: " << num <<endl;
	cout << "The last number is: " << r <<endl;
	cout << "The sum of MSD and LSD is: "<< num + r <<endl;
}

