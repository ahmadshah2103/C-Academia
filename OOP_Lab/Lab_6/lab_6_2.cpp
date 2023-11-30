#include <iostream>
#include <cmath>

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
class Power: public Base, Exponent {
protected:
    float power;
public:
    Power(): power(1) {}
    void in1() {
        input_base();
        input_exp();
    }
    void show1() {
        show_base();
        show_exp();
        cout << "Power = " << pow(base, exp) << endl;
    }
};


int main() {
    Power p1;
    p1.in1();
    p1.show1();

    return 0;
}