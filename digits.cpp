#include<iostream>
using namespace std;

int main () {

	int r, sum = 0;

	// reading each digit of n
	while (n > 0) {

		r = n % 10;	// storing rightmost digit of n in r
		n = n / 10;	// removing rightmost digit of n

		// if r is even, add r to sum
		if (r % 2 == 0){
			sum = sum + r;
		}

	}

	return sum;
