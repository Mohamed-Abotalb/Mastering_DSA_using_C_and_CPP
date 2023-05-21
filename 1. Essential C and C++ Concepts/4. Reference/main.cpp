#include <iostream>

using namespace std;

int main()
{
    // When a variable is declared as a reference, it becomes an alternative name for an existing variable.
    // A variable can be declared as a reference by putting ‘&’ in the declaration.

    int a = 10;

    int &r = a;

    cout << "Value of a is " << a << endl;
    cout << "Value of r is " << r << endl;

    a = 5;

    cout << "Value of a is " << a << endl;
    cout << "Value of r is " << r << endl;

    int b = 25;
    r = b;

    cout << "Value of a is " << a << endl;
    cout << "Value of r is " << r << endl;
    return 0;
}
