// #include <iostream>
// using namespace std;

// int main(){
//     int students[3][3] = {{100,100,100},
//                            {74,58,65},
//                            {20,30,40}};
//     cout << students << endl;

//     cout << *students << endl;
//     cout << *(*(students+1)+2)<< endl;

// }




// #include <iostream>
// using namespace std;

// int main(){
//     int students[3][4];
//     int n=3 , m=4;

//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             cin >> students[i][j];
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             cout <<  students[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// void spiralMatrix(int arr[][3] , int n , int m){
//     int srow = 0 , scol =0 , erow = n-1 , ecol = m-1;
//     while(srow <= erow && scol<=ecol){
//         for(int j = scol ; j<= ecol ; j++){//top
//             cout << arr[srow][j] << " ";
//         }
//         for(int i=srow +1; i<=erow ; i++){//right
//             cout << arr[i][ecol] << " ";
//         }
//         for(int j=ecol -1 ; j>= scol ; j--){//bottom
//             if(erow==srow){
//                 break;
//             }
//             cout << arr[erow][j] << " ";
//         }
//         for(int i = erow-1 ; i>= srow+1 ; i--){///left
//             if(scol==ecol){
//                 break;
//             }
//             cout << arr[i][scol] << " ";
//         }

//         srow++;
//         scol++;
//         erow--;
//         ecol--;
        
//     }
//     cout << endl;
// }

// int main(){
//     int students[3][3] = {{10,20,30},
//                            {12,24,36},
//                            {12,13,3}};
//     spiralMatrix(students , 3 , 3);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int diagonalSum(int mat[][3] , int n=4){
//     int sum =0;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             if(i==j){
//                 sum +=mat[i][j];
//             }else if(j==n-i-1){
//                 sum += mat[i][j] ;
//             }
//         }
//     }

//     cout << "sum=" << sum << endl;
//     return sum;

// }
// int main(){
//     int students[3][3] = {{10,20,30},
//                            {12,24,36},
//                            {12,13,3}};
//     diagonalSum(students , 3 );
//     return 0;
// }





// #include <iostream>
// using namespace std;

// bool sSearch(int mat[][4] , int n , int m , int target){
//     int i =n-1 , j = 0;
//     while(i >=0 && j < m-1){
//         if(mat[i][j] == target){
//             cout << "found at (" << i << "," << j  << ")" << endl;
//             return true;
//         }else if(mat[i][j] < target){
//             j++;
//         }else{
//             i--;
//         }
//     }
//     cout << "invalid taget" << endl;
//     return false;
// }
// int main(){
//     int matrix[4][4] = {{10,20,30,40},
//                         {15,25,35,45},
//                         {27,29,37,48},
//                         {32,33,39,50}};
//     sSearch(matrix , 4 , 4 , 30);
//     return 0;
// }



//que1
// #include <iostream>
// using namespace std;

// int sum(int mat[][3] , int n , int m , int target){
//     int sum = 0;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             if(mat[i][j] == target){
//                 sum++;
//             }
//         }
//     }
//     return sum;
// }
// int main(){
//     int mat[2][3] = {{4,7,8},
//                      {8,8,7}};

//     cout << sum(mat , 2 , 3 , 7) << endl;
//     return 0;
// }






///que2
// #include <iostream>
// using namespace std;

// int sum(int mat[][3] , int n , int m ){
//     int sum = 0;
//     for(int j=0 ; j<m ; j++){
//         sum += mat[1][j];
//     }
    
//     return sum;
// }
// int main(){
//     int mat[2][3] = {{4,7,8},
//                      {8,8,7}};

//     cout << sum(mat , 2 , 3 ) << endl;
//     return 0;
// }






//que3
#include <iostream>
using namespace std;

 
void transpose(int mat[][3] , int n , int m ){
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout << mat[j][i] << " ";
        }
        cout << endl;
        
    }

    
    
}
int main(){
    int mat[2][3] = {{4,7,8},
                     {1,6,5}};

    transpose(mat , 2 , 3 );
    return 0;
}


