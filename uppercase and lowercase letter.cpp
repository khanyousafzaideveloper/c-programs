#include <iostream>
using namespace std;
int main()
{
	char letter;
	int num;
	cout << "Enter a letter to find that it is Uppercase or Lowercase.\n" << endl;

	while(cin)
	{
			cin>> letter;
	      
	if(letter>='A'&& letter<='Z')
	{
		cout << letter << ":  This is uppercase letter.\n"<< endl;
	}
	else if(letter>='a'&& letter<='z')
	{
		cout <<  letter << ":  This is lowercase letter.\n"<< endl;
	}
	
	else
	cout <<"Invalid input.";
	
}
}
