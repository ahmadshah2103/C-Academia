#include <iostream>

using namespace std;

//int arrOut(array) {
//	for (int i = 0, )
//}

main () {
	
	int arr[5] = {5, 4, 3, 2, 1};
	int *p;
	p = arr; //pointer refers 1st element of the array
	cout<<p<<endl;
//	cout<<*p<<endl;
	
	*p = 50;
	cout<<*p<<endl;
	
	p++;	//pointer refers 2nd element of the array
	*p = 40;
	cout<<*p<<endl;

	p = &arr[2];	//pointer refers 3rd element of the array
	*p =30;
	cout<<*p<<endl;
	
	p = arr + 3;	//pointer refers 4rth element of the array
	*p = 20;
	cout<<*p<<endl;
	
	p = arr;	//pointer refers 1st element of the array
	cout<<*p<<endl;
	
	*(p + 4) = 10; // OFFSET OPERATOR...(reinitializing the last or 5th element)...
	cout<<arr[4]<<endl<<*p<<endl;
	
}
