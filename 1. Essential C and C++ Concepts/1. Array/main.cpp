#include <iostream>

using namespace std;

int main()
{
    // Array Declaration without Initialization
    int arr1[5];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    cout << sizeof(arr1) << endl;
    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;

    // Array Declaration with Initialization
    int arr2[5] = {2, 4, 6, 8, 10};

    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr2[i]);
    }

    // Array Declaration with unknown size
    int arr3[] = {1, 2, 4, 5, 3, 8};

    for(int x : arr3) {
        cout << x << endl;
    }

    // Get the size from the user
    int n;

    printf("Enter the Array size: ");

    cin >> n;

    int arr4[n];

    // Get the value of array element from the user
    for(int i = 0; i < n; i++) {
        printf("Enter the value of element number %d: ", i + 1);
        scanf("%d", &arr4[i]);
    }

    printf("The value of array elements:\n");

    for(int x : arr4) {
        cout << x << endl;
    }

    return 0;
}
