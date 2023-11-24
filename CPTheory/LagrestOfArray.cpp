#include <iostream>

using namespace std;

//Function that finds the largest number;
int largestNum(int arr[]) {
    int largest = arr[0];
    for (int i = 0; i < 10; ++i) {
        if (largest < arr[i])
            largest = arr[i];
    }

    return largest;
}

int main() {

    int myArr [10]; // Array of ten integers.

    //This loops inputs values from the user and store it in the array.
    for (int i = 0; i < 10; ++i) {
        cout<<"Enter element no. "<<i<<"of the array: ";
        cin>>myArr[i];
    }

    cout<<largestNum(myArr);// Here we pass the array as an argument to the function.

    return 0;
}