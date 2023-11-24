#include <iostream>
using namespace std;

main () {
	int regVar = 9;
	cout<<&regVar<<endl;
//	& is called reference operator.
//	int *;
//	* is called dereference operator
//	p = &regVar;
	int *p = &regVar;
	cout<<p<<endl;
	cout<<*p<<endl;
//	p++;
//	cout<<*p;
//	*p = 20;
//	cout<<regVar<<endl;
	int *q = &regVar;
	*q = 10;
	cout<<*q<<endl;
	*p = 31;
	cout<<++(*p)<<endl;
	cout<<*p<<endl;
//
	cout<<++*p<<endl;
	cout<<*p<<endl;
}
