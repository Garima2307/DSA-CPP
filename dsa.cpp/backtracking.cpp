// #include <iostream>
// using namespace std;

// void printArr(int arr[] , int n){
//     for(int i = 0 ; i<n ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void backtrackArr(int arr[] , int n , int i){
//     if(i==n){
//         printArr(arr , n);
//         return;
//     }
//     arr[i] = i+1;
//     backtrackArr(arr , n , i+1);
//     arr[i] -= 2;
// }
// int main(){
//     int arr[5] = {0};
//     int n = 5;
//     backtrackArr(arr , n , 0);
//     printArr(arr , n);
//     cout << endl;
//     return 0;

// }







// #include <iostream>
// #include <string>
// using namespace std;


// void ss(string str , string subset){
    
//     int n = str.size();
//     if(n == 0){
//         cout << subset << endl;
//         return;
//     }
//     for(int i = 0 ; i<n ; i++){
//         char ch = str[i];
//         string nstr = str.substr(0 , i) + str.substr(i+1, n-i-1);
//         ss(nstr  , subset + ch);
//     }
// }
// int main(){
//     string str = "abc";
//     string subset = " ";
//     ss(str , subset);
//     return 0;
// }



//NQueens
// #include <iostream>
// #include <vector>
// using namespace std;

// void printBoard(vector <vector<char>> board){
//     int n = board.size();
//     for(int i = 0 ; i<n ; i++){
//         for(int j=0 ; j<n ; j++){
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "-------------------\n";
// }
// bool isSafe(vector <vector<char>> board , int row , int cols){
//     int n = board.size();
//     //horizontal
//     for(int j=0 ; j<n ; j++){
//         if(board[row][j] == 'Q'){
//             return false;
//         }
//     }
//     //vertically
//     for(int i=0 ; i<row ; i++){
//         if(board[i][cols] == 'Q'){
//             return false;
//         }
//     }
//     //diagonally left
//     for(int i=row , j=cols ; i>=0 && j>=0 ; i-- , j--){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//     }
//     //diagonally right
//     for(int i=row , j=cols; i>=0 && j<n ; i-- , j++){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//     }
//     return true;
// }

// bool nQueens(vector <vector<char>> board , int row){
//     int n = board.size();
//     if(row == n){
//         printBoard(board);
//         return true;
//     }
//     for(int j=0 ; j<n ; j++){
//         if(isSafe(board , row , j)){
//             board[row][j] = 'Q';
//             if(nQueens(board , row+1)){
//                 return true;
//             }
//             board[row][j] = '.';
//         }
//     }
//     return false;
// }
// int main(){
//     vector <vector<char>> board;
//     int n = 4;
//     for(int i = 0 ; i<n ; i++){
//         vector <char> newRow;
//         for(int j=0 ; j<n ; j++){
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }
//     int count = nQueens(board , 0);
//     cout << count << endl;
//     return 0;
// }  





//grid ways
// #include <iostream>
// #include <string>
// using namespace std;

// int gridWays(int row , int col , int n , int m, string ans){
//     if(row==n-1 && col == m-1){
//         cout << ans << endl;
//         return 1;
//     }
//     if(row>=n || col >= m){
//         return 0;
//     }
//     int val1 = gridWays(row , col+1 , n , m , ans +'R');
//     int val2 = gridWays(row+1 , col , n , m , ans + 'D');
//     return val1 + val2;
// }
// int main(){
//     int n =3;
//     int m =3;
//     cout << gridWays(0,0,n , m , "") << endl;
//     return 0;
// }






//SUDOKU SOLVER
#include <iostream>
using namespace std;

void printSudoku(int arr[][9]){
    for(int i = 0 ; i<9 ; i++){
        for(int j =0 ; j<9 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSafe (int arr[9][9] , int row , int col , int digit){
    //row
    for(int j=0 ; j<9 ; j++){
        if(arr[row][j] == digit){
            return false;
        }
    }
    for(int i=0 ; i<9 ; i++){
        if(arr[i][col] == digit){
            return false;
        }
    }
    //3x3 block
    int startRow = (row/3) * 3;
    int startCol = (col/3) * 3;
    for(int i=startRow ; i<= startRow+2 ; i++){
        for(int j = startCol ; j<= startCol+2 ; j++){
            if(arr[i][j] == digit){
                return false;
            }
        } 
    }
    return true;
}
bool sudokuSolver(int arr[9][9] , int row , int col){
    if(row == 9){
        printSudoku(arr);
        return true;
    }
    int nextRow = row;
    int nextCol = col + 1;
    if(nextCol == 9){
        nextRow = row+1;
        nextCol = 0;
    }
    if(arr[row][col] != 0){ // check whether any digit is already placed at (i,j)
        return sudokuSolver(arr , nextRow , nextCol);
    }
    for(int digit = 1 ; digit<=9 ; digit++){
        if(isSafe(arr , row , col , digit)){
            arr[row][col] = digit;
            if(sudokuSolver(arr , nextRow , nextCol)){
                return true;
            
            }
            arr[row][col] = 0;
        }
    }
    return false;

}

int main(){
    int sudoku[9][9] = {{0,0,8,0,0,0,0,0,0},
                        {4,9,0,1,5,7,0,0,2},
                        {0,0,3,0,0,4,1,9,0},
                        {1,8,5,0,6,0,0,2,0},
                        {0,0,0,0,2,0,0,6,0},
                        {9,6,0,4,0,5,3,0,0},
                        {0,3,0,0,7,2,0,0,4},
                        {0,4,9,0,3,0,0,5,7},
                        {8,2,7,0,0,9,0,1,3}};
    sudokuSolver(sudoku , 0 , 0);

    return 0;
}