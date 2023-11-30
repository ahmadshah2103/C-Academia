#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Employee {
protected:
    int employeeID;
    string name;
public:
    Employee(int id = 0, string n = ""): employeeID(id), name(n) {}
    void displayDetails() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager:public Employee {
protected:
    string department;
public:
    Manager(int id = 0, string n = "", string d = ""): Employee(id, n), department(d) {}
    void setDept(string d) {
        department = d;
    }
    string getDept() const {
        return department;
    }
    void manageTeam() const {
        cout << "Managing the team in the " << department << " department." << endl;
    }
    void assignTask() const {
        cout << "Assign tasks to the team in the " << department << " department." << endl;
    }
};

class Intern: public Employee {
private:
    string supervisor;
    int duration;
public:
    Intern(int id = 0, string n = "",string s = "", int d = 0) {
        employeeID = id;
        name  = n;
        supervisor = s;
        duration = d;
    }
    void trackProgress() {
        cout << "Tracking progress of intern under " << supervisor << " for " << duration << " months." << endl;
    }
    void reportActivities() {
        cout << "Reporting activities to " << supervisor << " regularly." << endl;
    }
};


int main() {
    Manager m1(12115, "Khalil Omer", "Marketing");
    m1.displayDetails();
    m1.manageTeam();
    m1.assignTask();
    cout << m1.getDept() << endl;

    Intern i1(15123, "Jamila Shoaib", "Daud Khan", 6);
    i1.displayDetails();
    i1.trackProgress();
    i1.reportActivities();

    return 0;
}