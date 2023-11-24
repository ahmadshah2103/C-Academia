#include <iostream>
using namespace std;

float percentage (float x) {
	float p = (x / 150)*100;
	return p;
}

char gpa (float x) {
	char grades;
	float perc = percentage(x);
	if (perc <= 100 && perc >= 90) {
		grades = 'A';
	} else if (perc < 90 && perc >= 80) {
		grades = 'B';
	} else if (perc < 80 && perc >= 70) {
		grades = 'C';
	} else if (perc < 70 && perc >= 60) {
		grades = 'D';
	} else if (perc < 60 && perc >= 50) {
		grades = 'E';
	} else {
		grades = 'F';
	}
	
	return grades;
}

int caller (int x, int y) {
	if (x == 1) {
		cout<<gpa(y);
	} else if (x == 2) {
		cout<<percentage(y);
	} else {
		cout<<"Invalid option";
		return 0;
	}
}

main () {
	int marks;
	int option = 0;
	cout<<"Enter marks: ";
	cin>>marks;
	cout<<"What you want to calculate (1: GPA, 2: Percentage): "<<endl;
	cin>>option;
	caller(option, marks);
	
	
}
