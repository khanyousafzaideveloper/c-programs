#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

template<typename T>
T add(T x, T y)
{
	return x + y;
}
int main(){
	cout << add(3,5) <<endl;
	cout << add<float>(2.3, 3.2) <<endl;
	cout << add<double>(43.12, 32.1) <<endl;
	cout << add<long long>(2.3, 3.2);
}
