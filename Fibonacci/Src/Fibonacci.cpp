//============================================================================
// Name        : Fibonacci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	x = 0;
	y = 1;
	z = 0;
	cout << x << ", " << y ;

	while (z <= 10000){
		z = x + y;
		cout << ", " << z ;
		x = y;
		y = z;
	}

	return 0;
}
