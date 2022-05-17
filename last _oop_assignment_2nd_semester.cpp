#include <iostream>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(int x1, int y1){x=x1; y=y1;}
    void print()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl; 
    }
};

class line: public point;{
    
  point start, end;
  line(point start, end)
  {
      this.start=start;
      this.end=end;
  }
  void w(){
      cout << start <<endl;
      cout << end << endl;
   }
};
int main()
{
    point p1(2, 4);
    p1.print();

    line l1(3, 9);

    
}