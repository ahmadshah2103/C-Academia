#include<iostream>

using namespace std;

class myClass {
private:
    static int staticVar;
    const int constVar;
public:
    // Constructor: setter for constVar
    myClass(int val): constVar(val) {}
    // setter for staticVar
    static void setStaticVar(int val) {staticVar = val;}
    // getter for constVar
    int getConstVar() {return constVar;}
    // getter for staticVar
    static int getStaticVar() {return staticVar;}
};

int myClass::staticVar = 10;

int main() {
    cout << myClass::getStaticVar() << endl;
    myClass myObj(9);
    cout << myObj.getConstVar() << endl;
}