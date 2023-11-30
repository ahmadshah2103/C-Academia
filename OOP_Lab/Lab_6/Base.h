#include <iostream>

using namespace std;

class Base{
protected:
    float base;
public:
    void input_base() {
        cout << "Enter base: "; cin >> base;
    }
    void show_base() {
        cout << "Base = " << base << endl;
    }
};