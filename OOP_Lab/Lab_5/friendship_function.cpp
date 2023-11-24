#include <iostream>
#include <string>

using namespace std;

class dept;             // Forward declaration of class

class student {
private:
    string id;
    string name;
public:
    student(): id("0"), name("") {}
    student(string i, string n): id(i), name(n) {}
    void show() const {cout << id << endl << name << endl;}

    friend void assignDept(student &s, dept &d, string dName);
};

class dept {
private:
    string deptName;
public:
    dept(string d): deptName(d) {}
    void showDept() const {cout << deptName << endl;}
    friend void assignDept(student &s, dept &d, string dName);
};

void assignDept(student &s, dept &d, string dName) {
    s.name = "Daud Shah";
    d.deptName = dName;
}

int main() {
    student s1("007", "Jamal Khan ");
    dept d1("Agriculture");
    s1.show();     d1.showDept();

    assignDept(s1, d1, "Pushto Department");
    s1.show();     d1.showDept();
}