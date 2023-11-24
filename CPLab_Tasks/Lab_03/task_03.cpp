#include <iostream>
using namespace std;

int findGreaterNumber(int a, int b) {
    int greater = (a > b) ? a : b;
    return greater;
}

int main() {
    int num1 = 10;
    int num2 = 15;

    int greaterNum = findGreaterNumber(num1, num2);
    cout << "The greater number is: " << greaterNum << endl;

    return 0;
}
