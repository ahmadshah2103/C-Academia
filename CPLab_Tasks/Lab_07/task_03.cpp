#include <iostream>
using namespace std;

// Function template that calculates the sum of two numbers
template <typename T>
T calculateSum(T num1, T num2) {
    return num1 + num2;
}

int main() {
    int choice;
    cout << "Enter the type of data (1 for int, 2 for float, 3 for double): ";
    cin >> choice;

    if (choice == 1) {
        int num1, num2;
        cout << "Enter two integers: ";
        cin >> num1 >> num2;
        int sum = calculateSum(num1, num2);
        cout << "Sum: " << sum << endl;
    } else if (choice == 2) {
        float num1, num2;
        cout << "Enter two floating-point numbers: ";
        cin >> num1 >> num2;
        float sum = calculateSum(num1, num2);
        cout << "Sum: " << sum << endl;
    } else if (choice == 3) {
        double num1, num2;
        cout << "Enter two double numbers: ";
        cin >> num1 >> num2;
        double sum = calculateSum(num1, num2);
        cout << "Sum: " << sum << endl;
    } else {
        cout << "Invalid choice. Program terminated." << endl;
    }

    return 0;
}