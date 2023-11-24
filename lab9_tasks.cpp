#include <iostream>
using namespace std;

int sum (int *x, int *y) {
	int sum = *x + *y;
	return sum;
}

main() {
	int arr[5];
		cout<<"Enter array numbers: "<<endl;
	for (int i = 0; i < 4; i++) {
		cin>>arr[i];
	}
	arr[4] = 0;
	
	int n1, n2;
	cout<<"Enter indexes of the number you want to add: "<<endl;
	cin>>n1>>n2;
	
	arr[4] = sum(arr + n1, arr + n2);
	cout<<"the sum of the selected numbers is "<<arr[4];
}
