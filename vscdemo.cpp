#include <iostream>
using namespace std;

struct fruits
{
    string color;
    string season;
    string taste;
};

void display (fruits f) {
    cout<<"Color: "<<f.color<<endl;
    cout<<"Season: "<<f.season<<endl;
    cout<<"Taste: "<<f.taste<<endl;
}
    
main () {
    fruits a[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter fruit data:\nColor: ";
        cin>>a[i].color;
        cout<<"Season: ";
        cin>>a[i].season;
        cout<<"Taste: ";
        cin>>a[i].taste;
    }

    for (int i = 0; i < 3; i++)
    {
    display(a[i]);
    }
}
