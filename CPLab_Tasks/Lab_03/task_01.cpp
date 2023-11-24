#include <iostream>
using namespace std;

int findLargestNumber(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1 = 10;
    int num2 = 5;
    int num3 = 20;

    int largestNum = findLargestNumber(num1, num2, num3);
    cout << "The largest number is: " << largestNum << endl;

    return 0;
}
