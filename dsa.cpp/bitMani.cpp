// #include <iostream>
// using namespace std;


// void oddEven(int n){
//     if(n&1 == 0){
//         cout << "even";

//     }else{
//         cout << "odd";;
//     }
// }
// int main(){
//     oddEven(5) ;
//     cout << endl;
//     return 0;


// }






// #include <iostream>
// using namespace std;
// void ithbit(int n , int i){
//     int mask = 1 << i;
//     cout << (n|mask) << endl;
// }

// int main(){
//     ithbit(6,3);
//     return 0;

// }





// #include <iostream>
// using namespace std;

// int ithclear(int z , int iy){
//     int bitMask = ~(1<<iy);
//     return (z&bitMask);
// }

// int ithupdate(int n , int i , int val){
//     int clear = ithclear(n , i);
//     return clear | (val << i);
// }
// int main(){
//     cout << ithupdate(7,2,0) << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void powerOf2(int n){
//     if(n>0 && ((n & (n-1))==0)){
//         cout << "yes\n";
//     }else{
//         cout <<"noo\n";
//     }
// }
// int main(){
//     powerOf2(20);
//     return 0;

// }




// #include <iostream>
// using namespace std;

// int lastithclear(int n , int i){
//     return n & (~0 << i);
// }
// int main(){
//     cout << lastithclear(15 , 2) << endl;
// }





// #include <iostream>
// using namespace std;

// void countSetBits(int n){
//     int count =0;
//     while(n>0){
//         if((n&1) != 0){
//             count++;
//         }
//         n = n >> 1;
//     }
//     cout << count << endl;
// }
// int main(){
//     countSetBits(10);
//     return 0;
// }





#include <iostream>
using namespace std;

void fastExpo(int x , int n){
    int ans = 1 ;
    

    while(n>0){
        if(n&1 != 0){
            ans = ans * x;
        }
        x = x*x;
        n = n>>1;
    }
    cout << ans;
}
int main(){
    fastExpo(3 , 5);
    cout << endl;
    return 0;
}