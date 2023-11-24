#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>

using namespace std;

class PhoneDirectory {
public:
    void addContact(const string& filename, const string& name, const string& ph_no) {
        ifstream inputFile(filename,  ios::in);
        if (inputFile.is_open()) {
            unordered_map<string, string> temp;
            string line;
            while(getline(inputFile, line)) {
                size_t delimiterPos = line.find('-');
                if(delimiterPos != string::npos) {
                    string _name = line.substr(0, delimiterPos);
                    string ph_number = line.substr(delimiterPos + 1);
                    temp[_name] = ph_number;
                }

            }
            inputFile.close();

            ofstream outputFile(filename, ios::app);
            if(outputFile.is_open()) {
                if (temp.count(name) == 0) {
                    outputFile << name << '-' << ph_no << endl;
                        cout << "Contact added: " << name << '-' << ph_no << endl;
                } else {
                        cout << "Contact already exists: " << name << endl;
                }
            } else {
                cout << "Unable to open the file: " << filename << endl;
            }
        } else {
            cout << "Unable to open the file: " << filename << endl;
        }
    }

    void deleteContact(const string& filename, const string& name) {
        ifstream existingFile;
        existingFile.open(filename, ios::in);

        if(existingFile.is_open()) {
            unordered_map<string, string> temp;
            string line;
            while(getline(existingFile, line)) {
                size_t delimiterPos = line.find('-');
                if(delimiterPos != string::npos) {
                    string _name = line.substr(0, delimiterPos);
                    string ph_number = line.substr(delimiterPos + 1);
                    temp[_name] = ph_number;
                }
            }
            if (temp.erase(name) == 0) {
                cout << "Contact not found: " << name << endl;
            } else {
                cout << "Contact deleted: " << name << endl;
            }
            existingFile.close();

            ofstream outputFile (filename, ios::out | ios::trunc);
            if (outputFile.is_open()) {
                for(const auto& contact : temp) {
                    outputFile << contact.first << '-' << contact.second << endl;
                }
                cout << "Contacts updated!" << endl;
                outputFile.close();
            } else {
                cout << "Unable to open the file: " << filename << endl;
            }
        } else {
            cout << "Unable to open the file: " << filename << endl;
        }
    }

    void modifyContact(const string& filename, const string& name) {
        ifstream existingFile;
        existingFile.open(filename, ios::in);

        if(existingFile.is_open()) {
            unordered_map<string, string> temp;
            string line;
            while(getline(existingFile, line)) {
                size_t delimiterPos = line.find('-');
                if(delimiterPos != string::npos) {
                    string _name = line.substr(0, delimiterPos);
                    string ph_number = line.substr(delimiterPos + 1);
                    temp[_name] = ph_number;
                }
            }
            if (temp.count(name) == 0) {
                cout << "Contact not found: " << name << endl;
            } else {
                cout << "Enter new phone number for " << name << ": ";
                string newPhoneNumber;
                getline(cin, newPhoneNumber);
                temp[name] = newPhoneNumber;
                cout << "Contact modified: " << name << '-' << temp[name] << endl;
            }
            existingFile.close();

            ofstream outputFile (filename, ios::out | ios::trunc);
            if (outputFile.is_open()) {
                for(const auto& contact : temp) {
                    outputFile << contact.first << '-' << contact.second << endl;
                }
                cout << "Contacts updated!" << endl;
                outputFile.close();
            } else {
                cout << "Unable to open the file: " << filename << endl;
            }
        } else {
            cout << "Unable to open the file: " << filename << endl;
        }
    }

    void searchContact(const string& filename, const string& name) {
        ifstream inputFile(filename,  ios::in);
        if (inputFile.is_open()) {
            unordered_map<string, string> temp;
            string line;
            while(getline(inputFile, line)) {
                size_t delimiterPos = line.find('-');
                if(delimiterPos != string::npos) {
                    string _name = line.substr(0, delimiterPos);
                    string ph_number = line.substr(delimiterPos + 1);
                    temp[_name] = ph_number;
                }
            }
            inputFile.close();
            if (temp.count(name) == 0) {
                cout << "Contact not found: " << name << endl;
            } else {
                cout << "Contact found: " << name << '-' << temp[name] << endl;
            }
        } else {
            cout << "Unable to open the file: " << filename << endl;
        }
    }
};

int main() {
    PhoneDirectory phoneBook;
    int choice = 0;

    while (choice != 6) {
        cout << "Phone Directory Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Modify Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Main Menu" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1: {
                string name, phoneNumber;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);
                phoneBook.addContact("contacts.txt", name, phoneNumber);
                break;
            }
            case 2: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.searchContact("contacts.txt", name);
                break;
            }
            case 3: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.modifyContact("contacts.txt", name);
                break;
            }
            case 4: {
                string name;
                cout << "Enter name: ";
                getline(cin, name);
                phoneBook.deleteContact("contacts.txt", name);
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                cout << "Exiting";
                return 0;
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }
    }
    return 0;
}
