#include <iostream>
using namespace std;

class student
{

	int age;
	public:
			
	
		void set_age(int g)
		{
			age=g;
		}
		void show_age()
		{
			cout <<"I am " << age << " years old."<<endl;
		}
};
int main()
{
	student Ahmad, Ali;
	Ahmad.set_age(19);
	Ahmad.show_age();
	Ali.set_age(25);
	Ali.show_age(); 
}
