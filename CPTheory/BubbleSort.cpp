#include <iostream>

using namespace std;

void bubbleSort(int arr[], int arrLength) {

    for (int i = 0; i < arrLength; ++i) {

        for (int j = 0; j < arrLength - i; ++j) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            } else {
                continue;
            }

        }
    }
}

int main() {
    int myArr[10];

    cout<<"Enter array elements: \n";

    for (int i = 0; i < 10; ++i) {
        cin>>myArr[i];
    }

    bubbleSort(myArr, 10);

    for (int i = 0; i < 10; ++i) {
        cout << myArr[i] << "\t";
    }


    return 0;
}