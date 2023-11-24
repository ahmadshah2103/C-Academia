#include <iostream>

using namespace std;

class innerClass {
public:
    int innerVar;
};

class outerClass {
private:
    innerClass innerObj;
    static int staticVar;
public:
    static void setStaticVar(int val) {staticVar = val;}
    static int setStaticVar() {return staticVar;}

    void setInnerObj(int val) {innerObj.innerVar = val;}
    int getInnerObj() {return innerObj.innerVar;}
};

int outerClass::staticVar = 10;

int main() {
    outerClass outerObj;
    outerObj.setInnerObj(100);
    cout << outerObj.getInnerObj() << endl;

    outerClass *ptrObj = new outerClass();
    ptrObj ->setInnerObj(20);
    cout<< ptrObj -> getInnerObj() << endl;

    free(ptrObj);

    return 0;
}