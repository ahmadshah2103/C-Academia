#include <iostream>
using namespace std;

main() {
	int x;
	char pro;
	
	for(;;) {
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Do want to increment (y) or decrement (n)? ";
	cin>>pro;
	
	pro == 'y' ? x++ :(pro == 'n' ? x-- : cout<<"invalid input character!" );
	
	cout<<x<<endl;
	
}
}	

