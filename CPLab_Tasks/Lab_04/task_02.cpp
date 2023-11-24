#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    if (number >= 1 && number <= 10) {
        for (int i = 0; i < number; i++) {
            cout << "*";
        }
        cout << endl;
    } else {
        cout << "Invalid input. Program will now end." << endl;
    }

    return 0;
}
