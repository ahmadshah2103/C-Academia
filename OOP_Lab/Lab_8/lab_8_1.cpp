#include <iostream>

using namespace std;


// Our base class
class shape {
protected:
    int area;
public:

    virtual void display() = 0; // pure virtual function
};// End of base class

// 01. Derive class: circle
class circle: public shape {
public:
    void display() override {cout << "Draw circle" << endl;}
};

// 02. Derived class: rectangle
class rectangle: public shape {
public:
    void display() override {cout << "Draw rectangle" << endl;}
};

// 03. Derived clas: triangle
class triangle: public shape {
public:
    void draw() override {cout << "Draw triangle" << endl;}
};

int main() {
    shape *sh; // Shape class pointer object

    circle c1; // Simple objects of derived class
    rectangle r1; // Simple objects of derived class
    triangle t1; // Simple objects of derived class

    sh = &c1;
    sh -> draw();

    sh = &r1;
    sh -> draw();

    sh = &t1;
    sh -> draw();

    return 0;
}