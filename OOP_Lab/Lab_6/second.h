#include <iostream>
#include "first.h"

using namespace std;

class second: public first {
protected:
    int s;
public:
    void s_input() {
        f_input();
        cin >> s;
    }
};