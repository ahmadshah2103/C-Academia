#include<iostream>

using namespace std;

class LightBulb {
private:
    bool isOn;
public:
    LightBulb(): isOn(false){};
    void turnOn() {
        isOn = true;
    }
    void turnOff() {
        isOn = false;
    }
    bool getState() {
        return isOn;
    }
    void show() {
        if (getState()) {
            cout << "The light is on!" << endl;
        } else {
            cout << "The light is off!" << endl;
        }
    }
};

int main() {
    LightBulb l1;
    l1.show();

    l1.turnOn();
    l1.show();

    l1.turnOff();
    l1.show();
}