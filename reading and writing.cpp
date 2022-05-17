#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream my_file;
	my_.open("nuers.txt", "w");
	if (!my_) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_.close(); 
	}
	return 0;
}
