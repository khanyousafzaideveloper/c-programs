#include <iostream>
using namespace std;
bool isVowel(char x)
{
	if(x=='A' || x=='E' || x=='I'|| x=='O' || x=='U' || x=='a'|| x=='e'||x=='i'||x=='o'||x=='u')
	return true;
	else
	return false;
	
}
int main()
{
	char alpha;
	cout <<"Write a Vowel: ";
	cin >> alpha;
	if(isVowel(alpha))
	cout <<"Its a vowel";
	else
	cout <<"not a vowel";
}
