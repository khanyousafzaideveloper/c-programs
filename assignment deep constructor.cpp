#include <iostream>
using namespace std;

class place{
	private:
		string country;
		string *city;
	public:
		place(){
		city =new string; 
		}
		void set_dimensions(string co, string ci){
			country=co;
			*city=ci;
			//height=hei;
		}
		place(place& sample){
			country=sample.country;
			city=new string;
			*city=*(sample.city);
			//height=sample.height;
		}
		
		void show_data(){
			cout << "country :" << country << endl;
			cout << "city: " << *city << endl ;
			//cout << "Height= "<< height << endl;
		}
		// destructors:
		~place(){
			delete city;
			cout << "hello"<<endl;
		}
};
int main(){
	place p1;
	p1.set_dimensions("Pakistan", "peshawar");
	p1.show_data();
	
	place p2=p1;
	p2.show_data();
	
	return 0;
}
