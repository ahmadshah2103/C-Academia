#include <iostream>
#include <fstream>
#define iofile contacts.txt;

using namespace std;

class contact {
protected:
    string name;
    string ph_number;
    string email;
};

class directory: public contact {
public:
    void addContact(const string& name, const string& phoneNumber, const string& email) {
        directory c;
        c.name = name;
        c.ph_number = phoneNumber;
        c.email = email;
        cout << "Contact added: " << name << " - " << phoneNumber << endl;
    }

    void saveToFile()

    void removeContact(const string& name) {
        if (directory.erase(name) == 0) {
            cout << "Contact not found: " << name << endl;
        } else {
            cout << "Contact removed: " << name << endl;
        }
    }
    void searchContact(const string& name) {
        if (directory.count(name) == 0) {
            cout << "Contact not found: " << name << endl;
        } else {
            cout << "Contact found: " << name << " - " << directory[name] << endl;
        }
    }

    void modifyContact(const string& name) {
        if (directory.count(name) == 0) {
            cout << "Contact not found: " << name << endl;
        } else {
            cout << "Enter new phone number for " << name << ": ";
            string newPhoneNumber;
            getline(cin, newPhoneNumber);
            directory[name] = newPhoneNumber;
            cout << "Contact modified: " << name << " - " << directory[name] << endl;
        }
    }
};

int main() {
    directory phoneBook;
    ofstream myFile("contacts.txt");
    int choice = 0;

    while (choice != 6) {
        cout << "Phone Directory Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Remove Contact" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Modify Contact" << endl;
        cout << "5. Main Menu" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1: {
                string name, phoneNumber, email;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                cout << "Enter email address: ";
                getline(cin, email);
                phoneBook.addContact(name, phoneNumber, email);
                break;
            }
            case 2: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.removeContact(name);
                break;
            }
            case 3: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.searchContact(name);
                break;
            }
            case 4: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.modifyContact(name);
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }

    return 0;
}
