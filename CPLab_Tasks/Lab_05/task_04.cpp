#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int array[SIZE];

    // Input
    cout << "Enter " << SIZE << " numbers for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> array[i];
    }

    // Output in reverse order
    cout << "Array elements in reverse order:" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
