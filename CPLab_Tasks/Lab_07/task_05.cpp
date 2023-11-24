#include <iostream>
using namespace std;

float grade(int x) {
    return x / 150.0 * 100.0;
};

char grade(float y) {
    if (y >= 90 && y <= 100) {
        return 'A';
    } else if (y >= 80 && y < 90) {
        return 'B';
    } else if (y >= 70 && y < 80) {
        return 'C';
    } else if (y >= 60 && y < 70) {
        return 'D';
    } else if (y < 60) {
        return 'F';
    };
};

void grade() {

    int marks;
    float perc;
    char grades;

    cout<<"Enter marks: ";
    cin>>marks;
    perc = grade(marks);
    grades = grade(perc);
    cout<<"Your grades : "<<grades<<endl;
    cout<<"Marks obtained : "<<marks<<endl;
    cout<<"Percentage : "<<perc<<endl;
};


main () {

    grade();

}
