#include <iostream>
using namespace std;

// Function to calculate grade based on marks
char calculateGrade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    string name;

    // Input marks and name
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "Enter your name: ";
    cin.ignore(); // Ignore newline character left in the input buffer
    getline(cin, name);

    // Calculate and display grade
    char grade = calculateGrade(marks);
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
