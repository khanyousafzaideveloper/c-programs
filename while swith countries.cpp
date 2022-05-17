#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout <<"Program to display the countries by the letter they starts with" << endl;
	cout <<"To stop the program enter #"<< endl;
	cout <<"Enter a letter " <<endl;
	cin>> letter;
	cout <<endl;
	while(letter != '#')
	cout <<"The letter you entered is " << letter << endl;
	cout <<"The countries that start with letter"<< letter << "is:";
	if(letter >='a' && letter <='c')
	switch(letter)
	{
		case 'a':
			cout <<"  Afghanistan Albania Algeri Andorra Angola Antigua and Barbuda Argentina Armenia Australia Austria Azerbaijan " <<endl;
break;
         case'b':
		 cout << " Bahamas Bahrain Bangladesh Barbados Belarus" 
		  << "Belgium Belize Benin Bhutan Bolivia Bosnia and Herzegovina" 
		  <<" Botswana Brazil Brunei Bulgaria Burkina Faso Burundi  " << endl;
break;
case'c':
	cout <<"Cabo Verde Cambodia  Cameroon Canada Central African Republic (CAR) Chad Chile China"
<<" Colombia Comoros Congo, Democratic Republic of the Congo, Republic of the Costa Rica Cote d'Ivoire" 
<<" Croatia Cuba Cyprus Czechia" << endl;
break;
}
else 
cout << "Invalid input." << endl; 
cout << "\nEnter another uppercase  letter" << endl; 
cout << "To stop the program enter #."<< endl; 
cout << "Enter a letter: "; 
cin >> letter; 
cout << endl; 
	
 


	
return 0;	
}
