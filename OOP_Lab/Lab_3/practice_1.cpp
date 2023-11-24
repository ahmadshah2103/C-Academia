#include<iostream>

using namespace std;

class MyClass {
private:
    static int staticVar;
    int nonStaticVar;
public:
    static void setStaticVar(int val) {
        staticVar = val;
    }
    static int getStaticVar() {
        return staticVar;
    }
    void setNonStaticVar(int val) {
        nonStaticVar = val;
    }
    int getNonStaticVar() {
        return nonStaticVar;
    }
};

int MyClass::staticVar = 0;

int main() {
    cout << MyClass::getStaticVar() << endl;
    MyClass::setStaticVar(10);
    cout << MyClass::getStaticVar() << endl;
    MyClass obj;
    obj.setNonStaticVar(36);
    cout << obj.getNonStaticVar() << endl;

    return 0;
}