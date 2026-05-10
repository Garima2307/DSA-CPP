// #include <iostream>
// using namespace std;
// #define A "GARIMA"

// int main() {
//    double radius;
//    cin >> radius ;
//    double PI = 3.14;
//    double area = PI * radius * radius ;
//    cout << area << endl;
//     return 0;
// }




#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
     

    for(int i=2 ; i <= n ; i++){
        bool isPrime = true;
        int current = i;
        for(int j=2 ; j<= sqrt(i) ; j++){
            if(current %j == 0){
                isPrime = false;
            }
        }
        if(isPrime){
        cout << current << " ";

        }
    }  
          
    cout << endl;
    return 0;
}


