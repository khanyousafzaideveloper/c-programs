#include <iostream>
using namespace std;

class Mystring{
	private:
		string org, z;
	public:	
	Mystring(string x){
		org=x;
		//cout << org <<endl;
	}
	void reverse_string()
	{
	cout << "Reverse string: " ;
	  for (int i=org.length()-1; i>=0; i--)
        {
        	cout << org[i];
		}
		cout <<"\n\n";
	}
	void show(){
		cout << "original string " <<org <<endl;
    }
};

int main()
{
	Mystring str1("Dev CPP"), str2("Compiler");
	str1.show(); 
	str1.reverse_string();
	str2.show();
	str2.reverse_string();
}
