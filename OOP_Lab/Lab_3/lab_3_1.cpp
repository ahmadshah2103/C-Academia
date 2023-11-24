#include <iostream>
#include <cstring>

using namespace std;

class Employee {
private:
    static int totalEmployees;
    int employeeID;
    char name[50];
    char designation[50];
public:
    Employee();
    Employee(int id, char n[50], char d[50]);
    void display();
    void update(int id, char n[50], char d[50]);
    static void displayTotal();
};

int Employee::totalEmployees = 0;
Employee::Employee() {totalEmployees = totalEmployees + 1;}
Employee::Employee(int id, char n[50], char d[50]) {
    employeeID = id;
    strcpy(name, n);
    strcpy(designation, d);
    totalEmployees = totalEmployees + 1;
}
void Employee::display() {
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
}
void Employee::update(int id, char n[50], char d[50]) {
    cout << "Employee " << id << " designation updated successfully." << endl;
    employeeID = id;
    strcpy(name, n);
    strcpy(designation, d);
}
void Employee::displayTotal() {
    cout << "Total employees: " << totalEmployees << endl;
}

int main() {
    Employee::displayTotal();
    Employee a(1, "Ahmad Ali", "Manager");
    a.display();
    Employee b(2, "Sana Murad", "Developer");
    b.display();
    b.update(2, "Sana Murad", "Senior Developer");
    b.display();
    Employee::displayTotal();
    return 0;
}
