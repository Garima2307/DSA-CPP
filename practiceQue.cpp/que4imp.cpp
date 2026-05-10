#include <iostream>
using namespace std;

int main() {
    double d=56.32;
    int i1 = (int)d;//C-style typecasting
    int i2 = static_cast<int>(d); //C++-style typecasting
    cout << i1 << endl;
    cout << i2 << endl;
    return 0;
}