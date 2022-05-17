#include <iostream>
using namespace std;
int main()
{
	int n, m;
	char alpha;
	cin >> alpha;
	switch(alpha)
	{
		case'A':
		//	/* local variable Initialization */   int n, m;
    cin >> n >> m;

   /* while loops execution */   while( n <= m )
   {
      cout << "player: " << n <<endl;
      n+=2;
   }
    break;
   
   case 'B': 
   	int n;       // loop control variable, counter variable 
	while ( n < 5 )
	{
	cout << n <<" Good morning dera students" <<endl;
	n++;
	}
	cout << "outside while loop";
	break;


	}
	cout<< "Out of switch statement"<< endl;
	return 0;
}
