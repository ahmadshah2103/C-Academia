#include <iostream>

using namespace std;

class input {
protected:
    char name[60];
    char reg_no[20];
    int sem_no;
public:
    input() {
        cout<<"Enter name: ";
        cin >> name;
        cout<<"Enter registration number: ";
        cin >> reg_no;
        cout<<"Enter semester number: ";
        cin >> sem_no;
    }
    ~input() {
        cout<<"End of program"<<endl;
    }
};

class output: public input {
public:
    void display() {
        cout<<name<<endl<<reg_no<<endl<<sem_no<<endl;
    }
};

int main() {
    output a, b, c;
    a.display();
    b.display();
    c.display();
}