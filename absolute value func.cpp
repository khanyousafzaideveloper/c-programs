#include <iostream>
using namespace std;
int abs(int number)
{
	if (number<0)
{
	number=-number;
}

return number;
}
int main()
{
int value, a;
cout << "Enter the number : ";
cin>> value;
a = abs(value);
cout << "the absolute value of " << value  << " is " << a << endl;


}


