//1 WHILE LOOP

// #include <iostream> 
// using namespace std;

// int main() {
//     int count = 1;

//     while(count <=5) {
//         cout << count << endl;
//         count++ ;

//     }
//     return 0;
// }


// #include <iostream> (print numbers from 1 to 5)
// using namespace std;
// int main() {
//     int count = 1;

//     while(count<=5) {
//         cout << count << " ";
//         count++ ;
//     }
//     cout << endl;
//     return 0;
    
// }


//infinite loop (press ctrl+C to stop it)
// #include <iostream> 
// using namespace std;

// int main() {
//     int n = 59;
//     int count = 1;
//     while(count<=n) {
//         cout << count << " ";
        

//     }
//     cout << endl;
//     return 0;
// } 



//2 FOR LOOP
// #include <iostream> 
// using namespace std;
// int main() {
//     int i;
//     for(i=1 ; i<=7 ; i=i+2) {
//         cout << i << " ";

//     }
//     cout << endl;
//     return 0;
// }



//sum of numbers from 1 to n
// #include <iostream> 
// using namespace std;
 
// int main() {
//     int sum = 0;
//     int n = 7;
//     for(int i=1 ; i<=n ; i++) {
//         sum+=i;
//         if(i==5) {
//             break;//keyword to exit the loop
//         }
        
//     }
//     cout << "Sum = " << sum << endl;
//     return 0;
// }


//while loop to calculate sum of numbers from 1 to n
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;
//     int sum = 0;
//     int i = 1;
//     while(i <= n) {
//         sum += i;
//         i++;
//     }
//     cout << "Sum = " << sum << endl;
//     return 0;
// }



//sum of odd numbers from 1 to n using while loop
// #include <iostream> 
// using namespace std;

// int main() {
//     int n = 10;
//     int sum = 0;
//     int i = 1;

//     while(i <= n ) {
//         if(i%2==1) { // check if i is odd
//             sum += i;
    
//         }

//         i++ ;
//     }
//     cout << "Sum = " << sum << endl;
//     return 0;
// }


//sum of even numbers from 1 to n using for loop
// #include <iostream> 
// using namespace std;

// int main() {
//     int n,i,sum;

//     for(i=1,n=6,sum=0 ; i<=n ; i++ ) {
//         if (i%2 == 0){
//             sum+=i;
//         }
//     } 
//     cout << sum << endl;
//     return 0;

// }


//print even numbers from 1 to n using for loop
// #include <iostream>
// using namespace std;    
// int main() {
//     int n=8;
//     for(int i=1 ; i<=n ; i++ ) {
//         if (i%2 == 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }




//3 DO WHILE LOOP
// #include <iostream>
// using namespace std;

// int main() {
    
//     do{
//         cout << "This will print at least once." << endl;
        
//     }while(8>9);
    

// }

//print numbers from 1 to n using do while loop
// #include <iostream>
// using namespace std;

// int main() {
//     int i=1;
//     int n = 7;

//     do{
//         cout << i << " ";
//         i++;

//     }while(i <= n);
//     cout << endl;
//     return 0;
// }


//CHECK IF A NUMBER IS PRIME OR NOT
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 15;
//     bool isPrime = true;

//     for(int i=2;i*i <=n ;i++ ) {
//         if(n%i==0) {
//             isPrime = false ;
//             break;
        
//         }
//     }

//     if(isPrime == true) {
//         cout << "Prime number" << endl;

//     }else{
//         cout << "Not Prime number" << endl;
//     }
//     return 0;
// }




// #include <iostream> 
// using namespace std;

// int main() {
//     // for(int i=1 ; i<=5 ; i++ ){
//     //     cout << "*****" << endl;

//     int c=89;
//     for (int i=1 ; i<=c ;i++ ){
//         cout << "*" ;

//     }
//     cout << endl;
//     return 0;

    
// }




// 5 NESTED LOOPS
// #include <iostream>
// using namespace std;

// int main() {
//     int n =7;
//     for(int i=1 ; i<=n ; i++ ){
//         int x=4;
//         for(int j=1 ; j<=x ; j++){
//             cout << "*";

//         }
//         cout<< endl;
//     }
//     return 0;
// }



// SUM OF ALL NUMBERS FROM 1 TO N THAT ARE DIVISIBLE BY 3
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int sum =0;
    
//     for(int i=1 ; i<= n ; i++ ){
//         if(i%3==0){
        
//             sum+=i ;
            

//         }
//     }
//     cout << "SUM =" << sum << endl;
//     return 0;
    
// }





//PRINT FACTORIAL OF A NUMBER N
// #include <iostream> 
// using namespace std;

// int main() {
//     int n = 6;
//     int i =1;
//     int product = 1;

//     while(i<=n){
//         product *= i;
//         i++;


//     }
//     cout << "Factorial =" << product << endl;
//     return 0;
// }









// #include <iostream>
// using namespace std;

// int main() {
//     int n ;
//     cout << "Enter a number : ";
//     cin >> n;

//     int sum =0;

//     for(int i=1 ; i<=n ; i++){
//         sum+=i;

//     }
//     cout << "sum = " << sum << endl;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

    
//     for(int i =1;i<=10 ; i++){
//         int product = n;
//         product = product*i;
//         cout << n << "*" << i << "=" << product << endl;
//     }
    
//     return 0;

// }





// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout << "enter a number : ";
//     cin >> n;

//     long long factorial = 1;
//     for(int i=1 ; i<=n ; i++){
//         factorial = factorial*i;

//     }
//     cout << "Factorial = " << factorial << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int val = 1;
//     while(val<=5){
//         if(val==3){
//             break;
//         }
//         cout << val << endl;
//         val++;
//     }

//     return 0;
// }




// #include <iostream>

// using namespace std;

// int main(){
//     int num;

//     do{
        
//         cout << "enter a num :";
//         cin >> num;
//         if(num%10 == 0){
//             break;
//         }
        

//     }while(true);
//     cout << endl;
//     return 0;
// }




#include <iostream>
using namespace std;
int main(){
    int nums;
    do{
        

        cout << "Enter a num : ";
        cin >> nums;
        if(nums%10 == 0){
            continue;
        }
        cout << nums << endl;
    }while(true);
    cout << endl;
    return 0;
}