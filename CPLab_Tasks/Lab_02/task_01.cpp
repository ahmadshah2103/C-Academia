#include <iostream>

using namespace std;

int main() {

    float F, C, K;

    cout<<"Enter temperature in Fahrenheit: ";
    cin>>F;

    C = (F - 32)/1.8;
    K = C + 273;

    cout<<"Temperature in Celsius: "<<C<<endl<<"Temperature in Kelvin: "<<K;


    return 0;
}