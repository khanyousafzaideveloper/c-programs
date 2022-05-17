#include <iostream>
using namespace std;
class house{
	private:
	double area;
	public:
		//house():
			//area(1000){
			//cout << "A house created\n";}
		void set_area(double a){
			area=a;
		}	
		void return_area(){
			cout <<  area;
		}
		void get_area(){
			cout <<"what is area of house in square feet: ";
			cin >> area;
		}
};
int main()
{
	house H1, H2;
	cout << "default area of the house H1 is: ";
	H1.return_area();
	cout << endl;
	cout << "default area of the house H2 is:";
	H2.return_area();
	cout <<endl;
	H1.set_area(1500);
	H1.get_area();
	cout << "Now area of the house H1 = ";
	H1.return_area();
	cout << " Square feet " <<  endl;
	cout << "Now the area of H2 = ";
	H2.return_area();
	cout  << " Square feet " << endl;
	//system ("PAUSE");
	return 0;
	
}
