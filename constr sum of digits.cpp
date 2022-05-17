#include <iostream>
using namespace std;

class Number{
	private:
		int r, sum=0, num;
	public:
	Number(int x){
		num=x;
	}	
	void digitsum(){
		while( num!=0)
	{
		r= num%10;
		sum += r; 
		num= num /10; // removing rightmost digit
	}
	}
	void show()
	{
		cout <<"The sum "<< x <<"digits is " << sum <<endl;
	}
};
int main()
{
	Number num1(232);
	num1.digitsum();
    num1.show();
}

