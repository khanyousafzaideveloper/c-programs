#include <iostream>
using namespace std;

class rectangle
{
	int width;
	int length;
	public:
	rectangle(int ln, int wd)
	{
		width=wd;
		length=ln; 
	}
	void show_area(){
		cout << "width= " << width << endl;
		cout << "length= " << length << endl;
		cout << "area of rectangle : " <<  length* width << endl;
	}
};
int main()
{
	rectangle rect1(5, 10), rect2(4, 9);
	rect1.show_area();
	rect2.show_area();
}
