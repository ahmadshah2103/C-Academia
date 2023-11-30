#include <iostream>

using namespace std;

class Parent1{
private:
    int p1;
protected:
    int p2;
public:
    int p3;
    Parent1(): p1(1), p2(2), p3(3) {};
    void showParent1() {
        cout << "P1's private data: " << p1 << endl;
        cout << "P1's protected data: " << p2 << endl;
        cout << "P1's public data: " << p3 << endl;
    }
};

class Parent2{
private:
    int p1;
protected:
    int p2;
public:
    int p3;
    Parent2(): p1(1), p2(2), p3(3) {};
    void showParent2() {
        cout << "P2's private data: " << p1 << endl;
        cout << "P2's protected data: " << p2 << endl;
        cout << "P2's public data: " << p3 << endl;
    }
};

class Child:public Parent1, Parent2 {
private:
    int p5;
public:
    Child(): Parent1(), Parent2(), p5(5) {cout << "\nReporting form grandChild's constructor.\n";}

    void showChild() {
        showParent1();
        showParent2();
        cout << "Child's private data: " << p5 << endl;
    }
};


int main() {
    Parent1 p1;
    p1.showParent1();

    Parent2 p2;
    p2.showParent2();

    Child c1;
    c1.showChild();

    return 0;
}