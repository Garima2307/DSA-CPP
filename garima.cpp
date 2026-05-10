// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "Enter a number :";
//     cin >> num;

//     if(num<=0){
//         cout << "NO"<< endl;
//         return 0;
//     }

//     while(num>1){
//         if(num%2 !=0){
//             cout << "NO"<< endl;
//             return 0;
//         }else{
//             num = num/2;
//         }   
//     }
//     if(num == 1){
//         cout << "YES"<< endl;
//     }
//     return 0;
// }




#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;


    if(n>0 && (n & (n-1)) ==0){
        cout << "yess"<< endl;
    }else{
        cout << "Noo" << endl;
    }

    return 0;
}
