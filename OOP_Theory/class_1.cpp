
#include<iostream>

using namespace std;

int main() {

    int arr[5] = {2, 3, 4, 5, 6};
    int *p;
    p = arr;
    cout << *(p+1);

    return 0;
}