#include <iostream>
using namespace std;

int main() {
    const int SIZE = 12;
    int numbers[SIZE];

    // Input
    cout << "Enter twelve numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Output
    cout << "The numbers you entered are:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i << ": " << numbers[i] << " ";

        // Display three values in a row
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
