#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int s;

    cout << "Size of array: ";
    cin >> s;

    srand(static_cast<unsigned int>(time(nullptr)));

    int arr[s];
    for(int i = 0; i < s; i++) {
        int* p;
        p = arr + i;
        *p = rand() % 101;
    }

    cout << "Displaying members of array: \n";

    for(int i = 0; i < s; i++) {
        int* p;
        p = arr + i;
        cout << *p << " ";
    }

    int sum = 0;
    for(int i = 0; i < s; i++) {
        int* p;
        p = arr + i;
        sum += *p;
    }

    cout << "\nDisplaying sum of the generated numbers: \n" << sum;

    return 0;
}