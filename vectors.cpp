// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<int> vec = {1,2,3};
    
//     cout << vec.size() << endl;
//     cout <<  vec.capacity() << endl;
//     vec.pop_back();
//     cout << vec.size() << endl;
//     cout <<  vec.capacity() << endl;

//     vec.push_back(10);
//     vec.push_back(6);
//     cout << vec.size() << endl;
//     cout <<  vec.capacity() << endl;

//     return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> vec = {1,2,3,5,3,8};
//     int size = vec.size();
//     int target = 3;
//     bool found = false;

//     for(int i=0 ; i<size ; i++){
//         if(target == vec[i]){
//             cout << i << endl;
//             found = true;
//         }

//     }
//     if(!found){
//         cout << -1 << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// void reverseVec(vector <int> &vec){
//     int front = 0;
//     int end = vec.size() -1;

//     while(front < end ){
//         swap(vec[front] , vec[end]);
//         front++ ;
//         end--;
//     }
//     for(int val : vec){
//         cout << val << " " ;
//     }
// }
// int main(){
//     vector <int> vec = {1,5,6,9,2};
//     reverseVec(vec);
//     cout << endl;
//     return 0;

// }




//dyanamic memory allocation
// #include <iostream>
// using namespace std;

// void funcInt(){
//     int *ptr = new int ;
//     *ptr = 5;
//     cout << *ptr << endl; 
//     delete ptr;

// }

// void func(){
//     int size;
//     cin >> size;

//     int *arr = new int[size];

//     int x = 1;
//     for(int i=0 ; i<size ; i++){
//         arr[i] = x;
//         cout << arr[i] << " ";
//         x++;
//     }
//     cout << endl;
//     delete [] arr;

// }

// int main(){
//     func();
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int rows , cols ;
//     cout << "rows = " ;
//     cin >> rows;

//     cout << " cols = ";
//     cin >> cols;

//     int* *matrix = new int*[rows];
//     for(int i=0 ; i<rows ; i++){
//         matrix[i] = new int[cols];
//     }

//     int x=1;
//     for(int i=0 ; i<rows ; i++){
//         for(int j=0 ; j<cols ; j++){
//             matrix[i][j] = x++;
//             cout << matrix[i][j] << " ";

//         }
//         cout << endl;
//     }
//     cout << matrix[2][2] << endl;
//     cout << *(*(matrix+2) + 2) << endl;
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> vec1(10 , 2);
//     cout << vec1.size() << endl;
//     for(int i=0 ; i<vec1.size() ; i++){
//         cout << vec1[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }





#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> matrix = {{1,2,3} , {4,5} , {6}};
    for(int i=0 ; i<matrix.size() ; i++){
        for(int j=0 ; j< matrix[i].size() ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}