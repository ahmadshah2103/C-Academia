#include <iostream>
#include "second.h"

using namespace std;

class third: public second {
protected:
    int t;
public:
    void t_input() {
        s_input();
        cin >> t;
    }
    void max() {
        int max = (f>=s)&&(f>=t) ? f : ((s>=f)&&(s>=t) ? s : t);
        cout << "Max: " << max << endl;
    }
    void show() {
        cout << "f = " << f << endl;
        cout << "s = " << s << endl;
        cout << "t = " << t << endl;
    }

};