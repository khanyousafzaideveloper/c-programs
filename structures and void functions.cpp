#include <iostream>
#include<string>
using namespace std;

	struct studentType
	{
		string name;
		int rollno;
		int marks[3];
	};
	void Inputdata(studentType& s)
	{
		cout << "write name, rollno and marks in three subjects ";
		cin >> s.name >> s.rollno;
			cin >> s.marks[0];
			cin >> s.marks[1];
			cin >> s.marks[2];
		
	 }
	 void display(studentType s)
	 {
	 	cout << "Name: "<< s.name<<endl<< " rollno: " << s.rollno<< endl << " marks: " <<endl;
	 	for(int i; i<3; i++)
	 	{
	 		cout << s.marks[i] <<"\t";
		 }
	 	
	  } 
	 int main()
	 {
	 	studentType x;
	 	Inputdata(x);
	 	display(x);
	 }
	
