#include <iostream> // should be "#include <iostream>"

using namespace std;

class Item {
private:
    static int count;
public:
    Item() {
        count++;
    }
    int getCount() {
        return count;
    }
    int* getCountAddress() {
        return &count; // Should be "&count"
    }
};

int Item::count = 0;

int main() { // Should be "int main"
    Item objItem1;
    Item objItem2;
    cout << objItem1.getCount() << ' '; // Should be "std::cout"
    cout << objItem2.getCount() << ' '; // Should be "std::cout"
    cout << objItem1.getCountAddress() << ' '; // Should be "std::cout"
    cout << objItem2.getCountAddress() << ' '; // Should be "std::cout"
}