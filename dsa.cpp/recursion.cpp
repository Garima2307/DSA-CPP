// #include <iostream>
// using namespace std;

// bool isSorted(int arr[] , int n , int i){
//     if(i == n-1){
//         return true;
//     }
//     if(arr[i] > arr[i+1]){
//         return false;
//     }
//     return isSorted(arr , n , i+1);
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int arr1[5] = {1,3,2,4,5};

//     cout << isSorted(arr , 5 , 0);
//     cout << isSorted(arr1 , 5 , 0);

//     return 0;
// }








// #include <iostream>
// #include <vector>
// using namespace std;

// int FO(vector <int> vec , int i , int target){
//     if(vec[i] == target){
//         return i;
//     }
//     if(i==vec.size()){
//         return -1;
//     }
//     return FO(vec , i+1 , target);
// }
// int main(){
//     vector <int> vec = {1,2,3,3,6,3};
//     cout << FO(vec , 0 , 3);
// }





// #include  <iostream>
// using namespace std;

// int power(int x , int n){
//     if(n==0){
//         return 1;
//     }
//     int halfpow = power(x , n/2);
//     int halfpowsq = halfpow * halfpow;
//     if(n!=2){
//         return x*halfpowsq;
//     }
//     return halfpowsq;

// }
// int main(){
//     cout << power(2 , 3);
// }





// #include <iostream>
// using namespace std;

// void occ(int arr[] , int n , int i , int target){
//     if(i == n){
//         return ;
//     }
//     if(arr[i] == target){
//         cout << i << " ";
//     }
//     occ(arr , n , i+1 , target);
// }
// int main(){
//     int arr[] = {5,6,8,8,2,8};
//     occ(arr , 6 , 0 , 8);
//     cout << endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;
// string digits[] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};

// void num(int n ){
//     if(n==0){
//         return;
//     }
//     int digit = n%10;
//     num(n/10);
//     cout << digits[digit] << " ";
// }
// int main(){
//     num(1245);
//     return 0;

// }





// #include <iostream>
// #include <string>
// using namespace std;

// int lengthh(char str[]){
//     if(str[0] == '\0'){
//         return 0;
//     }
//     return 1 + lengthh(str + 1);
// }
// int main(){
//     char str[] = "hello";
//     cout << lengthh(str) << endl;
//     return 0;
// }





//TILING PROBLEM
// #include <iostream>
// using namespace std;

// int tp(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return tp(n-1) + tp(n-2);

// }
// int main(){
//     cout << tp(4);
//     return 0;
// } 




//remove duplicates in a str
// #include <iostream>
// #include <string>
// using namespace std;

// void duplicate(string str , string ans , int i , bool map[26]){
    
//     if(i == str.size()){
//         cout << ans;
//         return ;
//     }
//     int mapIdx = (int)(str[i] - 'a');
    

//     if(map[mapIdx]){
//         duplicate(str , ans , i+1 , map);
//     }else{
//         map[mapIdx] = true;
//         duplicate(str , ans + str[i] , i+1 , map);
//     }

// }

// int main(){
//     string str = {"appnaacollege"};
//     string ans = "";
//     bool map[26] = {false};

//     duplicate(str , ans , 0 , map);
//     cout << endl;
//     return 0;

// }




//friends pairing problem
// #include <iostream>
// using namespace std;

// int fPairing(int n){
//     if(n==1 || n==2){
//         return n;
//     }
   
//     return fPairing(n-1) + ((n-1) * fPairing(n-2));
// }
// int main(){
//     cout << fPairing(4);
// }





//binary strung problem
// #include <iostream>
// #include <string>
// using namespace std;

// void binStr(int n , string ans , int lastnum){
//     if(n==0){
//         cout <<  ans << endl;
//         return ;
//     }

//     if(lastnum != 1){
        
//         binStr(n-1 , ans+'0' , 0);
//         binStr(n-1 , ans + '1' , 1);
//     }else{
//         binStr(n-1 , ans+'0' , 0);
//     }
// }

// int main(){
//     int n =3;
//     string ans = "";

//     binStr(n ,ans , 0 );
//     return 0;
// }  




//q1
// #include <iostream>
// using namespace std;

// int binSearch(int arr[] , int start , int end , int target){
//     if(start > end){
//         return -1;
//     } 
//     int mid = start + (end-start) / 2;
//     if(arr[mid]==target){
//         return mid;

//     }else if(arr[mid] < target){
//         return binSearch(arr , mid+1 , end , target);
//     }else{
//         return binSearch(arr , start , mid-1 , target);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int n = 8;
//     cout << binSearch(arr , 0 , n-1 , 1) << endl;
// } 







//TOWER OF HANOI
// #include <iostream>
// using namespace std;

// void toh(int n , int from , int to , int aux , int &count){
//     if(n==0){
//         return;
//     }
//     toh(n-1 , from , aux , to , count);
//     count++;
//     toh(n-1 , aux , to , from , count);
// }
// int tower(int n , int from , int to , int aux){
//     int count = 0;
//     toh(n , from , to , aux , count);
//     return count;
// }
// int main(){
//     cout << tower(3 , 1 , 2 , 3);
// }




//q3
#include <iostream>
#include <string>
using namespace std;

int subStr(string str , int i , int j , int n){
    if(n==1){
        return 1;
    }
    if(n<= 0 ){
        return 0;
    }

    int res = subStr(str , i , j-1 , n-1) + subStr(str , i+1 , j , n-1) - subStr(str , i+1 , j-1 , n-2);
    if(str[i] == str[j]){
        res++;
    }
    return res;


}


int main(){
    string str = {"abbac"};
    int n = str.size();
    cout << subStr(str , 0 , n-1 , n) << endl;
    return 0;
}