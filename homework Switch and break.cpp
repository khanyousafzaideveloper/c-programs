#include <iostream>
using namespace std;
int main()
{
	char num;
	cin >> num;
	cout << endl;
	switch (num)
	{
		case '1':
		cout << "You entered the number 1"<< endl;
		break;
		
		case '2':
		cout << "You entered the number 2"<< endl;
		break;
		
		case '3':
		cout << "You entered the number 3"<< endl;
		break;
		
		case '4':
		cout << "You entered the number 4"<< endl;
		break;
		
		case '5':
		cout << "You entered the number 5"<< endl;
		break;
		
		default :
			cout << "You entered the wrong number" << endl;
	 } 
	 cout << "Out of switch statemet "<< endl;
	 return 0;
	 } 
