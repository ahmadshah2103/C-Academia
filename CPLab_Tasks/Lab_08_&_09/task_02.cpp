#include <iostream>
using namespace std;

void display(string* arr) {
    cout << "Name: " << arr[0] << endl;
    cout << "Registration Number: " << arr[1] << endl;
}

int main() {
    string arr[2];
    string* arrPtr = arr;

    cout << "Enter your name: ";
    cin >> *(arr);

    cout << "Enter your registration number: ";
    cin >> *(arr+1);

    display(arrPtr);

    return 0;
}
