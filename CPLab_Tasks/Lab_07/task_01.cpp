#include <iostream>
using namespace std;

void printNameAndRegistration(int count) {
    if (count <= 0) {
        return;
    }

    cout << "Name: Ahmad Shah" << endl;
    cout << "Registration Number: 2103" << endl;

    printNameAndRegistration(count - 1);
}

int main() {
    int count = 10;

    printNameAndRegistration(count);

    return 0;
}
