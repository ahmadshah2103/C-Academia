#include <iostream>
using namespace std;

int calculateSum(int n) {
    if (n <= 0) {
        return 0;
    }
    else {
        if (n % 2 == 1) {
            return n + calculateSum(n - 2);
        }
        else {
            return calculateSum(n - 1);
        }
    }
}

int main() {
    int n;
    cout << "Enter a positive integer value: ";
    cin >> n;

    int sum = calculateSum(n);
    cout << "Sum of odd natural numbers up to " << n << ": " << sum << endl;

    return 0;
}
