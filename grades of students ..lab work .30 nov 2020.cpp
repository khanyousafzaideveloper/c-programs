#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "ENTER MARKS OF THE STUDENT:";
	cin>> marks;
	if (marks>85)
	{
		cout << "GRADE A";
	}
	else if ((marks>=75)&&(marks<=85))
	{
		cout << "GRADE B";
	}
	else if((marks>=65)&&marks<75)
	{
		cout<< "GRADE C";
	}
	else if((marks>=50)&&(marks<65))
	{
		cout << "GRADE D" ;
	}
	else
	{
		cout << "YOU ARE DROPED OUT"; 
	}

}
