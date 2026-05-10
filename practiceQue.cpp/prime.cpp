// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     bool isPrime = true;

//     if(n<=1){
//         cout << "Not prime\n";
//         return 0;
//     }
//     for(int i=2 ; i<= n-1 ; i++ ){
//         if(n%i==0){
//             isPrime = false;
            
//             break;

//         }
//     }
//     if(isPrime){
//         cout << "Prime" << endl;
//     }else{
//         cout << "Not Prime\n";
//     }
//     return 0;
// }



//1 is not a prime number
//2 is the only even prime number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    
    for(int i=2 ; i<=n ; i++){
        bool isPrime = true;
        for(int j=2 ; j*j<=i ; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }else{
                isPrime ;
            }


            
        }
        if(isPrime){
            cout << i << " ";

        }
    }


    cout << endl;
    return 0;
}