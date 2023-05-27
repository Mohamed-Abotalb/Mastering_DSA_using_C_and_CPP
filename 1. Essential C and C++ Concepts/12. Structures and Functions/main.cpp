#include <iostream>

using namespace std;

// In this project I will apply structure and some related functions and then convert them to c++ class
struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}


int perimeter(struct Rectangle r) {
    return (2 * (r.length + r.breadth));
}

class RectangleClass {
public:
    int length;
    int breadth;


    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return (2 * (length + breadth));
    }
};

int main()
{
    struct Rectangle r;

    int length = 0, breadth = 0;

    printf("Please enter Length value: ");
    cin >> length;

    printf("Please enter Breadth value: ");
    cin >> breadth;

    initialize(&r, length, breadth);

    printf("The Rectangle Area is %d\n", area(r));
    printf("The Rectangle Perimeter is %d\n", perimeter(r));

    RectangleClass r1;

    r1.initialize(length, breadth);

    printf("The Rectangle Area From RectangleClass is %d\n", r1.area());
    printf("The Rectangle Perimeter From RectangleClass is %d\n", r1.perimeter());
    return 0;
}
