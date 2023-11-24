#include <iostream>

// Access Specifier
// Initializer functions
// Constructor/Destructor
// Inheritance

using namespace std;

class polygon {
private:
    int height;
    int width;
public:
//    constructors
    polygon() {
        width = 5;
        height = 5;
    }

    polygon(int a, int b) {
        width = a;
        height = b;
    }

//    void init(int, int); // Initializer function declaration.

    int area() {
        return height*width;
    }

//    destructor
    ~polygon() {
        cout<<"End of Life"<<endl;
    }
};

// Initializer function definition.
//void polygon::init(int x, int y) {
//    width = x;
//    height = y;
//}

int main() {

    polygon p;

//    p.init(4, 4);
//    q.init(4, 4);

    polygon q(3, 4);

    cout << p.area()<<endl<<q.area()<<endl;

    return 0;
}