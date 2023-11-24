#include<iostream>
#include<cstring>

using namespace std;

struct Product {
    int PRODUCT_ID;
    char NAME[50];
    float PRICE;

    Product() {
        PRODUCT_ID = -1;
        strcpy(NAME, "no name");
        PRICE = 0;
    }

    Product(int id, char n[], float price) {
        PRODUCT_ID = id;
        strcpy(NAME, n);
        PRICE = price;
    }

    void displayInfo() {
        cout << "Product Id: " << PRODUCT_ID << endl;
        cout << "Name: " << NAME << endl;
        cout << "Price: " << PRICE << endl;
    }
};

int main() {
    Product product1(123, "Toy", 49.9);
    Product product2;
    product2.PRODUCT_ID = 135;
    strcpy(product2.NAME, "Watch");
    product2.PRICE = 99.9;

    product1.displayInfo();
    product2.displayInfo();

    return 0;
}