#include <iostream>
using namespace std;


struct genre {
	string type;
};

struct music {
	string album;
	int releaseYear;
	genre g;
};	

void display (music a) {
	cout<<a.album<<endl;
	cout<<a.releaseYear<<endl;
	cout<<a.g.type<<endl;
}
	
main() {
	
	music m[3];
	
	for(int i = 0; i < 3; i++) {
		cout<<"Album name: ";
		cin>>m[i].album;
		cout<<"Release year: ";
		cin>>m[i].releaseYear;
		cout<<"Genre: ";
		cin>>m[i].g.type;
	}
	
	for(int i = 0; i < 3; i++) {
		display(m[i]);
	}
}
