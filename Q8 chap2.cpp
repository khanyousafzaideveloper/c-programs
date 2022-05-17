#include <iostream>
using namespace std;
int main()
{
	int SECRET=11, num1, num2, newNum;
	string name;
	double Rate, hoursWorked, wages;
	
	
	//cout << "Enter two numbers:" <<endl;
	//cout << "First number:";
	//cin >> num1 ;
	//cout << "Second number:";
	//cin >> num2 ;
	//cout << "value of num1 =" << num1 << endl;
	//cout << "value of num2 =" << num2 << endl;
	//newNum = (num1*2) +num2;
	//cout << "newNum= " << newNum << endl;
	//newNum= newNum +SECRET;
	//cout <<"newNum + SECRET =" << newNum << endl;
	cout << " Name :" << endl;
	cin >> name ;
	cout <<"pay rate:"<< Rate<<endl;
	//name=name;
	//cout << "Enter a decimal number 0 to 70"<< endl;
	cout << "pay rate" << endl;
	cin >> Rate; 
	cout << "Hours Worked"<< endl;
	cin>> hoursWorked;
	wages = hoursWorked*Rate;
	cout <<"salary" << endl;
	cin>> wages;
	cout << "Name: "<< name <<endl;
	cout <<"Rate: " << Rate << endl;
	cout << "Hours Worked: " << hoursWorked<<endl;
	cout << "salary: " << wages  << endl;
	 
	
	
}
