#include<iostream>
using namespace std;

main() {
	int size;
	int min;
	int max;
	float sum = 0;
	float avg;
	
	cout<<"Enter size of array: ";
	cin>>size;
	int *x = new int [size] {0};
	for (int i = 0; i < size; i++) {
		cout<<"Enter element no."<<i+1<<": ";
		cin>>x[i];
	};
	
	min = x[0];
	max = x[0];
	
	for (int i = 0; i < size; i++) {
		sum += x[i];
		
		if (x[i] < min) {
			min = x[i];
		};
		
		if (x[i] > max) {
			max = x[i];
		};
	};
	
	avg = sum/size;
	
	cout<<"This is the minimum: "<<min<<endl;
	cout<<"This is the maximum: "<<max<<endl;
	cout<<"This is the average: "<<avg<<endl;
}
