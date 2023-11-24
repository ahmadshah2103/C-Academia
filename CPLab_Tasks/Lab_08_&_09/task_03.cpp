#include <iostream>
using namespace std;

double average(int* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (sum) / size;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = 5;

    double avg = average(arr, size);

    cout << "Average: " << avg << endl;

    return 0;
}
