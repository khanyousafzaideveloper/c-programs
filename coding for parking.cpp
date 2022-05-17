#include <iostream>
using namespace std;
int main()
{		
	int u_input;
	int amount=0, count=0;
	int c=0;
	int b=0;
	int r=0;
	
	
	//menu
	while (true)
	{
	
	cout << "press 1 for rickshaw: " << r <<  endl;
	cout << "press 2 for car: " << c << endl;
	cout << "press 3 for bus: " << b << endl;
	cout << "press 4 to show record: "<< endl;
	cout << "press 5 to delete record: " << endl;
	cin >> u_input;
	
	if(u_input==1)
	{
		if (count<=50)
		{
		     r++;
	 	    amount = amount + 100;
	        count  = count +1;
	        
	}
	    else
	    	cout << "No more cars, parking is full" << endl;
		
	}
	else if(u_input==2)
	{
		if(count <=50) {
		   c++;
		   amount =amount +200;
		   count  =count +1;
	}
	else
	cout << "No more cars, parking is full" << endl;
		
	}
	else if (u_input == 3)
	{
		if(count <=50)
		{
			
		b++;
		amount= amount +300;
		count = count + 1;}
		else
			cout << "No more cars, parking is full" << endl;
		 
	}
	else if (u_input ==4)
	{
		
		cout << "************************************************"<<endl;
		cout << "total amount: Rs" << amount <<  endl;
		cout << "total number of vehicles  pakrked: "<< count << endl;
		cout << "total number of cars  pakrked: "<< c << endl;
		cout << "total number of rickshaws  pakrked: " << r << endl;
		cout << "total number of buses  pakrked: " << b << endl;
		cout << "************************************************"<<endl;
	}
	else if (u_input ==5)
	{
		amount = 0;
	    count = 0;
	    cout << "*********************************" <<endl;
	    cout << "R E C O R D   D E L E T E D" << endl;
	    cout << "*********************************" << endl;
	    r=0;
	    c=0;
	    b=0;
	    
}
	else {
   	cout << "invlalid operator" << endl;
		
	}
}
    return 0;		 
}

