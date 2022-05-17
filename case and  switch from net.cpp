#include <iostream> 
using namespace std;
int main()
{

   char team; 
   cout << "Enter the team which won the match " << endl;
   cout<< "Enter P for PAKISTAN" << endl;
   cout<< "Enter I for INDIA" << endl;
   cout<< "Enter A for AUSTRAILAI" << endl;
   cout<< "Enter E for ENGLAND" << endl;
   cout<< "Enter B for BANGLADESH" << endl;
   cout<< "Enter a for AFGHANISTAN" << endl;
   cout<< "Enter S for SRILANKA"  << endl;
   cout<< "Enter N for NEW ZEALAND" << endl;
   cout<< "Enter W for WEST INDIES" << endl;
   cout<< "Enter Z for ZIMBABWE" << endl;
   cout<< "THE LETETR YOU ENTERED IS: " << endl;
   
   cin >> team;
   switch (team) 
   {
      case 'P': cout<<"****Pakistan won the match "<<endl;
      break;
      case 'I': cout<<"****India won the match "<<endl;
      break;
      case 'S' : cout<<"****Srilank won the match "<<endl;
      break;
      case 'E' : cout<<"****England won the match "<<endl;
      break;
      case 'A': cout<<"****Australia won the match "<<endl;
      break;
      case 'B' : cout<< "****Bangladesh won the match "<<endl;
      break;
      case 'a': cout<<"****Afganistan won the match "<<endl;
      break;
      case 'W': cout<<"****WEST INDIES won the match "<<endl;
      break;
      case 'N': cout<<"****NEW ZEALAND won the match "<<endl;
      break;
      case 'Z' : cout << "****ZIMBABWAE won the match" << endl;
      break;
      
      default: cout<<"You entered a wrong team ... Try again"<<endl;
   }
   cout<<"Hey, I'm out of the switch case";
   return 0;
}

