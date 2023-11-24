#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the discriminant
double deter(double a, double b, double c) {
    return (b * b) - (4 * a * c);
}

// Function to calculate the roots of the quadratic equation
void roots(double a, double b, double c) {
    double discriminant = deter(a, b, c);

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter the coefficients of the quadratic equation:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a == 0) {
        cout << "Value of 'a' must be non-zero. Program terminated." << endl;
    } else {
        roots(a, b, c);
    }

    return 0;
}
