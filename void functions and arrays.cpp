#include <iostream>
using namespace std;
		
	void input(int list[], int size)
{
	//int const arraysize=5;
	//int list[arraysize];
	cout << "Enter the numbers: ";
	int i;
		while(i<size)
	{
		//cout <<"list ["<< i <<"] :";
		cin >> list[i];
		i++;
	}
}
    void output(int list[], int size)
{
	int j;
	cout << "The numbers you entered are: ";
	//int const arraysize=5;
	//int list[arraysize];
	
	while(j<size)
	{
	    cout << list[j] << " ";
		j++;
	}
}
	void reverse(int list[], int size)
{
	//int const arraysize=5;
	//int list[arraysize];
	
	cout << "The numbers in reverse order are: ";
	for(int i=size; i>=0; i--)
	cout << list[i] << " ";
	cout <<endl;
}
    void sum_average_max(int list[], int size)
{
	
//	int const arraysize=5;
//	int list[arraysize];
    double sum=0; 
	double average=0;	
	
	for(int x=0; x<size; x++)
	sum= sum + list[x];
	
	cout << "Sum :" << sum << endl;
	average=sum/5;
	cout << "Average: " << average;
	cout <<endl;
	int maxindex=0;
	for(int w=1; w<size; w++)
	{
		if(list[maxindex]<list[w])
		maxindex=w;
	}
		cout << "largest number: "<< list[maxindex];
}
int main()
{
	int x;
	cout << "Enter the size of Array :";
	cin >> x;
    int list[5];
   input(list, x);
   output(list, x);
   reverse(list, x);
   sum_average_max(list, x);
}
