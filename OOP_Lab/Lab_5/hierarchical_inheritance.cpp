#include <iostream>

using namespace std;

class Base {
private:
    int p1;
protected:
    int p2;
public:
    int p3;
    Base(): p1(1), p2(2), p3(3) {};
    void showBase() {
        cout << "private data: " << p1 << endl;
        cout << "protected data: " << p2 << endl;
        cout << "public data: " << p3 << endl;
    }
};

class Derived1:public Base {
private:
    int p4;
public:
    Derived1(): Base(), p4(4) {cout << "\nReporting form Derived1's constructor.\n";}

    void showDerived1() {
        showBase();
        cout << "Derived's private data: " << p4 << endl;
    }
};

class Derived2:public Base {
private:
    int p5;
public:
    Derived2(): Base(), p5(5) {cout << "\nReporting form Derived2's constructor.\n";}

    void showDerived2() {
        showBase();
        cout << "Derived's private data: " << p5 << endl;
    }
};


int main() {
    Base b1;
    b1.showBase();

    Derived1 d1;
    d1.showDerived1();

    Derived2 d2;
    d2.showDerived2();

    return 0;
}
