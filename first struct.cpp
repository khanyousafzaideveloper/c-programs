#include <iostream>
#include <string>
using namespace std;
int main()
{
	struct student
	{
		int rollno;
		char grade;
		string name;
	};
	student student1;
	student student3 ={ 33, 'B', "Ali"};
	student student4 ={22, 'C', "Zubair"};
	student1.rollno=55;
	student1.grade='A';
	student1.name="Ahamd";
	
	student student2;
	student1.rollno=5;
	student1.grade='A';
	student1.name="Hamza";
	 
	 
	cout << "Roll number: " << student4.rollno << endl;
	cout << "Garde: " << student4.grade << endl;
	cout << "Name: " << student4.name << endl;
	
	
}

