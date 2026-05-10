// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {2,5,6,1,7};
//     int max = arr[0];
//     int min = arr[0];

//     for(int i=0 ; i<5 ;i++){
//         if(arr[i] > max){
//             max=arr[i];
//         }
//         if(arr[i] < min){
//             min = arr[i];
//         }
        
//     }
//     cout << max << endl;
//     cout << min << endl;
//     return 0;
// }







// #include <iostream>
// using namespace std;

// void fun(int arr[]){
//     arr[0] = 100;
// }

// void fun2(int *ptr){
//     ptr[1] = 200;
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     fun(arr);
//     cout << arr[0] << endl;
//     fun2(arr);
//     cout << arr[1] << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void printArr(int arr[] , int n){
//     for(int i=0 ; i<n ;i++){
//         cout << arr[i] << ",";
    
//     }
//     cout << endl;
// }

// int main(){
//     int arr[] = {2,3,5,4};
//     int n = sizeof(arr) / sizeof(int);

//     printArr(arr , n);
//     return 0;

//}





//reverse an array with extra space 
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {1,5,6,7,9};
//     int n = sizeof(arr) / sizeof(int);

//     int copyArr[n];
//     for(int i=0 ; i<n ; i++){
//         int j = n-i-1;
//         copyArr[i] = arr[j];
//     }


//     for(int i=0 ; i<n ;i++){
//         arr[i] = copyArr[i];

//     }
//     printArr(arr , n);
//     return 0;

    

// }



// reversing an array without extra space
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int n){
//     for(int i=0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
// }


// int main(){
//     int arr[] = {2,5,6,7,9,4};
//     int n = sizeof(arr) / sizeof(int);
//     int st = 0 ;
//     int end = n-1;
//     while(st < end){
//         swap(arr[st] , arr[end]);
//         st++;
//         end--;
//     }
//     printArr(arr , n);
//     return 0;


// }





// #include <iostream>
// using namespace std;

// int binSearch(int arr[] , int n , int target){
//     int st = 0;
//     int end = n-1;
//     while(st <= end){
//         int mid = (st+end) / 2;
//         if(target == arr[mid]){
//             return mid;
//         }else if(target > arr[mid]){
//             st = mid+1;
//         }else{
//             end = mid-1;
//         }


//     }
//     return -1;
// }
// int main(){
//     int arr[] = {2,4,5,7,8,9};
//     int n = sizeof(arr) / sizeof(int);
//     int target = 5;

//     cout << binSearch(arr , n , target) << endl;
//     return 0;
// }




// #include <iostream>
// #include <climits>
// using namespace std;

// void sumSubArray(int arr[] , int n ){
//     int maxSum = INT_MIN;
//     int currSum = 0;
//     for(int i = 0 ; i<n ; i++){
//         currSum += arr[i];
//         maxSum = max(currSum , maxSum);
//         if(currSum < 0){
//             currSum = 0;
//         }
//     }
//     cout << maxSum;
// }
// int main(){
//     int arr[] = {-1,-2,-3,-4};
//     int n=4;
//     sumSubArray(arr , n);

//     return 0;
// }




// //buy and sell stock
// #include <iostream>
// #include <climits>
// using namespace std;

// void buySell(int *arr , int n){
//     int bestBuy[100000]; //given in leetcode
//     bestBuy[0] = INT_MAX;
//     for(int i=1 ; i<n ;i++){
//         bestBuy[i] = min(bestBuy[i-1] , arr[i-1]);
//     }
//     int max_profit = 0;
//     for(int i=1 ; i<n ; i++){
//         int currProfit = arr[i] - bestBuy[i];

//         max_profit = max(currProfit , max_profit);

//     }
//     cout << max_profit << endl;
// }

// int main(){
//     int arr[] = {7,1,5,3,6,4};
//     int n= sizeof(arr) / sizeof(int);

//     buySell(arr , n);
//     return 0;
// }





//trapping water
#include <iostream>
#include <climits>
using namespace std;

void trapWater(int *arr , int n){
    int left_max[20000];
    int right_max[20000]
;
    left_max[0] = arr[0];
    right_max[n-1] = arr[n-1];
    for(int i=1 ; i<n ;i++){
        left_max[i] = max(left_max[i-1] , arr[i-1]);
    }

    for(int i=n-2 ; i>=0 ;i--){
        right_max[i] = max(right_max[i+1] , arr[i+1]);
    }
    int water_trapped = 0;

    for(int i=0 ; i<n ; i++){
        int currWater = min(left_max[i] , right_max[i]) - arr[i] ;
        if(currWater > 0){  
            water_trapped += currWater;
        }
    }
    cout << water_trapped << endl;




}

int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n=sizeof(height) / sizeof(int);

    trapWater(height , n);
    return 0;
}



