#include <iostream>

using namespace std;

int main() {

    char name[60];

    cout<<"Enter your name please!\n";
    cin.getline(name, 60);

    cout<<"Your name is "<<name;

    return 0;
}