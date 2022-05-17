#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show()=0;
};
class derived1: public Base{
    public:
    void show(){
        cout << "derived 1" <<endl;
    }
};
class derived2 :public Base{
    public:
    void show(){
    cout << "derived 2" << endl;
    }
};
int main()
{
    // Base bad; // cant make object from abstract class
    Base* arr[2]; 
    derived1 dv1;
    derived2 dv2;
    arr[0]=&dv1;
    arr[1]=&dv2;

    arr[0]->show();
    arr[1]->show();


}