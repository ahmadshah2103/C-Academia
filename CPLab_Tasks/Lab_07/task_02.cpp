#include <iostream>
using namespace std;

// Function to calculate the sum of two values
int calculateSum(int value1 =10, int value2 = 20) {
    return value1 + value2;
}

int main() {
    int value1, value2, sum;

    cout << "Enter two values: ";
    cin >> value1 >> value2;

    if (value1 == 0 || value2 == 0) {
       sum =  calculateSum();
    } else {
        sum = calculateSum(value1, value2);
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
