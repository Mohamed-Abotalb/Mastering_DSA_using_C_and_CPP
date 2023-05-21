#include <iostream>

using namespace std;

// Structure Definition
struct Rectangle {
    int length;
    int breadth;
};

struct ComplexNum {
    int real;
    int img;
};

struct Student {
    int roll;
    char name[25];
    char dept[20];
    char address[50];
};

struct Card {
    int face;
    int shape;
    int color;
};

// typedef is used to create a type alias for the structure
typedef struct FullName {
    char firstName[25];
    char secondName[25];
} FN;


// Creating nested structures
typedef struct Salary {
    int basic;
    int bonus;
} Salary;

typedef struct Employee {
    int age;
    FN fn;
    Salary salary;
} Emp;


int main()
{
    // Declaring a variable of Rectangle
    struct Rectangle r;
    r.length = 4;
    r.breadth = 5;

    // Declaring a variable of Rectangle with Initialization the values
    struct Rectangle r1 = {6, 9};

    printf("Area of the Rectangle is %d\n", r.length * r.breadth);

    struct ComplexNum c = {2, 6};

    struct Student s = {10, "Mohamed Abotalb", "Computer Science", "Egypt"};

    printf("Student Roll number is %d\n", s.roll);
    printf("Student Name is %s\n", s.name);
    printf("Student Department is %s\n", s.dept);
    printf("Student Address is %s\n", s.address);

    // Creating array of structures
    struct Card deck[52] = { {1, 0, 0}, {2, 0, 0}, {1, 1, 0}, {2, 1, 0} };

    // Accessing deck array members
    printf("First Card Deck Face is %d\n", deck[0].face);
    printf("First Card Deck Shape is %d\n", deck[0].shape);
    printf("First Card Deck Color is %d\n", deck[0].color);

    Emp emp1 = {26, {"Ahmed", "Abotalb"}, {4000, 1000}};

    printf("Employee Age is %d\n", emp1.age);
    printf("Employee Full Name is %s %s\n", emp1.fn.firstName, emp1.fn.secondName);
    printf("Employee Salary is %d\n", emp1.salary.basic + emp1.salary.bonus);

    return 0;
}
