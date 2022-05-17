#include <iostream>.
using namespace std;
class geometry{
    public:
    virtual void area(){
        return area;
    }
};
class circle: public geometry{
    public:
    float radius;
    float area(){
        return 3.14*r*r;
    }

};
class square:public geometry{
    public:
    int length;
    int width;
    square(int s1, s2){width=s1; length =s2;}
    int area(){
        return length*width;
    }
};
int main()
{
    square s1(2, 9);
    cout << s1.area;

}