#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout << "base" << endl;
    }
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
    derived1 dv1;
    derived2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr->show();

    ptr=&dv2;
    ptr->show();
}