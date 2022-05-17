#include <iostream>
using namespace std; 
int main()
{
	
	int temperature;
	cout << "Enter the temperature:";
	cin >> temperature;

    if ( temperature < 5)
	{
    	cout << "the weather is very cool " << endl;
	}
	
   
   else if ( ( temperature >=5 ) && (temperature <10))
   {
        cout<< "the weather  is cool" << endl;  
   }
   
   
   else if ( (temperature>=10) && (temperature<=20))
	{
	    cout << "The weather is pleasent" << endl;
    }   
	
    else 
	{
		cout << "the weather is hot" << endl;
	}
		
}

