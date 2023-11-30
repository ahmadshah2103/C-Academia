#include <iostream>

using namespace std;

class first {
protected:
    int f;
public:
    void f_input() {cin >> f;}
};
class second: public first {
protected:
    int s;
public:
    void s_input() {
        f_input();
        cin >> s;
    }
};
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

int main() {
    third t1;
    t1.t_input();

    t1.show();

    t1.max();

    return 0;
}