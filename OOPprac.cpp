#include <iostream>
using namespace std;
class car
{
    public:
    string name;
    int price;
    int year;

    void priceX()
    {
        cout << "Hey, Whats up!" <<endl;
    }


};

int main()
{
    car c1;
    c1.name="Honda";
    c1.price=920000;
    c1.year=2020;

    cout << c1.name<<endl;
    cout << c1.price<<endl;
    cout << c1.year<<endl;
    c1.priceX();
}