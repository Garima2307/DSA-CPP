#include <iostream>
using namespace std;
int main(){
    int a,b,sea;
    cout <<"a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    sea=a;
    a=b;
    b=sea;
    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
// Write a program to swap two numbers using a third variable.