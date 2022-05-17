#include <iostream>
using namespace std;

class example{
	private:
		int data;
	public:
	example(){
		cout << "This is a constructor" <<endl;
	}

};
int main()
{
	example obj1;
}
