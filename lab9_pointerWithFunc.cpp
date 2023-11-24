#include <iostream>
using namespace std;

//void add (int*x, int*y) {
//	*x = *x + *y;
//	x = nullptr;
//	y = nullptr;
//	cout<<x<<endl<<y<<endl;
//}

int add (int x, int y) {
	return x + y;
}

int sub (int x, int y) {
	return x - y;
}
//	int(*func)(int, int) >>>>> points to a function
int op (int x, int y, int(*func)(int, int)) {
	int sum = (*func)(x, y);
	return sum;
}

main () {
	int a = 5, b = 10;
//	add(&a, &b);
//	cout<<a;

	cout<<op(4, 4, sub);

}
