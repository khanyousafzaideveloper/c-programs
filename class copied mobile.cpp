// mobile.cpp demonstrates mobile phone as an object
#include <iostream>
#include <stdlib.h>
using namespace std;
class mobile        // class name should be the name of a concept
{ 
  private:
    string company_name;
    string model_number; 
    string emi_number;
    float cost;

  public:
    void set_info(string cn,string mn, string emi, float price)
    { 							// set data
      company_name = cn;
      model_number = mn;
      emi_number = emi;
      cost = price;    
    }
void show_info() 				// display data
    { 
      cout << "Company = "    << company_name.data() << endl;
      cout << "Model   = "    << model_number.data() << endl;
      cout << "EMI     = "    << emi_number.data()   << endl;
      cout << "Cost    = Rs." << cost                << endl;
    }
};

int main()
{
  mobile m1; 			// define an object of class mobile
  m1.set_info("QMobile", "Noir A950", "don’t know :)", 25000.0F);
  // call member function
  m1.show_info(); 
  // call member function
  
  system("PAUSE"); 
  return 0;
}
