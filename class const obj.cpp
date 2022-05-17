#include <iostream>
using namespace std;
class example{
	private: 
	int age;
	string name;
	public:
		example(): age(0), name(""){}
		
		example(int a, string nm): age(a), name(nm){}
		
		void show() const {
			cout << "Name :" << name << endl;
			cout << "age :" << age <<endl;
		} 
};
int main()
{
	const example E1(20, "Ahmad"), E3;
	E1.show();
    example E2;
    E2=E1;
    E2.show();
    //E3=E2; // It will show error because E# is const.
    
}
