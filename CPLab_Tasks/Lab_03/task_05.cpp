#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 5 == 0 && number % 7 == 0 && number % 11 != 0) {
        cout << number << " satisfies all conditions." << endl;
    } else {
        cout << number << " does not satisfy all conditions." << endl;
    }

    return 0;
}