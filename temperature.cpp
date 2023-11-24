#include <iostream>
using namespace std;

main() {
	float f, c, k;
	cout<<"Enter the temperatue: ";
	cin>>f;
	
	c = (f - 32)/1.8;
	
	k = c + 273;
	
	cout<<"Temperature in kelvins: "<<k;
	cout<<endl;
	cout<<"Temperature in celsius: "<<c;
}

