//SQUARE PATTREN
// #include <iostream>
// using namespace std;

// int main() {
//     int n=6;

//     for(int i=1 ; i<=n ; i++){
//         int x=6;
//         for(int j=1 ; j<=x ; j++){
//             cout << j << " ";

//         }
//         cout << endl;


//     }
//     return 0;

// }






// #include <iostream> 
// using namespace std;
// int main() {
//     int n = 4;
//     for(int i =1; i<=n ; i++) {
//         for(int j=1 ; j<=n ; j++ ){
//             cout << "*" << " " ;


//         }
//         cout << endl;
//     }
//     return 0;

// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n=4;
//     for(int i=0 ; i<n ; i++) {
//         char ch = 'A' ;
//         for(int j=0 ; j<n ; j++) {

//             cout << ch;
//             ch+=1;


//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream> 
// using namespace std;
// int main() {
//     int n = 3;
//     int num=1;
//     for( int i=0;i<n;i++){

        
//         for(int j=1 ; j<=n ; j++) {
//             cout << num;
//             num+=1;
            

//         }
//         cout << endl;
//     }
//     cout << "After pattern: " << num << endl;
//     return 0;
    
// }







// #include <iostream>
// using namespace std;
// int main() {
//     char ch = 'A';
//     int n = 3;
//     for(int i=0 ; i<n ; i++ ){
//         for(int j=0 ; j<n ; j++ ){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
    
//     return 0;

// }




//TRIANGLE PATTERN
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     for (int i =0;i<n; i++){
//         for( int j=0 ; j< i+1 ; j++ ){
//             cout << "*";
//         }
//         cout << endl;

//     }
//     return 0;

// }






// #include <iostream>
// using namespace std;
// int main() {
//     for(int i = 0;i< 5 ;i++){
//         for(int j =0 ; j<i+1 ; j++){
//             cout << i+1;

//         }
//         cout << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main() {
//     char ch ='A' ;

//     for(int i =0 ;i<5 ; i++) {
        
        
//         for(int j =0; j<i+1; j++){
//             cout << ch;
            

//         }
//         ch++;
//         cout << endl;


//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;
// int main() {
//     int n =4;
//     for(int i=0 ; i<n ;i++){
//         int num =1;
//         for(int j=0 ; j<i+1 ; j++){
//             cout << num;
//             num++;
            

//         }
//         cout << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=i+1 ;j>0 ; j--){
//             cout << j ;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int n =4;
//     char ch='A';
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ;j<i+1 ;j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Floyd's triangle




// # include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1 ; i<n+1 ; i++){

//         char ch = 'A'+ i -1;
//         for(int j=0 ; j<i ; j++){
//             cout << ch;
//             ch--;   
//         }
//         cout << endl;

        
//     }
//     return 0;
// }
//reverse alphabet triangle pattern




// #include <iostream>
// using namespace std;

// int main(){
//     int n =4 ;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<i ; j++){
//             cout << " ";
//         }

//         for(int j=0 ; j<n-i ; j++){
//             cout << (i+1) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//inverted triangle pattern



// #include <iostream>
// using namespace std;

// int main(){
//     char ch='A';
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<i ; j++){
//             cout << " ";
//         }

        
//         for(int j=0 ; j<n-i ; j++){
//             cout << ch;
            
//         }
//         ch++;
//         cout << endl;

//     }
//     return 0;

// }




// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<(n-i-1) ; j++){
//             cout << " ";
//         }
//         for(int j=1 ; j<= i+1 ; j++){
//             cout << j;
            

//         }
//         for(int j=i ; j>=1 ; j--){
//             cout << j;
            
        
//         }
//         cout << endl;
//     }
//     return 0;
// }
//Pyramid pattern with numbers






// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<(n-i-1) ; j++){
//             cout << " ";
            
//         }
//         cout << "*";
//         if(i!=0){
//             for(int j=0 ; j<=2*i-1 ; j++){
//                 cout << " ";
                
//             }
//             cout << "*";
            
//         }
//         cout << endl;

//     }
//     for(int i= 0 ; i<n-1 ; i++){
//         for(int j= 0 ; j< i+1 ; j++){
//             cout << " ";
//         }
//         cout <<"*";
//         if(i!=n-2){
//             for(int j= 0 ; j< 2*(n-i)-5 ; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//hollow diamond pattern







// #include <iostream>
// using namespace std;

// int main(){
//     int n=4 ; 
//     for(int i=0 ; i<n ; i++){
//         for(int j = 0 ; j<i+1 ; j++){
//             cout << "*";
//         }
//         if(i!=n-1){
//             for(int j= 0 ; j<2*(n-i-1) ; j++){
//                 cout << " ";
//             }
//         }
//         for(int j = 0 ; j<i+1 ; j++){
//             cout << "*";
//         }
//         cout << endl;

//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j = 0 ; j<n-i ; j++){
//             cout << "*";
//         }
//         if(i!=0){
//             for(int j= 0 ; j<2*i ; j++){
//                 cout << " ";
//             }
//         }
//         for(int j = 0 ; j<n-i ; j++){
//             cout << "*";
//         }
//         cout << endl;
        
//     }
//     return 0;

// }


// //butterfly pattern





// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n+1; j++){
            

//             if(i==1 || i==n || j==1 || j==n+1){
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }

//         }
//         cout << endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j< n-i-1 ; j++){
//             cout << " ";

//         }
//         for(int j=0 ; j<i+1 ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<n-i-1 ; j++){
//             cout << " ";
//         }
//         for(int j=0 ; j< 2*i+1 ;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<i ; j++){
//             cout << " ";
//         }
//         for(int j=0 ; j< 2*n-2*i-1 ;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=1 ; i<=n ; i++){
//         int start;
//         if(i%2 == 0){
//                 start = 0;
//             }else{
//                 start =1;
//             }
//         cout << start << " ";

//         for(int j=2 ; j<=i ; j++){
            
//             start = 1-start;
//             cout << start << " ";
            

//         }
//         cout << endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=0; j<(n-i) ; j++){
//             cout << " ";
//         }
//         for(int j=0 ; j<n ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            cout << " ";
        }

        for(int j=i+1 ; j>0 ; j--){
            cout << j;

        }
        int a=2;

        for(int j=0 ; j<i ;j++){
            
            cout << a;
            a++;
        }
        cout << endl;

        
    }
    return 0;
}