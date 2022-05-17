#include <iostream>
using namespace std;
class student
{
	//private:
	int rollno;
	public:
		
	void setrollno(int rn)
	{
		rollno=rn;
	}
	void showrollno()
	{
		cout << "My rollno = " << rollno;
	}
};
int main()
{
	student astd;
	astd.setrollno(10);
	astd.showrollno();
	
}
