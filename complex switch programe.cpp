#include <iostream>
#include <windows.h> 
#include <cmath>
using namespace std;
int main()
{

   char team;
   int a, b, c, d, e, f, h, m, s, err;
   float x, y, r; 
   cout << "Select any of the following: " << endl;
   cout<< "Enter P to round a number" << endl;
   cout<< "Enter I to get sum of two numbers" << endl;
   cout<< "Enter A to multiply any two numbers" << endl;
   cout<< "Enter E to get remainder after division" << endl;
   cout<< "Enter B to get area of circle if radius is known" << endl;
   cout<< "Enter a for power function" << endl;
   cout<< "Enter S to find about weather"  << endl;
   cout<< "Enter N to set the clock" << endl;
   cout<< "Enter W for car parking program" << endl;
   cout<< "Enter Z to find area of rectangle " << endl;
   cout<< "THE LETETR YOU ENTERED IS: " << endl;
   
   cin >> team;
   switch (team) 
   {
   	//case P
      case 'P':
	  cout <<"Enter a decimal number" << endl;
	  cin >>x;
	  cout <<"the number is rounded to: "  <<round(x); 
	  cout <<endl;
      break;
      
    //case I
      case 'I': cout<<"Enter any two integers to get the sum: "<<endl;
      cin >>  a>> b;
      c =a+b;
	  cout << "The sum of two numbers is: " << c << endl;  
      break;
      
    //case S
      case 'S' : cout << "Enter the temperature:  "<<endl;
      cin >> x;
      if (x<=5)
	  cout<< "The temperature is cool" << endl;
	  else if  ( (x> 5) &&  (x<13 )) 
	  cout << "The temperature is moderate: " << endl;
	  else 
	  cout << "The temperature is hot" << endl;
      break;
      
    //case E
      case 'E' : cout << "Enter two numbers to get remainder 0 or other than 0 :"<<endl;
      cout << "Enter first number:"<<endl;
      cin >> a ; cout << "Divided by "; cin >> b;
      c= a%b;
      cout << a <<"%" << b << " = " << c << "            REMAINDER IS: " << c <<  endl;  
	  if(c==0) 
	  cout << true << endl;
	  else
	  cout << false << endl;   
     cout << (x>y);  
      break;
      
      //case A
      case 'A': cout<< "Enter any two integers to multiply"<<endl;
      cin>> a>> b;
      c=a*b;
      cout << "the result is :" << c<< endl;
      break;
      
      //caseB
      case 'B' : cout << "Enter the radius of the circle" << endl;
	  cin >> r; 
      cout <<   "Area of Circle = "<< 3.14*r*r << endl;
      break;
      
      //case a
      case 'a': 	
	cout << "Enter first nuber as a base and second as power:" << endl;
	cin >> a >> b;
	c = pow(a, b);
	cout << "Your answer is : " << c << endl; 
    break;
    
    
    //case W
    case 'W': 	
	cout<< "Enter number of rickshaws:" << endl;
	cin >> a;
	
	cout << "Enter number of buses:" << endl;
	cin >> b;
	
	cout << "Enter number of cars:" << endl;
	cin >> c;
	
	cout <<"Number of Rickshaws:" << a << endl;

	cout << "Amount  : Rs" << a*100 << endl;
	e = a*100;
	cout <<"Number of cars: "<< c << endl;
	cout <<"Amount : Rs" << c*200 << endl;
	d=c*200;
	cout << "Number of buses: " << b << endl;
	cout << "Amount : Rs" << b* 300 << endl;
	f=b*300;
	cout <<"*********************************" <<endl;
	cout << "Total Amount : " << e+d+f << endl; 
	cout <<"*********************************" <<endl;
      break;

      //case N
      case 'N': 
      err = a= 0;
	while ( err==0)
	{
		cout << "Enter hours:" <<endl;
		cin >> h;
		cout << "Enter minutes:" << endl;
		cin >> m;
		cout << "Eneter seconds: " << endl;
		cin >> s;
		if(h<24&&m<60&&s<60)
		err++;
		system ("cls");
		 
    }
	while(a==0)
	{
			
	system ("cls");
	cout << h <<":" << m << ":" << s << ":" << endl;
	Sleep (1000);
	s++;
	if(s>59)
	{
		s=0;
		m++;	
	}
	if(m>59)
	{
		m=0;
		h++;
	}
	if(h>24)
	{
		h=0;
		}
	}
      break;
      
      //case Z
      case 'Z' : cout << "Area of rectangle:" << endl;
      cout << "Enter lenght: "; 
	  cin >> a; 
	  cout << "Enter width: "; 
	  cin >> b;
	  cout << "AREA  OF RECTANGLE =" << a*b << endl;
      break;
      
      
      
      default: cout<<"You entered a wrong team ... Try again"<<endl;
   }
   cout<<"      ********************Hey, I'm out of the switch case***************************";
   return 0;
}

