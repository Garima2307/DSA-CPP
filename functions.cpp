// #include <iostream>
// using namespace std;
// //sum of two numbers
// double sum(double a , double b ){
//     double s = a+b;
//     return s;
// }

// //minimum of two numbers
// double mini(double a , double b){

//     //parameters
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }


// int main(){
//     cout << mini(8,6)<< endl;//arguments
//     return 0;

// }





// #include <iostream>
// using namespace std;
// int sum(int n){
//     int s=0;
//     for(int i=1 ; i<=n ; i++){
//         s+=i;

//     }
//     return s;
// }

// int main(){
//     cout << "SUM=" << sum(4) << endl;
//     return 0;
// }




    // #include <iostream>
    // using namespace std;

    // int factorial(int n){
    //     int f=1;
    //     for(int i=1;i<=n ; i++){
    //         f *= i;
    //     }
    //     return f;
    // }
    // int main(){
    //     cout << "FACTORIAL = " << factorial(4) << endl;
    //     return 0;

    // }








// #include <iostream>
// using namespace std;

// int fun(int x){
//     x*=2;
//     cout << "x=" << x << endl;
//     return x*2;
// }

// int main(){
//     int x=7;
//     fun(3);
//     cout << "x=" << x << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int bcoff(int x){
//     int fact = 1;
//     for(int i=1 ; i<=x ; i++){
//         fact = fact*i;
//     }

//     return fact;

// }
// int main(){
//     int n=9; int r=4;
//     int facN = bcoff(n);
//     int facR = bcoff(r);
//     int facNR = bcoff(n-r);
//     int bcoff = facN / (facR * facNR);
//     cout << "Binomial coff = " << bcoff << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void changeArr(int arr[] , int  size){
//     cout << "In function" << endl;
//     for(int i=0 ; i<size ; i++){
//         arr[i] = 2* arr[i];
//     }
// }
// int main(){
//     int arr[] = { 1,2,3};
//     int size = 3;
//     changeArr(arr , 3);
//     cout << "In main" << endl;

//     for(int i = 0 ; i<size ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;

// long long factorial(long long p){
//     long long fact = 1;
//     for(int i=1 ; i<= p ; i++){
//         fact *= i;
//     }

//     return fact;
// }

// long long bincoff(int n , int r){
//     int a =  factorial(n);
//     int b = factorial(r);
//     int c = factorial(n-r);

//     if(n<r || n<0 || r||0){
//         return 0;
//     }

//     int coff = a / (b*c);
//     return coff;
// }
// int main(){
//     cout << bincoff(5, 6) << endl;
//     return 0;
// }




//function overloading

// #include <iostream>
// using namespace std ;

// int sum(int a , int b){
//     cout << (a+b) << endl;
//     return a+b;
// }
// int sum(int a , int b , int c){
//     cout << (a+b+c) << endl;
//     return a+b+c;
// }

// double sum(double a , double b){
//     cout << (a+b) << endl;
//     return a+b;
// }
// int main(){
//     sum(3 , 2);
//     sum(3.2 , 5.0);
//     sum(2 , 3 , 5);
//     return 0;
// }







#include <iostream>
using namespace std;

bool prime(int n){
    
    if(n<=1) return false;
    for(int i=2 ; i*i <= n ;i++){
            if(n% i  == 0){
                return false;
            }
    }  
    return true; 
}

void pm(int n){
    for(int i=2 ; i<=n ; i++){
        if(prime(i)){
            cout << i << " ";        
        }
    
    }
    cout << endl;
}
int main(){
    pm(10);
    return 0;
}








