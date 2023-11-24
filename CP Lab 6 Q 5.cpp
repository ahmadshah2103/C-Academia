#include <iostream>
#include <math.h>
using namespace std;

void roots(float a, float b, float c, float d);
float deter(float a, float b, float c);

main () {
	float a, b, c;
	
	cout<<"Enter a, b and c: \n";
	
	cin>>a>>b>>c;
	
	if (a == 0) {
		return 0;
	}
	
	float d = deter(a, b, c);
	roots(a,b,c,d);
}

float deter (float a, float b, float c) {
	return (b*b)-(4*a*c);
}

void roots (float a, float b, float c, float d) {
	float r1, r2;
	
	if (d > 0 ) {
		r1 = (-b + sqrt(d))/(2*a);
		r2 = (-b - sqrt(d))/(2*a);
		cout<<"Root 1 = "<<r1<<"Root 2 = "<<r2;
		
	} else if (d == 0) {
		r1 = r2 = -b/(2*a);
		cout<<"Root 1 = Root 2 = "<<r1;
	} else {
		float real = -b/(2*a);
		float img = sqrt(-d)/(2*a);
		cout<<"real root = "<<real<<endl<<"imaginary root = "<<img;
	}
}
