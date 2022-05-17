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
		cout << "My name is "<< name << endl;
		cout<<"My Roll no="<< rollno;
	
	}
	//void setname(string nm){
		
	//}
	//void showname(){

//	}
	
};
int main(){
	Student astd;
//	astd.rollno=10;
	astd.setRollno(10, "Ahmad");
	astd.showRollno();
}

