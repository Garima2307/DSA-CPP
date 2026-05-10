#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 0;
    while(n>0){
        n=n/10;
        count +=1;
        
    }
    cout << "Number of digits : " << count << endl;

    while(n>0){
        int digit = n%10;
        cout << digit^count << + ;
        
        n=n/10;

    }
}
//pending
//armstrong's number
//use of bitwise operator and import of library