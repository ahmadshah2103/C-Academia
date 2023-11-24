#include <iostream>
using namespace std;

main() {
	int myT = 2;
	int myC = 0;
	
	for(myC = 1; myC < 11; myC++) {
		if (myC == 5) {
//			continue;
//			break;
			exit(1);
		} else {
			cout<<myT<<"x"<<myC<<"="<<myC*myT<<endl; 
		}
	}
	cout<<"\n We are out of the for loop";
}
