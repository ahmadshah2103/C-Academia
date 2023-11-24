#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    const string accHolderName;
    const string accType;
    const string accNumber;
    float balance = 0;
public:
    BankAccount(string accholder, string acctype, string accnum);
    void deposit(float funds);
    void withdraw(float funds);
    void display() const;
};

BankAccount::BankAccount(const string accholder, const string acctype,const string accnum):
    accHolderName(accholder), accType(acctype), accNumber(accnum) {}

void BankAccount::deposit(float funds) {
    cout << endl;
    if(funds > 0) {
        balance += funds;
        cout << "Amount deposited: " << funds << endl;
    } else {
        cout << "Invalid amount entered!" << endl;
    }
}

void BankAccount::withdraw(float funds) {
    cout << endl;
    if(funds > 0) {
        balance -= funds;
        cout << "Amount withdrawn: " << funds << endl;
    } else {
        cout << "Invalid amount entered!" << endl;
    }
}

void BankAccount::display() const {
    cout << endl;
    cout << "Account details:" << endl;
    cout << "\tAccount holder name: " << accHolderName << endl;
    cout << "\tAccount type: " << accType << endl;
    cout << "\tAccount number: " << accNumber << endl;
    cout << "\tCurrent balance: " << balance << endl;
}

int main() {
    BankAccount acc1("Ahmad Shah", "Current", "14012389345");
    acc1.deposit(30000);
    acc1.withdraw(10000);
    acc1.display();
}