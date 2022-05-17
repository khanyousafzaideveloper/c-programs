#include <iostream>
using namespace std;

class rectangle
{
	int length;
	int width;
	public:
		rectangle(){
			length=20;
			width=10;
		}
		
	void compute_area(){	
	cout << "width: "<< width << endl;
	cout <<"length: " <<length << endl;
    cout << "The area of rectangle is " << length*width <<endl;
	}	
};
int main()
{
	rectangle object;
	object.compute_area();
}
