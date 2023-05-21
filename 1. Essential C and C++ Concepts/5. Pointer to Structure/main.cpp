#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    // Structure pointer
    struct Rectangle r = {4, 6};

    cout << "Rectangle Length is " << r.length << endl;
    cout << "Rectangle Breadth is " << r.breadth << endl;

    struct Rectangle *pR;
    pR = &r;

    printf("\nRectangle Length using dot operator (.) is %d\n", (*pR).length);
    printf("Rectangle Breadth using dot operator (.) is is %d\n", (*pR).breadth);

    pR->length = 5;
    pR->breadth = 7;

    printf("\nRectangle Length using structure pointer operator (->) is %d\n", pR->length);
    printf("Rectangle Breadth using structure pointer operator (->) is is %d\n", pR->breadth);
    

    // Create structure pointer in the heap
    // using malloc
    struct Rectangle *pRec;
    pRec = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    pRec->length = 20;
    pRec->breadth = 25;

    printf("\nRectangle Length in the heap using malloc is %d\n", pRec->length);
    printf("Rectangle Breadth in the heap using malloc is is %d\n", pRec->breadth);

    free(pRec);

    // using new keyword
    struct Rectangle *newPRec;
    newPRec = new Rectangle;

    newPRec->length = 15;
    newPRec->breadth = 30;

    cout << endl << "Rectangle Length in the heap using new keyword is " << newPRec->length << endl;
    cout << "Rectangle Breadth in the heap using new keyword is " << newPRec->breadth << endl;

    delete [] newPRec;
    return 0;
}
