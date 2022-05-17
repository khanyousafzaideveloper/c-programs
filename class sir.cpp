#include<iostream>
using namespace std;

class Student{
int rollNo;
public:
	Student(){
		rollNo = 0;
		cout<<"I am constructore here"<<endl;
	}
};
int main()
{
	Student aStudent;
	/*constructor is implicitly called at this point*/
	return 0;
}
