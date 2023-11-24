// Lab No. 7 (Functions part 2)

#include <iostream>
using namespace std;

void myFunc (int x, int y) {
	cout<<x+y;
}

main() {
	myFunc();
}

// Above function will not work because no arguments are passed.

// To overcome this problem, the parameters are set to some default value.
// void myFunc (int x = 5, int y = 4)

/*
Or we can do this as:

void myFunc (int = 5, int = 4)

main () {

};

void myFunc (int x, int y) [
};

*/

/*

*/
