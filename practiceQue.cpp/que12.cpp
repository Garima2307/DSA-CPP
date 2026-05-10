// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     int count = 0;
//     n = abs(n); // to handle negative numbers

//     if(n==0){
//         count = 1;
//     }

//     while(n>0){
//         n = n/10;
//         count++;
//     }

//     cout << "Number of digits = " << count << endl;
//     return 0;

// }





#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin>> n;


    if(n==0){
        cout << 0 << endl;
        return 0;
    }
        
    int reversed = 0;
    while(n > 0){
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
   }
   cout << "Reversed Number: " << reversed << endl;

    

    // while(n>0){
    //     int digit = n%10;
    //     cout << digit ;
    //     n = n/10;
    // }
    //cout << endl;       //it prints the digits in reverse order but not as a number so incorrect output
    return 0;
}