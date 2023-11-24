#include <iostream>
using namespace std;

void rec () {
	// Static Variable
	static int x = 10;
	
	if (x>0) {
		cout<<x<<endl;
		--x;
		rec();
	}
	else {
		cout<<"Fin"<<endl;
	}
}

main () {
	rec();
}
