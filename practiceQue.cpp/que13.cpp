#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int n = num; // Store the original number for palindrome check

    long long reversed =0 ;// use long long to handle large numbers
    
    while(n>0){
        int digit = n%10;
        reversed = reversed *10 +digit ;
        n=n/10;
    }
    cout << "Reversed Number: " << reversed << endl;
    if(reversed == num){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }  
    return 0;
}