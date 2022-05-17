#include<iostream>
#include <string>
using namespace std;
class Student {
private:
	int rollno;
	string name;
public:
	void setRollno(int rn){
		rollno =rn;
		
	}	
	void setname(string nm)
	{
		name=nm;
	}
	void showRollno(){
				   cout<<"My Roll no="<< rollno << endl;	
	}
	void showname(){
			cout << "My name is "<< name;
	}
	
};
int main(){
	Student astd;
	astd.setRollno(10);
	astd.setname("Ahmad");
	astd.showRollno();
	astd.showname();
}
