#include <iostream>

using namespace std;

class Exponent{
protected:
    float exp;
public:
    void input_exp() {
        cout << "Enter exponent: "; cin >> exp;
    }
    void show_exp() {
        cout << "Exponent = " << exp << endl;
    }
};