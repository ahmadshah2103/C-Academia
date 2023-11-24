#include<iostream>
#include<cstring>

using namespace std;

struct Student {
    char NAME[50];
    int AGE;
    float CGPA;

    Student() {}

    Student(char n[], int a, float c) {
        strcpy(NAME, n);
        AGE = a;
        CGPA = c;
    }

    void show() {
        cout << "Name: " << NAME << endl;
        cout << "Age: " << AGE << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main() {
    Student s1("Ahmad Shah", 21, 3.2);
    Student s2;
    strcpy(s2.NAME, "Abdullah");
    s2.AGE = 20;
    s2.CGPA = 3.5;
    s1.show();
    s2.show();
    return 0;
}