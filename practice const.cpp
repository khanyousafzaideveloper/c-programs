#include <iostream>
using namespace std;

class student{
	private:
		int rollno;
		string name;
		string grade;
	public:
		student(){
			rollno=0;
			name=" ";
			grade;
		}
		student(int rl, string nm, string g){
			rollno=rl;
			name=nm;
			grade=g;
		}
		
		student(const student& sample){
			rollno=sample.rollno;
			name=sample.name;
			grade=sample.grade;
			cout << "copy constructor" << endl;
		}
		
	void showdata(){
		cout << "Rollno: " << rollno << endl;
		cout << "Name: " << name <<endl;
		cout << "Grade: " << grade << endl;
		cout << "*************************" <<endl; 
	}
};
	
int main()
{
	student astd(12, "Ahmad", "grade A");
	astd.showdata();
	
	student bstd(23, "asad", "grade B");
	bstd.showdata();
	
	student cstd=astd;
	cstd.showdata();
}
