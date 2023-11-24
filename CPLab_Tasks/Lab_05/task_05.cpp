#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int array[SIZE];
    int key;

    // Input array
    cout << "Enter " << SIZE << " numbers for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> array[i];
    }

    // Input key number
    cout << "Enter the key number: ";
    cin >> key;

    // Compare key with array values
    cout << "Indices of matching values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] == key) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
