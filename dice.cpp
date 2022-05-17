#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDice(int num);
int main()
{
	int q, w, r, u;
	while(r<u)
{
	cin >> q >> w;
	cout << "how many times do u want to run it: "<<endl;
	cin >> u;
	
		
	
cout << "The number of times the dice are rolled to "
<< "get the sum of " << q << " : "<< rollDice(q) << endl;
cout << "The number of times the dice are rolled to "
<< "get the sum of " << w <<" : "<< rollDice(w) << endl;
r++;
}

return 0;
}
int rollDice(int num)
{
int die1;
int die2;
int sum;
int rollCount = 0;
srand(time(0));
do
{
die1 = rand() % 6 + 1;
die2 = rand() % 6 + 1;
sum = die1 + die2;
rollCount++;
}
while (sum != num);
return rollCount;

}
