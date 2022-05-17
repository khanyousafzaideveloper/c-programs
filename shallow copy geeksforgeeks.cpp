#include <iostream>
using namespace std;

class cars{
	public:
		string brand;
		int year;
		cars(string b, int y ){
			brand=b;
			year=y;
		}  
    void showdata(){
    	cout << "brand: " << brand << endl;
    	cout << "year: "<< year << endl; 
	}
};
int main()
{
	cars c1("toyota", 2019);
	c1.showdata();
	
	cars c2=c1;
	c2.showdata();
}

