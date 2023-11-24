#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
};

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int height, width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    drawRectangle(height, width);

    return 0;
}
