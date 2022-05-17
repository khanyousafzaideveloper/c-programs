#include <iostream>
//#include <msoftcon.h>
using namespace std;
 
class car
{
private:
    string name;
public:
    void getset()
    {
        string nm;
        cout << "Enter name of the car" << endl;
        cin >> nm;
        name = nm;
    }
    
    void showdata()
    {
        cout << "Name of the car is " << name << endl;
    }
};
int main()
{
    car c1;

    c1.getset();

    c1.showdata();

    string name="Ahmad";
    cout << name << endl;
    return 0;
}    