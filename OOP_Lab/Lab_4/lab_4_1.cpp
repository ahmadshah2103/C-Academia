#include <iostream>
#include <cstring>

using namespace std;

class employee {
private:
    char* name;
    char* department;
    double salary;
    double years;
public:
    employee(); // No argument constructor...
    employee(char n[], char d[], double s, double y); // 4-argument constructor...
    employee(const employee &e); // Custom deep copy constructor....
    void input(); // Take input from the user...
    void show() const; // Display the details of the employee...
    ~employee(); // Destructor: Deletes the memory, allocated to name and department.
};

employee::employee() { // No argument constructor...
    name = new char[50];
    department = new char[50];
    strcpy(name, "No name");
    strcpy(department, "No dept.");
    salary = 0;
    years = 0;
}

employee::employee(char n[], char d[], double s, double y) { // 4-argument constructor...
    name = new char[strlen(n)+1];
    department = new char[strlen(d)+1];
    strcpy(name, n);
    strcpy(department, d);
    salary = s;
    years = y;
}

employee::employee(const employee &e) { // Custom deep copy constructor....
    name = new char[strlen(e.name)+1];
    department = new char[strlen(e.department)+1];
    strcpy(name, e.name);
    strcpy(department, e.department);
    salary = e.salary;
    years = e.years;
}

void employee::input() {
    name = new char[50];
    department = new char[50];
    cout << "Enter name: "; cin.getline(name, 50);
    cout << "Enter department: "; cin.getline(department, 50);
    cout << "Enter salary: "; cin >> salary;
    cout << "Enter period of service (years): "; cin >> years;
}

void employee::show() const {
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << "k" << endl;
    cout << "Period of service (years): " << years << endl;
}

employee::~employee() {
    delete[] name;
    delete[] department;
}


int main() {
    employee e1;
    e1.input();
    e1.show();

    employee e2;
    e2 = e1;
    e2.show();

    employee e3(e1);
    e3.show();
}