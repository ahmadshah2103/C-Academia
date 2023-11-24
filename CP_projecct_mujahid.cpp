#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    string name;
    string phoneNumber;
    string location;
};

class Tailor {
public:
    void createOrder() {
        Customer customer;

        cout << "Enter customer details:" << endl;
        cout << "Name: ";
        cin >> customer.name;
        cout << "Phone Number: ";
        cin >> customer.phoneNumber;
        cout << "Location: ";
        cin >> customer.location;
        cout << endl;

        cout << "Select the type of clothing:" << endl;
        cout << "1. Paint Shirt" << endl;
        cout << "2. Shalwar Qamees" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                createOrderDetails("Paint Shirt", customer);
                break;
            case 2:
                createOrderDetails("Shalwar Qamees", customer);
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    void createOrderDetails(const string& clothingType, const Customer& customer) {
        cout << "Order details for " << clothingType << ":" << endl;
        cout << "Customer Name: " << customer.name << endl;
        cout << "Phone Number: " << customer.phoneNumber << endl;
        cout << "Location: " << customer.location << endl;

        if (clothingType == "Shalwar Qamees") {
            float chest, waist, hip, length;
            cout << "Enter measurements for Shalwar Qamees:" << endl;
            cout << "Chest: ";
            cin >> chest;
            cout << "Waist: ";
            cin >> waist;
            cout << "Hip: ";
            cin >> hip;
            cout << "Length: ";
            cin >> length;
            // Process the measurements as per your requirements
        }
    }
};

int main() {
    cout<<"==================================="<<endl;
    cout<<"Welcome to Mujahid Cloth House"<<endl;
    cout<<"==================================="<<endl;
    Tailor tailor;
    tailor.createOrder();

    return 0;
}
