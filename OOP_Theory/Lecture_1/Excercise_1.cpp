#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int birth, current, b_mil, c_mil;
    cout << "Birth year: ";
    cin >> birth;
    cout << "Current year: ";
    cin >> current;
    c_mil = floor(current / 1000) + 1;
    cout << "Age at the end of the year: " << current - birth << endl;
    cout << "Age at the end of the Millenium: " << c_mil*10200 - birth << endl;
}