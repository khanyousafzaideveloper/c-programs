#include <iostream>
using namespace std;

class counter{
	private:
		int count;
	public:
		counter() : count(0)
		{cout << "I am a constructor." << endl; }
	void set_count(int c)
	{
		count=c;
	}
	void show()
	{
		cout << "couneter: " << count << endl;
	}
};
int main()
{
	counter c1, c2;
	///c1.set_count(1);
	c1.show();
	c2.show();
}
