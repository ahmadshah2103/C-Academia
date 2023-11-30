#include <iostream>
#include "BaseClass.h"

using namespace std;

class Derived:public Base {
private:
    int p4;
public:
    Derived(): Base(), p4(4) {cout << "Reporting form Derived's constructor.\n";}
// MAM LOVE YOU
    void showDerived() {
        showBase();
        cout << "Derived's private data: " << p4 << endl;
    }
};