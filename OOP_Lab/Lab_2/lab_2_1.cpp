#include<iostream>

using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex();

    Complex(double r, double i);

    void addCom(Complex c1, Complex c2); // Note: add() takes objects as an arguments
    void subCom(Complex c1, Complex c2);

    void mulCom(Complex c1, Complex c2);

    void input(); // Takes re and im as inputs from the user.
    void show();
};

Complex::Complex() : re(0), im(0) {} // Note: style of constructor here
// Note: style of overloaded constructor here
Complex::Complex(double r, double i) : re(r), im(i) {}

void Complex::addCom(Complex c1, Complex c2) {
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

void Complex::subCom(Complex c1, Complex c2) {
    re = c1.re - c2.re;
    im = c1.im - c2.im;
}

void Complex::mulCom(Complex c1, Complex c2) {
    re = c1.re * c2.re - c1.im * c2.im;
    im = c1.re * c2.im + c1.im * c2.re;
}

void Complex::input() {
    cout << "Enter real part: \n";
    cin >> re;
    cout << "Enter imaginary part: \n";
    cin >> im;
}

void Complex::show() {
    cout << re << "+" << im << "i" << endl;
}

int main() {
    Complex c1(3, 2.5), c2(5, 3), c;
    c1.input();
    c1.show();

    c2.input();
    c2.show();

    c.addCom(c1, c2);
    c.show();

    c.subCom(c1, c2);
    c.show();

    c.mulCom(c1, c2);
    c.show();
    return 0;
}
