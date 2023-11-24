#include <iostream>
using namespace std;

struct phone {
    string areaCode;
    string exchange;
    string number;
};

int main() {
    phone number1;  // Initialize one object
    number1.areaCode = "091";
    number1.exchange = "767";
    number1.number = "8900";

    phone number2;  // Take input for the second object from the user
    cout << "Enter the area code: ";
    cin >> number2.areaCode;
    cout << "Enter the exchange: ";
    cin >> number2.exchange;
    cout << "Enter the number: ";
    cin >> number2.number;

    cout << "Number 1: (" << number1.areaCode << ") " << number1.exchange << "-" << number1.number << endl;
    cout << "Number 2: (" << number2.areaCode << ") " << number2.exchange << "-" << number2.number << endl;

    return 0;
}
