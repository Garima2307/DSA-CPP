// #include <iostream>
// using namespace std;

// int main(){
//     char a = 'A';
//     char *ptr = &a;

//     cout << (void*)ptr << endl;

//     ptr++;
//     cout << (void*)ptr << endl;
//     ptr--;
//     cout << (void*)ptr << endl;
//     return 0;

// }



// #include <iostream>
// using namespace std;
// void printArr(int arr[] , int n){

//     for(int i=0 ; i<n ; i++){
//         cout << *(arr +i) << " ";
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n=5;

//     printArr(arr , n);
//     return 0;
// }



#include <iostream>
using namespace std;

int main(){
    int a [] = { 2,3,5,6,8};
    int *ptr1 = a;
    int *ptr2 = ptr1 + 3;

    cout << ptr2 - ptr1 << endl;
    return 0;
}