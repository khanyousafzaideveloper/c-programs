#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a[10], n;
	cin >> n;
	for (int i=0; i<10; i++)
	{
		a[i] = n%2;
		n=n/2;
	}
	cout << 15611/2;
	cout <<"Binary ofgiven number: ";
	for(int i=i-1; i>=0; i--)
	{
		cout << a[i];
	}
}

