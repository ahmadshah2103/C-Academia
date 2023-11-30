#include <iostream>
#include <cmath>
#include "Base.h"
#include "Exponent.h"

using namespace std;

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