#include <iostream>
using namespace std;

// Function template for swapping values
template <class T>
void swapValues(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10, b = 20;
    float p = 1.5, q = 2.8;
    char c1 = 'A', c2 = 'B';

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    // Using the same function for different data types
    swapValues(a, b);
    swapValues(p, q);
    swapValues(c1, c2);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "p = " << p << ", q = " << q << endl;
    cout << "c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
