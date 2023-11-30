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
    void showBase() const {
        cout << "private data: " << p1 << endl;
        cout << "protected data: " << p2 << endl;
        cout << "public data: " << p3 << endl;
        // mam love you
    }
};