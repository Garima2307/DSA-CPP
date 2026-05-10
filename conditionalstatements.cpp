// # include <iostream>
// using namespace std;

// int main() {
//     int n=4;

//     if (n>=0) {
//         cout << "n is positive\n";
//     }else{
//         cout << "n is negative\n";
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a characater : ";
//     cin >> ch;

//     if(ch>= 'a' && ch <= 'z'){
//         cout << ch << " is a lowercase character\n";
//     }else{
//         cout << ch << " is an uppercase character\n";
//     }
//     return 0;

// }






// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter any number : "; cin>>n;

//     if(n>0){
//         cout << n << " = positive \n";

//     }else if(n==0){
//         cout << n << " = zero\n";

//     }else{
//         cout << n << " = negative\n";
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number = ";
//     cin >> n;

//     if(n%2 == 0){
//         cout << n << " is an even number\n";

//     }else{
//         cout<< n << " is an odd number\n";
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "Emter your age : ";
//     cin >> age ;
//     if(age>=18){
//         cout << "You are eligible to vote\n";
//     }else{
//         cout << "You are not eligible to vote\n";
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "Enter marks = ";
//     cin >> marks;

//     if(marks>=90){
//         cout << "A\n";

//     }else if(marks>=75){
//         cout <<"B\n";
//     }else if(marks>=65){
//         cout << "C\n";
//     }else{
//         cout << "D\n";
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout << "Enter three numbers : ";
//     cin>> a>>b>>c;

//     if(a>b && a>c){
//         cout << a << " = largest number\n";
//     }else if(b>a && b>c){
//         cout << b << "= largest number\n";
//     }else{
//         cout << c << " = largest number\n";
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number = ";
//     cin >> n;

//     if(n%3 == 0 && n%5 == 0){
//         cout << n << " is divisible by both 3 and 5\n";

//     }else if(n%3 == 0){
//         cout << n << " is divisible by 3\n";
//     }else if(n%5 == 0){
//         cout << n << " is divisible by 5\n";
//     }else{
//         cout << n << " is not divisible by both 3 and 5\n";
//     }
//     return 0;
// }







// #include <iostream>
// using namespace std;

// int main() {
//     int hours;
//     cout << "Enter hours of the day = ";
//     cin >> hours;

//     if(hours<12){
//         cout << "Good Morning" << endl;
//     }else if(hours>=12 && hours<=17) {
//         cout << "Good Afternoon" << endl;
//     }else{
//         cout << "Good Evening" << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     double a,b,c;
//     cout << "Enter the value of three angles of a triangle : ";
//     cin >> a >> b >> c;

//     double sum = a+b+c;

//     if(sum == 180 && a>0 && b>0 && c>0){
//         cout << "The traingle is valid\n";
//     }else{
//         cout << "The traingle is invalid\n";
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter a year : ";
//     cin >> year;

//     if(year%4==0){
//         if(year%100==0){
//             if(year%400==0){
//                 cout << year << " is a leap year\n";
//             }else{
//                 cout << year << " is not a leap year\n";
//             }
//         }else{
//             cout << year << " is a leap year\n";
//         }
//     }else{
//         cout << year << " is not a leap year\n";
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter your age :";
//     cin >> n;

//     if(8){                                      //5  or -5 is taken as statement is true whereas 0 is always false , then staement will not execute
//         cout << "Can vote\n";                     // it will be executed 
//     }
//     if(n>=45){
//         cout << "Can contest elections\n";
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int income;
//     float tax;
//     cout << "Enter your income in lakhs(L) :";
//     cin >> income;

//     if(income < 5){
//         cout << "0% tax\n";
//         tax = 0;
//     }else if (income <= 10){
//         cout << "20 % tax" << endl;

//         tax = (0.2*income );
//     }else {
//         cout << "30 %tax \n";
//         tax = (30 * income )/ 100;
//     }
//     cout << "Tax to be paid: " << ( tax * 100000) << endl;



//     return 0;
// }






// #include <iostream>
// using namespace std;

// int main(){
//     int a  ;
//     cout << "Enter a :";
//     cin >> a;



//     bool isEven = a%2==0 ? true : false  ;
//     cout << isEven ;
//     return 0;

// }




// #include <iostream>
// using namespace std;

// int main(){
//     int a ,b;
//     char symbol;
//     cout << "Enter a : ";
//     cin >> a;

//     cout << "Enter b : ";
//     cin >> b;

//     cout << "Enter the operation to be performed : ";
//     cin >> symbol;

    // if(symbol == '+'){
    //     cout << a+b ;

    // }else if(symbol == '-'){
    //     cout << a-b;
    // }else if (symbol == '*'){
    //     cout << a*b;
    // }else if (symbol == '/' ){
    //     cout << a/b;
    // }else {
    //     cout << "Invalid operator";
    // }
    // cout << endl;


    // switch(symbol){
    //     case '+' : cout << a+b;
    //             break;
    //     case '-' : cout << a-b;
    //             break;
    //     case '*' : cout << a*b;
    //             break;
    //     case '/' : cout << a/b;
    //             break;
    //     default : "Invalid operator";
    // }

    // cout << endl;
    // return 0;




  //armstrong number  
#include <iostream>
using namespace std;

int main(){
    int n , cube;
    cout << "Enter a number : " ;
    cin >> n;
    int add = 0;
    int digit=0;
    int original = n;
    if(original < 0){
        cout << "Negative numbers are not armstrong numbers\n";
        return 0;
    }
    while(n>0){
        digit = n % 10;
        n = n/10;

        cube = digit * digit * digit;
        add += cube;
        

    }

    
    if(add == original){
        cout << "It is an armstrong number\n";

    }else{
        cout << "It is not an armstrong number\n";



    }

    return 0;


}