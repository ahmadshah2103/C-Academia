#include <iostream>
#include <string>

using namespace std;

class student {
private:
    string id;
    string name;
public:
    student(): id("0"), name("") {}
    student(string i, string n): id(i), name(n) {}
    void show() const {cout << id << endl << name << endl;}

    friend class dept;
};

class dept {
private:
    string deptName;
public:
    dept(string d): deptName(d) {}
    void showDept() const {cout << deptName << endl;}
    void assignDept(student &s, string dName);
};

void dept::assignDept(student &s, string dName) {
    s.name = "Daud Shah";
    deptName = dName;
}

int main() {
    student s1("007", "Jamal Khan Swati");
    dept d1("Agriculture");
    s1.show();     d1.showDept();

    d1.assignDept(s1, "Pushto Department");
    s1.show();     d1.showDept();
}