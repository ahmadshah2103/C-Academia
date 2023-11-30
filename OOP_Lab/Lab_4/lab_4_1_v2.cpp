#include <iostream>
#include <cstring>

class Employee {
private:
    char* name;
    char* department;
    double salary;
    double yearsOfService;

public:
    // Parameterless constructor
    Employee() {
        name = new char[20];
        strcpy(name, "John Doe");
        department = new char[20];
        strcpy(department, "IT");
        salary = 50000.0;
        yearsOfService = 1.0;
    }

    // Parameterized constructor
    Employee(const char* empName, const char* empDept, double empSalary, double serviceYears) {
        name = new char[strlen(empName) + 1];
        strcpy(name, empName);
        department = new char[strlen(empDept) + 1];
        strcpy(department, empDept);
        salary = empSalary;
        yearsOfService = serviceYears;
    }

    // Copy constructor
    Employee(const Employee& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        department = new char[strlen(other.department) + 1];
        strcpy(department, other.department);
        salary = other.salary;
        yearsOfService = other.yearsOfService;
    }

    // Input function
    void input() {
        char empName[50], empDept[50];
        std::cout << "Enter employee name: ";
        std::cin.getline(empName, 50);
        name = new char[strlen(empName) + 1];
        strcpy(name, empName);

        std::cout << "Enter employee department: ";
        std::cin.getline(empDept, 50);
        department = new char[strlen(empDept) + 1];
        strcpy(department, empDept);

        std::cout << "Enter employee salary: ";
        std::cin >> salary;

        std::cout << "Enter years of service: ";
        std::cin >> yearsOfService;
        std::cin.ignore(); // Ignore newline character
    }

    // Show function
    void show() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Years of Service: " << yearsOfService << std::endl;
    }

    // Destructor
    ~Employee() {
        std::cout << "Object of name: [" << name << "]  deleted!" << std::endl;
        delete[] name;
        delete[] department;
    }
};


int main() {
    Employee e1;
    e1.input();
    e1.show();

    Employee e2;
    e2 = e1;
    e2.show();

    Employee e3(e1);
    e3.show();
}