#include <iostream>
using namespace std;

class student
{
	private:
		int rollno;
		string name;
	public:
	student(string nm, int rn){
		rollno=rn;
		name=nm;
		cout << "constructor 1" <<endl;
	}
	student(int rn1, string nm1){
		rollno=rn1;
		name=nm1;
		cout << "constructor 2" <<endl;
	}	
	student(int roll){
		rollno=roll;
		cout << "constructor 3" <<endl;
	}		
	student(string nam){
		name=nam;
		cout << "constructor 4" <<endl;
	}
	void show_data(){
	cout << "Roll no is :" << rollno << endl;
	cout << "Name is : " << name << endl;
	}
};
int main()
{
	student astd("ali");
	astd.show_data();
}
