#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int  computer= rand()%3+1;
	int user=0, x;
    string roc="1) Rock\n";
    string pap="2) Paper\n";
    string sci="3) Scissor\n";
    
    cout << "***************************************************" << endl;
    cout  <<"*  ROCK                PAPER             SCISSOR  *" << endl;
    cout << "***************************************************" <<endl;
    while(x<5){
	    
    cout << roc;
    cout << pap;
    cout << sci;
    
    
    cout << "choose: ";
	cin >> user;
    cout << "\nYou choose: ";
    switch(user){
    	case 1:
    		cout << roc;
    		break;
    	case 2: 
			cout << pap;
			break;
		case 3:
		 	cout << sci;
		 	break;
	    default: 
	    cout << "Invalid user\n";
	}
	cout << "computer choose: " ;
	switch(computer){
		case 1:
			cout << roc;
			break;
		case 2:
			cout << pap;
			break;
		case 3: 
			cout << sci;
			break;
			
	}
	
	if(user==computer){
		cout << "Game drawn\n"; 
	}
	else if(user == 1 && computer==3)
	{ 
	cout << "You win\n";}
	else if(user == 2 && computer == 1)
	{
	  
	cout << "You Win\n";
}
	else if(user == 3 && computer == 2)
	{ 
	cout << "you Win\n";
}
	else
	{ 
	cout << "You lost. Computer Wins";}
	x++;
}
}
