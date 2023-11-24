#include<iostream>

using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex(): re(0), im(0) {};
    Complex(double r, double i) {
        re = r;
        im = i;
    }
    void show() {
        cout << "Complex number is: " << re << " + i" << im << endl;
    }

    void setRe(double r) {
        re = r;
    }
    void setIm(double i) {
        im = i;
    }

};

int main() {

    Complex c1;
    c1.show();

    Complex c2(2, 4);
    c2.show();

    return 0;
}