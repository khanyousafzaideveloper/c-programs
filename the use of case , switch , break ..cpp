#include <iostream>
using namespace std;
int main()
  
  {
	char grade;
	cout << "Enter your grade:" << endl;
	cin >> grade;
	switch (grade)
	 
	{
	case 'A':
	cout <<"Your grade is A" << endl;
	break;
	
	case 'B':
	cout<< "Your grade is B" << endl;
	break;
	
	case'C':
	cout << "Your grade is C" << endl;
	
	case 'F':
	cout << "Your grade is D"<< endl;
	
	default :
		cout << "" << endl;
}
    cout << "Out of switch statement.";  
	return 0;
}
