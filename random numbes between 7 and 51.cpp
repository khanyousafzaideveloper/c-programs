#include <iostream>
#include <cstdlib>
using namespace std;
void numbers();
int main()
{
	cout <<"The numbers between 7 and 51 are :"<<endl;
	numbers();
}
void numbers()
{
	for(int count=1; count<=100; count++)
	{
		cout << 7+rand()%(51-7+1)<<"\t";
		if(count%10==0)
		{
			cout <<endl;
		}
	}
	
}
