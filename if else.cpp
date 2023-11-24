#include <iostream>
#define newline cout<<endl;
using namespace std;

int main() {
	int custId;
	int units;
	float charges;
	float rate;
	float sur;
	float net;
	
	cout<<"Enter user ID: ";
	cin>>custId;
	cout<<"Enter units consumed: ";
	cin>>units;
	
	if (units>=0) {
		
		if (units>=0 && units<200) {
		rate = 1.20;
	} else if (units>=200 && units<400) {
		rate = 1.50;
	} else if (units>=400 && units<600) {
		rate = 1.80;
	} else {
		rate = 2.00;
	};
	
	charges = units * rate;
	
	charges > 400 ? sur = (charges*25/100): sur = 0;
	
	net = charges + sur;
	
	cout<<"Customer IDNO: "<<custId;
	newline
	cout<<"Units consumed: "<<units;
	newline
	cout<<"Amounts Charges @Rs. "<<rate<<" per unit: "<<charges;
	newline
	if (charges > 400) {
		cout<<"Surcharges Applied!";
		newline
	};
	cout<<"Surcharges Amount: "<<sur;
	newline
	cout<<"Net Amount Paid by the Customer: "<<net;
	return 0;
	} else {
		cout<<"Invalid input!";
	};
}
