#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0;

    printf("Please enter Length value: ");
    cin >> length;

    printf("Please enter Breadth value: ");
    cin >> breadth;

    int area = length * breadth;

    int peri = 2 * (length + breadth);

    printf("Area = %d\nPerimeter = %d\n", area, peri);
    return 0;
}
