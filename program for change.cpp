#include <iostream>
using namespace std;


	
	const int thousand =1000;
	const int five_hundred=500;
	const int hundred=100;
	const int fifty=50;
	const int twenty=20;
	const int ten=10;
	const int five=5;
	const int two=2;
	const int one=1;
	
	int main()
{
	
	
	int change;
	cout <<" Enter change in Rupees: ";
	cin >>  change;
	cout << endl;
	
	cout << "The change you entered is:" << change << endl;
	
	cout <<"The number of RS:1000 to be returned is  " << change/thousand<< endl;
    change = change % thousand;
	
	cout <<"The number of RS:500 to be returned is  " << change/five_hundred<< endl;
    change = change % five_hundred;
    
    cout <<"The number of RS:100 to be returned is  " << change/hundred<< endl;
    change = change % hundred;
    
    cout <<"The number of RS:50 to be returned is  " << change/fifty<< endl;
    change = change % fifty;
    
    cout <<"The number of RS:10 to be returned is  " << change/ten<< endl;
    change = change % ten;
    
    cout <<"The number of RS:5 to be returned is  " << change/five<< endl;
    change = change % five;
    
    
    cout <<"The number of RS:2 to be returned is  " << change/two<< endl;
    change = change % two;
	 
	cout <<"The number of RS:1 to be returned is  " << change/one<< endl;
    change = change % one;
}
	
	

