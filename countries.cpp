#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout <<"Program to display the countries by the letter they starts with" << endl;
	cout <<"To stop the program enter #"<< endl;
	cout <<"Enter a lowercase letter " <<endl;
	cin>> letter;
	cout <<endl;
	while(letter != '#')
	{
	cout <<"The letter you entered is " << letter << endl;
	cout <<"The countries that start with letter \'"<< letter << "\' is:";
	if(letter >='a' && letter <='z')
	switch(letter)
	{
		case'a':
			cout <<"\n Afghanistan\n Albania\n Algeri\n Andorra\n Angola\n Antigua and Barbuda\n Argentina\n Armenia\n Australia\n Austria\n Azerbaijan\n " <<endl;
        break;
        
        case'b':
		    cout << "\n Bahamas\n Bahrain\n Bangladesh\n Barbados\n Belarus\n" 
		    << "\n Belgium\n Belize\n Benin\n Bhutan\n Bolivia\n Bosnia and Herzegovina\n" 
		    <<"\n Botswana\n Brazil\n Brunei\n Bulgaria\n Burkina Faso\n Burundi\n" << endl;
        break;
        
        case'c':
	        cout <<"\n Cabo Verde\n Cambodian\n Cameroon\n Canada\n Central African Republic (CAR)\n Chad\n Chile\n China\n"
            <<"\n Colombia\n Comoros\n Congo\n Democratic Republic of the Congo\n Republic of the Costa Rica Cote d'Ivoire\n" 
            <<"\n Croatia\n Cuba\n Cyprus\n Czechia\nc" << endl;
        break;
        
        case'd':
	        cout << "\n Denmark Djibouti\n Dominica\n Dominican Republic\n" << endl;
	    break;
	    
	    case'e':cout << "n\ Ecuador Egypt\n El Salvador\n Equatorial Guinea\n "
	        <<"\n Eritrea\n Estonia\n Eswatini (formerly Swaziland)\n Ethiopia\n " << endl;
        break;
        
        case'f':
            cout << "\n Fiji\n Finland\n France\n "<< endl;
        break;
        
        case'g':
            cout << "\n Gabon\n Gambia\n Georgia\n Germany\n Ghana\n Greece\n Grenadan\ Guatemala\n Guinea\n Guinea-Bissau\n Guyana\n " <<endl;	
	    break;
	    
	    case'h':
		    cout<< "\n Haiti\n Honduras\n Hungary\n"<<endl;
	    break;
	    case'i':
			cout <<"\n Iceland\n India\n Indonesia\n Iran\n  Iraq\n Ireland\n Italy\n" << endl;
	    break;
	
	    case'j':
		    cout <<"\n Jamaica\n Japan\n Jordan\n" << endl;
		break;
	
	    case'k':
	        cout << "\n Kazakhstan\n Kenya\n Kiribati\n Kosovo\n Kuwait\n Kyrgyzstan\n" <<endl;
	    break;
	
	    case'l':
	         cout << "\n Laos\n Latvia\n Lebanon\n Lesotho\n Liberia\n Libya\n Liechtenstein\n Lithuania\n Luxembourg\n "<< endl;
	    break;
	
	    case'm':
	        cout<< "\n Madagascar\n Malawi\n Malaysia\n Maldivesn\n Mali\n Malta\n Marshall Islands\n Mauritania\n Mauritius\n Mexico\n Micronesia\n Moldova\n Monaco\n Mongolia\n Montenegro\n Morocco\n Mozambique\n Myanmar (formerly Burma)n\ "<<endl;	
        break;
        
        case 'n':
            cout << "\n Namibia\n Nauru\n Nepal\n Netherlands\n New Zealand\n Nicaragua\n Niger\n Nigeria\n North Korea\n North Macedonia (formerly Macedonia)\n Norway\n"<<endl;			
        break;

        case'o':
	        cout << "\nOman"<< endl;
	    break;
	
	    case'p':
		    cout << "\n Pakistan\n Palau\n Palestine\n Panama\n Papua New Guinea\n Paraguay\n Peru\n Philippines\n Poland\n Portugal\n" <<endl;
        break;

        case'q': 
	       cout <<"\n Qatar"<< endl;
	    break;
	
	    case'r':
		    cout << "\n Romania\n Russia\n Rwanda\n "<<endl;
		break;
		
		case's':
			cout << "\n Saint Kitts and Nevis\n Saint Lucia\n Saint Vincent and the Grenadines\n Samoa\n San Marino\n"
            <<"\n Sao Tome and Principe\n Saudi Arabia\n Senegal\n Serbia\n Seychelles\n Sierra Leone\n" 
            <<"\n  Singapore\n Slovakia\n Slovenia\n Solomon Islands\n Somalia\n South Africa\n"
            <<"\n  South Korea\n South Sudan\n Spain\n Sri Lanka\n Sudan\n Suriname\n Sweden\n Switzerland\n Syria\n " <<endl; 
        break;

        case't':
	        cout <<"\n Taiwan\n Tajikistan\n Tanzania\n Thailand\n Timor-Leste\n Togo Tonga\n "
	        <<"\n Trinidad and Tobago\n Tunisia\n Turkey\n Turkmenistan\n Tuvalu\n"<<endl;
        break;

        case'u': 
            cout << "\n Uganda\n Ukraine\n United Arab Emirates (UAE)\n "
            << "United Kingdom (UK)\n United States of America (USA)\n Uruguay\n Uzbekistan\n"<<endl; 
        break;  

        case'v':
	        cout << "\n Vanuatu\n Vatican City (Holy See)\n Venezuela Vietnam\n "<<endl;
	    break;
	 
	    case'w':
		    cout << "\n No country starts wiyh W  "<<endl;
		break;
		
		case'x':
		    cout << "\n No country starts with X"	<<endl;
        break; 
			
	    case'y':
		    cout<< "\n Yeman"<< endl;
		break;

        case'z':
     	    cout <<"\n Zambia\n Zimbabwe\n "<<endl;
     	break;
}
else 
cout << "Invalid input." << endl; 
cout << "\nEnter another lowercase  letter" << endl; 
cout << "To stop the program enter #."<< endl; 
cout << "Enter a letter: "; 
cin >> letter; 
cout << endl; 

}
return 0;	
}
