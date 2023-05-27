#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Test {
    int A[5];
    int t;
};

void callByValue(struct Rectangle rec) { // rec is a formal parameter
    rec.length = 16;

    cout << "Rectangle Length is " << rec.length << endl;
    cout << "Rectangle Breadth is " << rec.breadth << endl;
}

void callByAddress(struct Rectangle *ptr) {
    ptr->length = 10;
    ptr->breadth = 5;

    cout << "Rectangle Length is " << ptr->length << endl;
    cout << "Rectangle Breadth is " << ptr->breadth << endl;
}

// Function return a structure pointer created in the heap
struct Rectangle * structurePointer() {
    struct Rectangle *ptr;

    ptr = new Rectangle;
    // ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    ptr->length = 14;
    ptr->breadth = 7;

    return ptr;
};

// Array inside structure
void arrayInsideStructure(struct Test t) {
    t.A[0] = 2;
    t.A[1] = 4;
    t.A[2] = 6;
    t.A[3] = 8;
    t.A[4] = 10;
}

int main()
{
    struct Rectangle r = {12, 8};

    callByValue(r); // r is an actual parameter

    cout << "Rectangle Length and Breadth Values before calling by address are:" << endl;
    cout << "Rectangle Length " << r.length << endl << "Rectangle Breadth " << r.breadth << endl;

    cout << "Rectangle Length and Breadth Values after calling by address are:" << endl;
    callByAddress(&r);

    // using structure pointer returned from the function
    struct Rectangle *ptr = structurePointer();

    cout << "Rectangle Length and Breadth from Structure Pointer:" << endl;
    cout << "Rectangle Length is " << ptr->length << endl;
    cout << "Rectangle Breadth is " << ptr->breadth << endl;

    struct Test t = {{1, 2, 3, 4, 5}, 5};
    arrayInsideStructure(t);

    for(int i = 0; i < 5; i++) {
        cout << t.A[i] << endl;
    }

    return 0;
}
