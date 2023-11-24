#include <iostream>
#include <string.h>

class article {
public:
    int code;
    char name[20];
    float weight;
    float length;
};

article *plargeobj(article *px) // functional spec
{ article obj; // local object
    obj.code = px->code +1; // increment code
    strcpy(obj.name, px->name); // copy name
    obj.weight = 2 * px->weight; // double weight
    obj.length = 2 * px->length; // double length
    return &obj; // ERROR; WHY?
}

article &rlargeobj(article &x) // functional spec
{ article *p; // pointer
    p = new article; // new article
    p->code = x.code + 1; // increment code
    strcpy(p->name, x.name); // copy name
    p->weight = 2 * x.weight; // double weight
    p->length = 2 * x.length; // double length
    return *p; // return new obj.
}

int main() {
    article a = {246, "Pen", 56, 176};
    article *ptr;
    std::cout << &rlargeobj(a)->;
}