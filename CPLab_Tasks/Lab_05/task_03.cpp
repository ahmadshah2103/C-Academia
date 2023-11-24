#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int array1[SIZE], array2[SIZE], sum[SIZE];

    // Input array1
    cout << "Enter " << SIZE << " numbers for array1:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> array1[i];
    }

    // Input array2
    cout << "Enter " << SIZE << " numbers for array2:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> array2[i];
    }

    // Calculate sum
    for (int i = 0; i < SIZE; i++) {
        sum[i] = array1[i] + array2[i];
    }

    // Output
    cout << "The sum of the arrays is:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array1[i] << " + " << array2[i] << " = " << sum[i] << endl;
    }

    return 0;
}
