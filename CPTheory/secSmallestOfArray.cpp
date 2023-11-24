#include <iostream>

using namespace std;

int secSmallestNum(int arr[]) {
    // INT_MAX is the largest possible non-signed integer.
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;

    //This loop find the smallest element.
    for (int i = 0; i < 10; ++i) {
        if (smallest > arr[i]) {
            secSmallest = smallest;
            smallest = arr[i];
        }
    }

    //This loop finds the second-smallest element.
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < secSmallest && arr[i] != smallest)
            secSmallest = arr[i];
    }

    return secSmallest;
}

int main() {

    int myArr [10]; //Declared an array of ten elements.

    //This loop takes input from the user and store it in the array.
    for (int i = 0; i < 10; ++i) {
        cin>>myArr[i];
    }

    cout<<secSmallestNum(myArr); //The array is then passed into the function,  we defined at the start,  as an argument.

    return 0;
}