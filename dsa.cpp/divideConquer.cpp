// #include <iostream>
// #include <vector>
// using namespace std;


// void merge(int arr[] , int si , int ei , int mid){//0{n}
//     vector <int> temp;
//     int i = si;
//     int j = mid+1;
//     while(i<=mid && j<=ei){
//         if(arr[i] <= arr[j]){
//             temp.push_back(arr[i++]);
//         }else{
//             temp.push_back(arr[j++]);
//         }
//     }
    
//     while(i<=mid){ //copying rest of sorted elemnts in temp
//         temp.push_back(arr[i++]);
//     }
//     while(j<=ei){
//         temp.push_back(arr[j++]);
//     }
//     for(int idx = si , x=0 ; idx<=ei ; idx++, x++){
//         arr[idx] = temp[x];

//     }
// }
// void mergeSort(int arr[] , int si , int ei ){
//     if(si >= ei){
//         return;
//     }
//     int mid = si + (ei - si) /2;//divide
//     mergeSort(arr , si , mid);//left sort
//     mergeSort(arr , mid+1 , ei);//right sort
//     merge(arr , si , ei , mid);//conquer

// }
// void print(int arr[] , int n){
//     for(int i = 0; i<n ; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){//0(nlogn)
//     int arr[6] = {2,8,4,6,1,7};
//     int n = 6;
//     mergeSort(arr , 0 , n-1) ;
//     print(arr , n);
//     cout << endl;
//     return 0;

// }





// #include <iostream>
// #include <algorithm>
// using namespace std;


// int partition(int arr[] , int si , int ei){
//     int i = si -1;
//     int pivotIdx = arr[ei];
//     for(int j = si ; j<ei ; j++){
//         if(arr[j] <= pivotIdx){
//             i++;
//             swap(arr[i] , arr[j]);
//         }
//     }
//     i++;
//     swap(arr[i] , arr[ei]);
//     return i;

// }
// void quickSort(int arr[] , int si , int ei){
//     if(si >= ei) {
//         return ;
//     }
//     int pivotIdx = partition(arr , si , ei);
//     quickSort(arr , si ,pivotIdx-1 );//left
//     quickSort(arr , pivotIdx+1 , ei );//right

// }

// void print(int arr[] , int n){
//     for(int i = 0; i<n ; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr[6] = {2,8,4,6,1,7};
//     int n = 6;
//     quickSort(arr , 0 , n-1) ;
//     print(arr , n);
//     cout << endl;
//     return 0;

// }






// #include <iostream>
// using namespace std;

// int search(int arr[] , int target , int si , int ei){
//     int mid = si + ((ei - si)/2);
//     if(si > ei){
//         return -1;
//     }
//     if(arr[mid] == target){
//         return mid;
//     }

//     if(arr[si]  <= arr[mid]){
//         if(arr[si] <= target && target < arr[mid]){
//             return search(arr , target , si , mid-1);
//         }else{
//             return search(arr , target , mid+1 , ei);

//         }
//     }else{
//         if(target > arr[mid] && arr[ei] <= target){
//             return search(arr , target , mid+1 , ei);
            
//         }else{
//             return search(arr , target , si , mid-1);

//         }
//     }
// }
// int main(){
//     int arr[7] = {4,5,6,7,0,1,2};
//     cout << search(arr , 6 , 0 , 6) << endl;
// return 0;}





//q1
#include <iostream>
#include <string>
#include <vector>
using namespace std;


void merge(string arr[] , int si , int ei , int mid){//0{n}
    vector <int> temp;
    int i = si;
    int j = mid+1;
    while(i<=mid && j<=ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    
    while(i<=mid){ //copying rest of sorted elemnts in temp
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    for(int idx = si , x=0 ; idx<=ei ; idx++, x++){
        arr[idx] = temp[x];

    }
}
void mergeSort(string arr[] , int si , int ei ){
    if(si >= ei){
        return;
    }
    int mid = si + (ei - si) /2;//divide
    mergeSort(arr , si , mid);//left sort
    mergeSort(arr , mid+1 , ei);//right sort
    merge(arr , si , ei , mid);//conquer

}
void print(string arr[] , int n){
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main(){//0(nlogn)
    string arr[4] = {"sun" , "moon" , "earth" , "mars"};
    int n = 4;
    mergeSort(arr , 0 , n-1) ;
    print(arr , n);
    cout << endl;
    return 0;

}

