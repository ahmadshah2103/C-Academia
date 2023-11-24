#include <iostream>

using namespace std;


int add(int arr[]) {
    return *arr + *(arr+1);
}

int main () {

    int arr[2] = {1, 2};

    cout<<add(arr);

    return 0;
}