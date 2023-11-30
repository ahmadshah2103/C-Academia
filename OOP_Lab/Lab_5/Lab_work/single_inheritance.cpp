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

class Derived:public Base {
private:
    int p4;
public:
    Derived(): Base(), p4(4) {cout << "Reporting form Derived's constructor.\n";}

    void showDerived() {
        showBase();
        cout << "Derived's private data: " << p4 << endl;
    }
};


int main() {
    Base b1;
    b1.showBase();

    Derived d1;
    d1.showDerived();

    return 0;
}