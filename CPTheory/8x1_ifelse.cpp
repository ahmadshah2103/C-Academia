#include <iostream>

using namespace std;

void mySelect(bool s[], char sw1, char sw2, char sw3) {
    if (sw1 == 'y') {
        s[0] = 1;
    } else if (sw1 == 'n') {
        s[0] = 0;
    }
    if (sw2 == 'y') {
        s[1] = 1;
    } else if (sw2 == 'n') {
        s[1] = 0;
    }
    if (sw3 == 'y') {
        s[2] = 1;
    } else if (sw3 == 'n') {
        s[2] = 0;
    }
}

string myOutput (bool s[], string f[], string o) {
    if (s[0]) {
        if (s[1]) {
            if (s[2]) {
                o = f[7];
            } else if (!s[2]) {
                o = f[6];
            }
        } else if (!s[1]) {
            if (s[2]) {
                o = f[5];
            } else if (!s[2]) {
                o = f[4];
            }
        }
    } else if (!s[0]) {
        if (s[1]) {
            if (s[2]) {
                o = f[3];
            } else if (!s[2]) {
                o = f[2];
            }
        } else if (!s[1]) {
            if (s[2]) {
                o = f[1];
            } else if (!s[2]) {
                o = f[0];
            }
        }
    }

    return o;
}

int main() {

    char switch1, switch2, switch3;

    string output;

    string fruits[8] = {"Mango", "Apple", "Grapes", "Banana", "Blue Berry", "Raspberry", "Orange", "Peach"};

    bool selectors[3] = {0, 0, 0};

    cin>>switch1>>switch2>>switch3;

    mySelect(selectors, switch1, switch2, switch3);

    output = myOutput(selectors, fruits, output);

    cout<<output;

    return 0;
}