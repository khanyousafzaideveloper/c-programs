#include <iostream>
#include <cstdlib>
using namespace std;
void numbers();
int main()
{
	cout <<"Write the range you want to find hundred random variable :"<<endl;
	numbers();
}
void numbers()
{
	int x, y, r;
	cin>> x >> y;
	cout << "How much numbers you want to Print "<<endl;
	cin >> r; 
	cout << r <<" random numbers between " << x <<" and " << y <<" are : " <<endl;
	for(int count=1; count<=r; count++)
	{
				
		cout << x+rand()%(y-x+1)<<"\t";
		if(count%10==0)
		{
			cout <<endl;
		}
	}
	
}
