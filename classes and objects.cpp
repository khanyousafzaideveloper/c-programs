#include <iostream>
using namespace std;

class student{    // The Class
	public:        // Access Specifiers
	int age;        // Attributes (int variable)
	string name;  // Attribute (string variable)
	void myfunc()      // method / function inside the class
	{
		cout << "HELLO WORLD ! " << endl;
	}
	int outside(int rollno); // 
};
//Method / Function definition outside the class 
int student :: outside(int rollno){
		cout << "This is outside the class " << endl;
		return rollno; 
	} 
int main()
{
	student s1;
	// Access atributes and set values
	s1.age=20;
	s1.name="Ali";
	
	// print atribute values
	cout << s1.name << endl;
	cout << s1.age << endl; 
	s1.myfunc();     // calling the method / class
	s1.outside(421);
}
