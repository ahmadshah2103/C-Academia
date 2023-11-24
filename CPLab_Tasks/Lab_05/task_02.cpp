#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // Input
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Find minimum, maximum, and calculate average
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        // Update minimum
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }

        // Update maximum
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }

        // Calculate sum
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / SIZE;

    // Output
    cout << "Minimum number: " << minimum << endl;
    cout << "Maximum number: " << maximum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
