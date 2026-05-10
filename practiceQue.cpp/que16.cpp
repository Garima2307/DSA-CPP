#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin>> b;
    
    if(a<b){           //to make sure a is greater than b
        int temp = a;
        a = b;
        b = temp;
        
    }

    while( b!= 0 ){
        int rem= a%b;
        a=b;
        b=rem;

    }
    cout << "GCD = " << a << endl;
    return 0;


}