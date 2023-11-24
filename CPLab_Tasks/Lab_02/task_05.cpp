#include <iostream>

using namespace std;

main() {
    int a, b, temp;
    a = 10;
    b = 5;

    cout<<"Initially, a = "<<a<<" and b = "<<b<<".\n"<<"Swap with using third variable"<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    cout<<endl<<"Now without third variable"<<endl;

    a = 10;
    b = 5;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}