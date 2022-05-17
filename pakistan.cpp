#include <iostream>
using namespace std;

class factorial{
	private: 
	int num, fac=1;
	public:
		factorial(int number){
		num=number;
	}

		int calculateFactorial()
		{
			
		if(num<0)
	{
		cout << "No factorial" <<endl;
	}
	else
	for(num; num>=1; num--)
	{
		fac*=num;
		return fac;	
	}
			
		}
		void show(){
			cout << "The factorial is " << fac << endl;
		}
};
int main()
{
	factorial fact1(4), fact2(5);
	fact1.show();
	fact2.show();
}
