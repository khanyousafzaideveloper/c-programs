#include <iostream>
#include <stdlib.h>
using namespace std;

class mobile
{
	private:
		string company_name;
		string model_number;
		string emi_number;
		float cost;
		
	public:
	void set_info(string cn, string mn, string emi, float price)
	{
		company_name=cn;
		model_number=mn;
		emi_number=emi;
		cost=price;
	}
	void show_info()
	{
		cout << "company= " << company_name.data()<<endl;
		cout << "model= " << model_number.data()<< endl;
		cout << "emi number =" <<emi_number.data()<<endl;
		cout << "cost   Rs=" << cost;
	}	
};
int main()
{
	mobile m1, m2;
	// for m1
	m1.set_info("Q mobile", " Aoir A950", "dont know", 25000);
	m1.show_info();
	//for m2
	m2.set_info("Vivo", "s1", "1234567", 15000);
	m2.show_info();
}
