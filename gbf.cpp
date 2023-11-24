#include <iostream>
#define line cout<<endl;
using namespace std;

main () {
	int check, people=0, red=0, green=0, blue=0, yellow=0;
	
	while(check != -1) {
		cout<<"1: Red, 2: Green, 3: Blue, 4: Yellow\nVote for your favourite color: ";
		cin>>check;
		if (check == 1) {
			red++;
		} else if (check == 2) {
			green++;
		} else if (check == 3) {
			blue++;
		} else if (check == 4) {
			yellow++;
		} else if (check == -1) {
			cout<<"Survey completed!";
		} else {
			cout<<"Invalid color number entered!\n";
		};
		people++;
	}
	cout<<"Number of people surveyed: "<<people-1;
	line
	cout<<"Number of votes: ";
	line
	cout<<"Red: "<<red;
	line
	cout<<"Green: "<<green;
	line
	cout<<"Blue: "<<blue;
	line
	cout<<"Yellow: "<<yellow;
	line
	
	if (red>green && red>blue && red>yellow) {
		cout<<"Most favourite color is Red";
	} else
	if (green>red && green>blue && green>yellow) {
		cout<<"Most favourite color is Green";
	} else
	if (blue>red && blue>green && blue>yellow) {
		cout<<"Most favourite color is Blue";
	} else {
		cout<<"Most favourite color is Yellow";
	};
	
}
