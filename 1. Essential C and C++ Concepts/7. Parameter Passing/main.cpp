#include <iostream>

using namespace std;

// Parameter passing is about 3 types:
// Pass by value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Pass by address using pointer
void swapByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Pass by reference using reference operator (&)
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Value of a before swapByValue is " << a << endl;
    cout << "Value of b before swapByValue is " << b << endl;

    swapByValue(a, b);

    cout << endl << "Value of a after swapByValue is " << a << endl;
    cout << "Value of b after swapByValue is " << b << endl;

    int c = 4, d = 8;

    cout << endl << "Value of c before swapByAddress is " << c << endl;
    cout << "Value of d before swapByAddress is " << d << endl;

    swapByAddress(&c, &d);

    cout << endl << "Value of c after swapByAddress is " << c << endl;
    cout << "Value of d after swapByAddress is " << d << endl;

    int e = 3, g = 6;

    cout << endl << "Value of e before swapByReference is " << e << endl;
    cout << "Value of g before swapByReference is " << g << endl;

    swapByReference(e, g);

    cout << endl << "Value of e after swapByReference is " << e << endl;
    cout << "Value of g after swapByReference is " << g << endl;
    return 0;
}
