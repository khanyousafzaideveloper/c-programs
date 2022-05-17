#include<iostream>
#include <string>
using namespace std;
class Student {
private:
	int rollno;
	string name;
public:
	void setRollno(int rn, string nm){
		rollno =rn;
		name=nm;
	}	
	void showRollno(){
			cout << "My name is "<< name;
		   cout<<"My Roll no="<< rollno << endl;	
	}
	
};
int main(){
	Student astd;
	astd.setRollno(10, "Ahmad");
	astd.showRollno();
}
