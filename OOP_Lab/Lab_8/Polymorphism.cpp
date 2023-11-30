#include <iostream>

using namespace std;

#if(0)
// Our base class
class shape {
public:
    virtual void draw() override {cout << "Draw shape" << endl;} // simple virtual function
};// End of base clss
}
#endif

// Our base class
//  abstract class
class shape {
public:
    virtual void draw() = 0; // pure virtual function
};// End of base class

// 01. Derive class: circle
class circle: public shape {
public:
    void draw() override {cout << "Draw circle" << endl;}
};

// 02. Derived class: rectangle
class rectangle: public shape {
public:
    void draw() override {cout << "Draw rectangle" << endl;}
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