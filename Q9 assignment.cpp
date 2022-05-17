Question 9:
Write a program that prompts the user to enter five test scores and then prints the average test score. (Assume that the test scores are decimal numbers.)

#include <iostream>
using namespace std;
int main()
{
	float test1, test2, test3, test4, test5, average;
	
	cout <<"Enter 1st test score:" << endl;
	cin >> test1;
	cout <<"Enter 2nd test score:" << endl;
	cin >> test2; 
	cout <<"Enter 3rd test score:" << endl;
	cin >> test3;
	cout <<"Enter 4th test score:" << endl;
	cin >> test4;
	cout <<"Enter 5th test score:" << endl;
	cin >> test5;
	
     cout << "Average:" << ( test1 +test2 + test3 + test4 + test5)/ 5;
	
}
