#include <iostream>
using namespace std;
bool isCapital(char ch);
int main()
{
	char alpha;
	cout <<"Write a letter : " << endl;
	cin >> alpha;
	cout << isCapital(alpha);
}
bool isCapital(char ch)
{
if (isupper(ch))
return true;
else
return false;
}
