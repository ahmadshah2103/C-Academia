// Funtion Template

#include <iostream>
using namespace std;

template <class temp>
temp tempFun(temp x, temp y) {
	return x+y;
}

main () {
	cout<<tempFun('1', '1');
}
