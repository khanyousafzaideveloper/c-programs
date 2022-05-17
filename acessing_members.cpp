#include <iostream>
using namespace std;
class person{
string name;
int age;
public:
string Getname(){
    return name;
}
int Getage(int a){
   age= a;
    return age;

}
};
class student: public person {
int semester;
int rollno;
public:
int GetSemester(){
return semester;
} 
int GetRollno(){
    return rollno;
}
};
int main()
{
student obj;
cout << obj.Getage(32) << "<-is age and "<<endl; 
}