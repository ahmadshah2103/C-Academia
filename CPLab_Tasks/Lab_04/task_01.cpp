#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    while (true) {
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            cout << "Exiting calculator..." << endl;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
        }
        cout << endl;
    }

    return 0;
}
