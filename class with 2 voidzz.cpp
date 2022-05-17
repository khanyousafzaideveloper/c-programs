 #include <iostream>
using namespace std;
class student
{
	private:
	int rollno;
	string name;
	public:
	void set(int rn, string nm){
		name=nm ;
		rollno=rn;
		}
		void show(){
		cout << "My name is " << name<<endl;
	cout << "Roll = " << rollno;
		}
};
int main()
{
	student astd;
	astd.set(13, "Ahmad");
	astd.show();
	return 0;
}

