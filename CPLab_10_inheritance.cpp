#include <iostream>

using namespace std;

class polygon {
protected:
    int width;
    int height;
public:
    polygon() {
        width = 7;
        height = 7;
    }

    void init(int x, int y) {
        width = x;
        height = y;
    }
};

class rectangle: public polygon {
public:
    int area() {
        return width*height;
    }
};

class triangle: public polygon {
public:
    int area() {
        return width*height/2;
    }
};



int main() {

    rectangle r;
    triangle t;

    cout<<r.area()<<endl<<t.area();

    return 0;
}