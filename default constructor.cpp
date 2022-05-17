#include<iostream>
#include <string>
using namespace std;

class Student{
int rollNo;
string name;
public:
      Student(){
      	rollNo=0;
      	name="  ";
	  }
void showRollno_and_name(){
	cout<<"My roll no="<<rollNo<<endl;
	cout << "My name " << name << endl;
}

};
int main()
{
	Student astd, bstd;
	/*constructor is implicitly called at this point*/
	astd.showRollno_and_name();
	bstd.showRollno_and_name();
	return 0;
}
