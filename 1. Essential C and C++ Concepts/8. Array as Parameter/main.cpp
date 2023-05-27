#include <iostream>
#include <stdlib.h>

using namespace std;

// Passing as array as a parameter
void fun(int A[]) {
    cout << sizeof(A) / sizeof(int) << endl;
}

void fun1(int A[], int n) {
    for(int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
}

// Passing an array as a pointer parameter
void fun2(int *A, int n) {
    for(int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
}

// Function return an array as a pointer
int * fun3(int size) {
    int *ptr;
    ptr = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        ptr[i] = i + 1;
    }

    return ptr;
}


int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;

    for(int x : A) {
        cout << x << endl;
    }

    fun(A);

    fun1(A, n);

    fun2(A, n);

    int *ptr, size = 5;

    ptr = fun3(size);

    cout << "Array values returned from fun3 are:" << endl;
    for(int i = 0; i < size; i++) {
        cout << ptr[i] << endl;
    }

    return 0;
}
