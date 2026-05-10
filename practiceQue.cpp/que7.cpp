// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout << "a="; cin>> a;
//     b=100;

//     if(a==b){
//         cout << "a is equal to 100" << endl;

   
//     }else if(a>b){
//         cout << "a is greater than 100" << endl;

//     // }else if(a>=b){
//     //     cout << "a is greater than equal to b" << endl;

//     }else{
//         cout << "a is less than 100" << endl;
//     }

//     // }else{
//     //     cout << "a is less than equal to b" << endl;
//     // }
//     return 0;

// }





#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout <<"a=" ; cin>>a;
    cout << "b=" ; cin>>b;
    cout <<"c=" ; cin>>c;

    if(a>b && a>c){
        cout << "a is greatest" << endl;

    }else if(b>a && b>c){
        cout <<"b is the greatest" << endl;

    }else {
        cout << "c is the greatest" << endl;
    }

    if(a<b && a<c){
        cout << "a is the smallest" << endl;

    }else if(b<a && b<c){
        cout << "b is the smallest" << endl;
    }else{
        cout << "c is the smallest" << endl;
    }
    return 0;
}