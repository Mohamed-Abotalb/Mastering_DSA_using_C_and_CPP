#include <iostream>

using namespace std;

// Normal class
class Arithmetic {
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int add() {
        return this->a + this->b;
    }

    int sub() {
        return this->a - this->b;
    }
};

// Generic Class
template <class T>
class GenericArithmetic {
private:
    T a;
    T b;

public:
    GenericArithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
GenericArithmetic<T>::GenericArithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template <class T>
T GenericArithmetic<T>::add() {
    return this->a + this->b;
}

template <class T>
T GenericArithmetic<T>::sub() {
    return this->a - this->b;
}

int main()
{
    Arithmetic ar(10, 8);

    cout << "Add " << ar.add() << endl;
    cout << "Sub " << ar.sub() << endl;

    GenericArithmetic<int> intAR(15, 5);

    cout << "Integer Add " << intAR.add() << endl;
    cout << "Integer Sub " << intAR.sub() << endl;

    GenericArithmetic<float> floatAR(10.5, 8.2);

    cout << "Float Add " << floatAR.add() << endl;
    cout << "Float Sub " << floatAR.sub() << endl;
    return 0;
}
