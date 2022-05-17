#include <iostream>
using namespace std;

class example{
	int a;
	public:
		void reveal(){
			cout << "\nmy object's adress is " << this <<endl;
		}
};
int main()
{
	example E1, E2, E3;
	E1.reveal();
	E2.reveal();
	E3.reveal();
}
