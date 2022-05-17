#include <iostream>
using namespace std;
class  person{
public:
  string name;
  int cnic;

  string getname(string nm)
  {
    //name=nm;
    return name;
  }
  int getcnic(int c){
    //cnic=c;
    return c;
  }
};
class student: public person
{
public:
  int rollno;
  float gpa;

  int getrollno(int rn){
    return rollno;
  }

  float getgpa(float g){
    return gpa;
  }

  void set(string nm, int c, int rn, float g){
    name=nm;
    cnic=c;
    gpa=g;
    rollno=rn;
  }
  void show(){
    cout << "name :" << name <<endl;
    cout << "cnic :" << cnic <<endl;
    cout << "rool no :" << rollno <<endl;
    cout << "gpa :" << gpa <<endl;
  }

};
int main()
{
  student s1;
  s1.set("ali" , 23212 , 23 , 2.21);
  s1.show();

}
