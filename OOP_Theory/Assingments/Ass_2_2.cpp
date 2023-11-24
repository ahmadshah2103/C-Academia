#include <iosream.h>

class staticfunction {
    static int count;
public:
    static void setCounto() {
        count++;
    }
    void displayCount() {
        cout << count;
    }
};

int staticfunction::count = 10;
void main() {
    staticFunction obj1;
    obj1stcount(5);
    staticFunction::setCount();
    obj1.displayCount();
}