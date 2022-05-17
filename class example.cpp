#include <iostream>
using namespace std;
 
class example{
	private:
		int var;
		string name;
		
		public:
			example(): var(0), name(" "){}
			
			example(int x, string n){
				name=n;
				var=x;
			}
			void show(){
				cout << "name = " <<name << endl;
				cout << "number :" << var << endl;
			}
			example(const example& x){
				var=x.var;
				name=x.name;
				cout << "HEllO WORLD" <<endl;
			}
			
			example& operator=(const example& other) // Copy Assignment
			{
			    var = other.var;
			    name = other.name;
			    cout << "Copy Assignment\n";
			    return *this;
			}
			
};

int main()
{
	example E1(32, "Ahmad"), E2;
	E1.show();
    E2 = E1;
	E2.show();
}
