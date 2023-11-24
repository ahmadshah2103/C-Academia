#include<iostream>

using namespace std;

class Complex {
private:
    double re, im;
public:
    Complex();

    Complex(double r, double i);

    void addCom(Complex c); // Note: add() takes objects as an arguments
    void subCom(Complex c);

    void mulCom(Complex c);

    void input(); // Takes re and im as inputs from the user.
    void show();
};

Complex::Complex() : re(0), im(0) {} // Note: style of constructor here
// Note: style of overloaded constructor here
Complex::Complex(double r, double i) : re(r), im(i) {}

void Complex::addCom(Complex c) {
    re = re + c.re;
    im = im + c.im;
}

void Complex::subCom(Complex c) {
    re = re - c.re;
    im = im - c.im;
}

void Complex::mulCom(Complex c) {
    re = re * c.re - im * c.im;
    im = re * c.im + im * c.re;
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
    Complex c1, c2;
    c1.input();
    c1.show();

    c2.input();
    c2.show();

    c1.addCom(c2);
    c1.show();

    c1.subCom(c2);
    c1.show();

    c1.mulCom(c2);
    c1.show();
    return 0;
}
