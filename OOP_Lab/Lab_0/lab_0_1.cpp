#include<iostream>

using namespace std;

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float) sum / size;
}

int main() {
    int size = 0;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the element no." << i + 1 << ": ";
        cin >> arr[i];
    }

    float average = calculateAverage(arr, size);
    cout << "Average = " << average;
}