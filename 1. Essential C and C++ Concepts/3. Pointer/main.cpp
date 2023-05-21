#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    int x = 6;

    printf("Address of x is %p before creating a pointer\n", &x);

    int *ptr = &x;

    printf("Address of x is %p after creating a pointer\n", ptr);

    printf("Value of x with direct access is %d\n", x);

    printf("Value of x with indirect access is %d\n\n", *ptr);

    // Initialization methods for creating a pointer
    // First Method
    int y = 4;
    int *pY;

    pY = &y;

    // Second Method
    int z = 2;
    int *pZ = &z;

    // Accessing values by using a pointer - Example
    int a, b;
    int *p;

    a = 10;
    b = 3;
    p = &a;

    printf("Value of a before changing is %d\n", a);
    printf("Value of b before changing is %d\n", b);

    // change value of a
    *p = 12;

    p = &b;

    // change value of b
    *p = 5;

    printf("Value of a after changing is %d\n", a);
    printf("Value of b after changing is %d\n\n", b);

    // Pointer and Array
    int array[4] = {1, 2, 3, 5};

    // Accessing the address of the first element of the array in different ways
    printf("Address of first array element is %p\n", &array[0]);
    printf("Address of first array element is %p\n", &array);
    printf("Address of first array element is %p\n\n", array);

    // Pointer Arithmetic
    int arr[3] = {1, 2, 3};

    int *pArr = arr; // pointer refers to the address of the first element

    // Accessing array elements through the pointer
    cout << "Accessing array elements through the pointer" << endl;
    for(int i = 0; i < 3; i++) {
        cout << pArr[i] << endl;
    }

    printf("\nFirst element of the array is %d\n", *pArr);

    pArr++; // pointer refers to the address of the second element
    printf("Second element of the array is %d\n", *pArr);

    pArr++; // pointer refers to the address of the third element
    printf("Third element of the array is %d\n\n",*pArr);

    // Examples about pointer to array with arithmetic operations
    int arr1[3] = {2, 4, 6};
    int *pArr1 = arr1;

    *pArr1 += 4; // value of the first element will be 2 + 4 = 6

    pArr1++; // moves to second element (pArr1 + 4 bytes)
    *pArr1 = 8;

    pArr1++; // moves to third element (pArr1 + 4 bytes)
    *pArr1 = 12;

    pArr1 -= 2; // moves to first element (pArr1 - 8 bytes)
    *pArr1 = 4;

    printf("Array elements are\t");
    for(int i = 0; i < 3; i++, pArr1++) {
        printf("%d\t", *pArr1);
    }

    int numbers[5];
    int *pn;
    pn = numbers;

    // Fill the array
    for(int i = 0; i < 5; i++, pn++) {
        *pn = i + 1;
    }

    // Display the array elements
    for(int i = 0; i < 5; i++) {
        printf("\nnumbers[%d] is %d\n", i, numbers[i]);
    }

    // Create an array by dynamic memory allocation in heap
    // Using malloc function
    int *dynamicPtr;
    dynamicPtr = (int *)malloc(5 * sizeof(int));

    dynamicPtr[0] = 2;
    dynamicPtr[1] = 4;
    dynamicPtr[2] = 6;
    dynamicPtr[3] = 8;
    dynamicPtr[4] = 10;

    cout << endl << "Array elements in the heap using malloc function" << endl;
    for(int i = 0; i < 5; i++) {
        cout << dynamicPtr[i] << endl;
    }

    free(dynamicPtr); // dealloc the taken heap space

    // Using new keyword
    int *newPtr = new int[3];

    newPtr[0] = 1;
    newPtr[1] = 3;
    newPtr[2] = 5;

    cout << endl << "Array elements in the heap using new keyword" << endl;
    for(int i = 0; i < 3; i++) {
        cout << newPtr[i] << endl;
    }

    delete [] newPtr; // dealloc the taken heap space

    // Size of pointer is the same for different data types
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << endl << "Size of int pointer is " << sizeof(p1) << endl;
    cout << "Size of char pointer is " << sizeof(p2) << endl;
    cout << "Size of float pointer is " << sizeof(p3) << endl;
    cout << "Size of double pointer is " << sizeof(p4) << endl;
    cout << "Size of struct pointer is " << sizeof(p5) << endl;

    return 0;
}
