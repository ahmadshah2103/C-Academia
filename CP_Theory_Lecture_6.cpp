#include <iostream>

using namespace std;

void swap(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
    cout<<*p<<endl<<*q<<endl;
}

int main() {

    int x = 10;
    int y = 20;

    cout<<x<<endl<<y<<endl;

    swap(&x, &y);

    cout<<x<<endl<<y<<endl;

    return 0;
}