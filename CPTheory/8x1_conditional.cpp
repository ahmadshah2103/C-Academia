#include <iostream>

using namespace std;

void mySelect(bool s[], char sw1, char sw2, char sw3) {

    s[0] = sw1 == 'y';
    s[1] = sw2 == 'y';
    s[2] = sw3 == 'y';
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

    string fruits[8] = {"Mango", "Apple", "Grapes", "Banana", "Blueberry", "Raspberry", "Orange", "Peach"};

    bool selectors[3] = {false, false, false};

    cin>>switch1>>switch2>>switch3;

    mySelect(selectors, switch1, switch2, switch3);

    output = myOutput(selectors, fruits, output);

    cout<<output;

    return 0;
}