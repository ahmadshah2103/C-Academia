#include <iostream>

using namespace std;

void sort4(int* w, int* x, int* y, int* z) {
    if(*w>*x) swap(*w, *x);
    if(*w>*y) swap(*w, *y);
    if(*w>*z) swap(*w, *z);
    if(*x>*y) swap(*x, *y);
    if(*x>*z) swap(*x, *z);
    if(*y>*z) swap(*y, *z);
}

int main() {
    int a, b, c, d;
    a = 4;
    b = 5;
    c = 3;
    d = 2;
    cout << a << " " << b << " " << c << " " << d << " " << endl;

    sort4(&a, &b, &c, &d);

    cout << a << " " << b << " " << c << " " << d << " " << endl;
}

