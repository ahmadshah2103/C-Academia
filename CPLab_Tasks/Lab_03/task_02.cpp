#include <iostream>
using namespace std;

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}

int main() {
    int num1 = 10;
    int num2 = 15;

    checkEvenOdd(num1);
    checkEvenOdd(num2);

    return 0;
}
