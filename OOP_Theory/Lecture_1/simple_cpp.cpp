#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
#if 0
    cout << "this is a ball." << endl;
    cout << "this is a ball." << endl;
    cout << "this is a ball." << endl;
#endif
    cout << "Enter two integers: "; // Display
    int a, b; // request
    cin >> a >> b; // Reads a and b

    int sum = a + b,
        diff = a - b,
        u = sum * sum,
        v = diff * diff;

    cout << "Square of sum : " << u << endl;
    cout << "Square of difference: " << v << endl;
    return 0;
} 