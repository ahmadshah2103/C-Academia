// Data Structures

#include <iostream>
using namespace std;

//	struct fruits {
//		int size;
//		string color;
//	};

struct weapon {
	string wType;
	int damage;
};

struct enemies {
	int health;
	string type;
	bool isAlive;
	weapon w;
};	

void display (enemies a) {
	cout<<a.health<<endl;
	cout<<a.type<<endl;
	cout<<a.isAlive<<endl;
	cout<<a.w.wType<<endl;
	cout<<a.w.damage<<endl;
}
	
main() {
	
	enemies e[1];
	e[0] = {90, "warrior", 1, {"ar", 60}};
	
	for(int i = 0; i < 1; i++) {
		cin>>e[i].health;
		cin>>e[i].type;
		cin>>e[i].isAlive;
		cin>>e[i].w.wType;
		cin>>e[i].w.damage;
	}
	
	for(int i = 0; i < 1; i++) {
		display(e[i]);
	}
	
//	fruits a;
//	a = {20, "red"};
//	
//	cout<<a.color<<endl<<a.size<<endl;
//	cin>>a.size;
//	
//	cout<<a.size;
}

