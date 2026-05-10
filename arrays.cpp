// #include <iostream>
// #include <climits>
// #include <algorithm>

// using namespace std;

// int main(){

//     int size = 5;
//     int arr[size] = {23,56,45,58,45};

//     int smallest = INT_MAX; 
//     int largest = INT_MIN;

//     for(int i=0 ; i<size ; i++){
//         smallest = min(smallest , arr[i]);
//         largest = max(largest , arr[i]);
        
//     }
//     cout << "Smallest element is " << smallest << endl;
//     cout << "Largest element is " << largest << endl;   
//     return 0;

// }




// #include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;


// int main(){
//     int size =  5;
//     int length[size] = {2,56,45,85,91};

//     int max_length = INT_MIN;
//     int min_length = INT_MAX;
//     int i=0;
//     while(i<size){
//         max_length = max(max_length , length[i]);
//         min_length = min(min_length , length[i]);
//         i++;
//     }
//     cout << max_length << endl;
//     cout << min_length << endl;


//     for(int i=0 ; i<size ; i++){
//         if(max_length == length[i]){
//             cout << "Index of largest element is " << i << endl;
//         }
//         if(min_length == length[i]){
//             cout << "Index of smallest element is " << i << endl;
//         }
//     }
//     return 0;
    
// }




// #include <iostream>
// using namespace std;

// int linearSearch(int arr[] , int size , int target){
//     for(int i=0 ; i<size ; i++){
//         if(target == arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {2,3,6,2,45,6};
//     int size = 6;
//     int target = 450;

//     cout << linearSearch(arr , size , target) << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void reverseArr(int arr[] , int size){
//     int start =0 , end = size-1;
//     while(start<end){
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     reverseArr(arr , size);
//     for(int i=0 ; i<size ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// void sum_pro(int arr[] , int size){
//     int sum = 0 ;
//     int product = 1;
//     for(int i=0 ; i<size ; i++){
//         sum += arr[i];
//         product *= arr[i];
//     }
//     cout << "Sum=" << sum << endl;
//     cout << "Product =" << product << endl;
// }
// int main(){
//     int arr[] = {2,1,3,6,5,4};
//     int size = 6;

//     cout << "Sum and Product of each element of arrays are "  << endl;
//     sum_pro(arr , size);

//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// #include <climits>

// using namespace std;
// void max_min_swap(int arr[] , int size){
//     int max_arr = INT_MIN;
//     int min_arr = INT_MAX;
//     for(int i=0 ; i<size ; i++){
//         max_arr = max(max_arr , arr[i]);
//         min_arr = min(min_arr , arr[i]);
//     }
//     int max_index=0 , min_index=0;
//     for(int i =0 ; i<size ; i++){
//         if(max_arr == arr[i]){
//             max_index = i;
//         }
//         if(min_arr == arr[i]){
//             min_index = i;
//         }
//     }
//     swap(arr[max_index] , arr[min_index]);
//     for(int i=0 ; i<size ; i++){
//         cout << arr[i] << " ";
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,9};
//     int size = 7;
//     max_min_swap(arr , size);
//     cout << endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;

// void unique_arr(int arr[] , int size){
    
//     for(int i=0 ; i<size ; i++){
//         int count =0;
//         for(int j=0 ; j<size ; j++){
//             if(arr[i] ==arr[j]){
//                 count++;
                
//             }

            
//         }
//         if(count == 1){
//             cout << arr[i] << " ";
//         }
//     }
// }
// int main(){
//     int arr[] = {1,2,5,6,5,1,3,2,7,9};
//     int size = 10;
//     cout << "Unique numbers in the array are " ;
//     unique_arr(arr,size);
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void intersection(int arr1[] , int size1 , int arr2[] , int size2){
//     for(int i=0 ; i<size1 ; i++){
//         bool unique = true;
//         for(int k=0 ; k<i ; k++){
//             if(arr1[i] == arr1[k] ){
//                 unique = false;
//                 break;
//             }
//         }
//         if(unique == false){
//             continue;
//         }

//         for(int j=0 ; j<size2 ; j++){
//             if(arr1[i] == arr2[j]){
//                 cout << arr1[i] << " ";
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int arr1[] = {1,2,6,6,7,2,8};
//     int size1 = 7;
//     int arr2[] = {2,3,5,6,4,7};
//     int size2 = 6;

//     intersection(arr1 , size1 , arr2 , size2);
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int maxSum= INT_MIN;

//     for(int start = 0 ; start<size ; start++){ 
//         int sum=0;
//         for(int end= start ; end<size ; end++){
//             sum+=arr[end];
//             maxSum = max(maxSum , sum);
//         }
        
//     }
//     cout << maxSum << endl;
//     return 0;
//}





#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPair(vector<int> nums , int target){
    vector <int> ans;
    int n= nums.size();
     
    int i=0 , j=n-1;
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
    return ans;

}

int main(){
    vector <int> nums = {2,7,11,15};
    int target = 26;

    vector<int>ans = sumPair(nums , target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}

