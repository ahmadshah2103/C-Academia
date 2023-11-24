#include <iostream>
using namespace std;

int myFunc(int, int);

int main()
{
	int x, y;
	cin >> x >> y;
	int c = myFunc(x, y);
	cout << c;
};

int myFunc(int a, int b) {
	int sum = a + b;
	return sum;
}
