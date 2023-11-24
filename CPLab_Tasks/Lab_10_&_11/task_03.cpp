#include <iostream>
#include <map>
using namespace std;

struct Student_t {
    string name;
    string regNo;
    int semesterNo;
};

int main() {
    map<string, Student_t> studentMap;
    string regNo;

    while (true) {
        cout << "Enter student's registration number (or 'quit' to exit): ";
        cin >> regNo;

        if (regNo == "quit") {
            break;
        }

        Student_t student;

        cout << "Enter student's name: ";
        cin >> student.name;

        cout << "Enter student's semester number: ";
        cin >> student.semesterNo;

        student.regNo = regNo;

        studentMap[regNo] = student;
    }

    cout << endl;

    while (true) {
        cout << "Enter a registration number to display student's information (or 'quit' to exit): ";
        cin >> regNo;

        if (regNo == "quit") {
            break;
        }

        if (studentMap.find(regNo) != studentMap.end()) {
            Student_t student = studentMap[regNo];

            cout << "Student's Name: " << student.name << endl;
            cout << "Registration Number: " << student.regNo << endl;
            cout << "Semester Number: " << student.semesterNo << endl;
        }
        else {
            cout << "Student with registration number " << regNo << " does not exist." << endl;
        }

        cout << endl;
    }

    return 0;
}
