#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void setLength(int l) {
        length = l;
    }

    void setBreadth(int b) {
        breadth = b;
    }

    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return (2 * (length + breadth));
    }

    ~Rectangle() {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Rectangle r(10, 8);

    cout << "Rectangle Area = " << r.area() << endl;

    cout << "Rectangle Perimeter = " << r.perimeter() << endl;
    return 0;
}
