#include <iostream>
using namespace std;

double percentage(int marks) {
    return (static_cast<double>(marks) / 100) * 100;
}

double GPA(int marks) {
    if (marks >= 90 && marks <= 100)
        return 4.0;
    else if (marks >= 80 && marks < 90)
        return 3.7;
    else if (marks >= 70 && marks < 80)
        return 3.3;
    else if (marks >= 60 && marks < 70)
        return 3.0;
    else if (marks >= 50 && marks < 60)
        return 2.7;
    else if (marks >= 40 && marks < 50)
        return 2.3;
    else if (marks >= 30 && marks < 40)
        return 2.0;
    else
        return 0.0;
}

void caller(int marks, double (*func)(int)) {
    double result = func(marks);
    cout << "Result: " << result << endl;
}

int main() {
    int marks;
    char choice;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Enter 'P' to find percentage or 'G' to find GPA: ";
    cin >> choice;

    if (choice == 'P')
        caller(marks, percentage);
    else if (choice == 'G')
        caller(marks, GPA);
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
