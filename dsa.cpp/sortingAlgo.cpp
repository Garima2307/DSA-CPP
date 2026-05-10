// #include <iostream>
// using namespace std;
// void printArr(int *arr , int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
    
// }
// void bubbleSort(int arr[] , int n){
//     bool isSort = false;

//     for(int i=0 ; i<n-1 ; i++){
//         for(int j=0 ; j<n-i-1 ; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//                 isSort = true;
//             }
//         }
//         if(!isSort){
//             return ;
//         }
//     }
    

// }

// int main(){
//     int arr[] = {3,2,1,4,5};
//     int n = sizeof(arr) / sizeof(int);
//     bubbleSort(arr , n);
//     printArr(arr , n);

    
//     cout << endl;
//     return 0;
    
// }








// //selection sort
// #include <iostream>
// #include <algorithm>
// using namespace std; 
// void selection(int arr[] , int n){
//     for(int i=0 ; i< (n-1) ; i++){
//         int min_indx = i;
//         for(int j=i+1 ; j<n ; j++){
//             if(arr[j] < arr[min_indx]){
//                 min_indx = j;
//             }
//         }
//         swap(arr[min_indx] , arr[i]);
//     }
// }
// void printArr(int *arr , int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }
// int main(){
//     int arr[] = {2,5,7,9,6};
//     int n=5;
//     selection(arr , n);
//     printArr(arr , n);
//     return 0;
// }




//insertion sort

// #include <iostream>
// #include <algorithm>
// using namespace std;

// void iSort(int *arr , int n){
//     for(int i=1 ; i<n ; i++){
//         int current = arr[i];
//         int previous = i-1;
//         while(previous >=0 && arr[previous] > current){
//             swap(arr[previous] , arr[previous+1]);
//             previous--;
//         }
//         arr[previous+1] = current;
//     }
// }
// void printArr(int *arr , int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }
// int main(){
//     int arr[] = {2,5,7,9,6};
//     int n=5;
//     iSort(arr , n);
//     printArr(arr , n);
//     return 0;
// }





//count sort
// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;

// void cSort(int arr[] , int n){
//     int freq[100000] = {0};
//     int maxi = INT_MIN;
//     int mini = INT_MAX;

//     for(int i=0 ; i<n ; i++){
//         freq[arr[i]]++;
//         maxi = max(maxi , arr[i]);
//         mini = min(mini , arr[i]);


//     }
//     for(int i = mini , j=0; i<=maxi ; i++){
//         while(freq[i] >0){
//             arr[j++] = i;
//             freq[i] --;

//         }
//     }
// }

// void printArr(int *arr , int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }
// int main(){
//     int arr[] = {2,5,7,9,6};
//     int n=5;
//     cSort(arr , n);
//     printArr(arr , n);
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// void iSort(char ch[] , int n){
//     for(int i=1 ; i<n ; i++){
//         int current = ch[i];
//         int previous = i-1;
//         while(previous >=0 && ch[previous] < current){
//             swap(ch[previous] , ch[previous+1]);
//             previous--;
//         }
//         ch[previous+1] = current;
//     }
// }                                              
// void printArr(char ch[] , int n){            
//     for(int i=0 ; i<n ; i++){
//         cout << ch[i] << " ";            
//     }
//     cout << endl;
    
// }
// int main(){
//     char ch[] = {'b' , 'u' , 'a' , 'e' , 'd'};
//     int n=5;
//     iSort(ch , n);
//     printArr(ch , n);
//     return 0;
// }



//desc counting sorting
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void cSort(int arr[] , int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0 ; i<n ; i++){
        maxi = max(maxi , arr[i]);
        mini = min(mini , arr[i]);
    }
    int freq[100001] = {0};
    for(int i=0 ; i<n ; i++){
        freq[arr[i]]++;
    }

    for(int i = maxi , j=0 ; i>=mini ; i--){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
s}
int main(){
    int arr[] = {3,6,1,2,8,7,4,5,3,1};
    cSort(arr , 10);
    print(arr , 10);
    return 0;
}