#include <iostream>
using namespace std;

main() {
//------------------------------------------------------------------------
//	int myT = 2;
//	int myC = 0;
//	
//	for(myC = 1; myC < 11; myC++) {
//		if (myC == 5) {
//			continue;
//			break;
//			exit(1);
//		} else {
//			cout<<myT<<"x"<<myC<<"="<<myC*myT<<endl; 
//		}
//	}
//	cout<<"\n We are out of the for loop";
//
//-----------------------------------------------------------------------------
//	int i = 0;
//	int myArr[10];
//	for (i = 0;i < 11;i++) {
//		cin>>*(myArr + i);
//	}
//	
//	cout<<endl<<*myArr<<endl;
//	
//	for (i = 0;i < 11;i++) {
//		cout<<myArr[i];
//	}
//----------------------------------------------------------------------------------

	int arr[5] = {1, 2, 3, 4, 5};
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++) {
		sum += arr[i];
		cout<<sum<<endl;
	}

	cout<<sum;

//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i = 0;
//	
//	do {
//		cout<<"myArray{}"
//	}

} 
