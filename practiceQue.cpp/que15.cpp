#include <iostream>
using namespace std;

int main() {
    int n =7;
    int a=0 ;
    int b=1;
    cout << a << " " << b << " ";
    n=n-2;
    while(n>0){
        int nextNum = a+b;
        cout << nextNum << " ";
        a=b;
        b =nextNum;
        n=n-1;
        
        
    }
    cout << endl;
    return 0;
}
//FIBONACCI SERIES