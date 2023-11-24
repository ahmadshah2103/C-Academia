#include <iostream>
using namespace std;

int main() {
    int value1, value2;
    int* result = nullptr;

    cout << "Enter two values: ";
    cin >> value1 >> value2;

    // Allocate memory for the result pointer
    result = new int;

    // Add the values using the pointer
    *result = value1 + value2;

    cout << "Result: " << *result << endl;

    // Deallocate the memory
    delete result;

    return 0;
}
