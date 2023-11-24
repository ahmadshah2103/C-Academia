#include <iostream>
using namespace std;

void minmax(int a, int b, int c, int d) {
    int minimum = a;  // Assume a as the minimum number
    int maximum = a;  // Assume a as the maximum number

    // Update minimum and maximum if necessary
    if (b < minimum) {
        minimum = b;
    }
    if (c < minimum) {
        minimum = c;
    }
    if (d < minimum) {
        minimum = d;
    }
    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }
    if (d > maximum) {
        maximum = d;
    }

    // Display minimum and maximum numbers
    cout << "Minimum number: " << minimum << endl;
    cout << "Maximum number: " << maximum << endl;
}

int main() {
    int num1, num2, num3, num4;

    cout << "Enter four integers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    minmax(num1, num2, num3, num4);

    return 0;
}
