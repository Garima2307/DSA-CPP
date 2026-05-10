// #include <iostream>
// #include <string>
// using namespace std;

// class Car{
//     string name;
//     string color;
// public :
//     Car(){
//         cout << "constructor without para is called\n";
//     }
//     Car(string name , string color){
//         cout << "constructor is called with para\n";
//         //name = nameVal;
//         //color = colorVal;
//         this -> name = name;
//         this -> color = color;

//     }
//     void start(){
//         cout << "car started\n";
//     }
//     void stop(){
//         cout << "car stopped\n";
//     }

//     string getName(){   //getter
//         return name;
//     }
// };

// int main(){
//     Car c2;
//     Car c0;
//     Car c1("gg" , "white");
//     cout << c1.getName();
//     return 0;
// }



// // coopy constructor
// #include <iostream>
// #include <string>
// using namespace std;

// class Car{

// public :
//     string name;
//     string color;
//     int *mileage;

//     Car(string name , string color){
//         this -> name = name;
//         this -> color = color;
//         mileage = new int;
//         *mileage = 12;
//     }

//     Car(Car &original){
//         cout << "copy is called\n";
//         name = original.name;
//         color = original.color;
//         mileage = new int;               //deep copy
//         *mileage = *original.mileage;
//         //mileage = original.mileage;      //shallow
//     }

//     ~Car(){
//         cout << "destructor\n";
//         if(mileage != NULL){
//             delete mileage ;
//             mileage = NULL;
//         }
//     }
// };

// int main(){
//     Car c1("honda" , "grey");

//     cout << c1.name << endl;
//     cout << c1.color << endl;
//     cout << *c1.mileage << endl;

    
//     return 0;
// }





// #include <iostream>
// #include <string>
// using namespace std;

// class Animal{
// public :
//     string color;

//     void eat(){
//         cout <<"eats\n";
//     }
//     void breathe(){
//         cout <<"breathe\n";

//     }
// };

// class Fish : protected Animal{
// public :
//     int fins;
//     void swim(){
//         eat();
//         cout << "swim\n";
//     }
// };

// int main(){
//     Fish f1;
//     f1.fins = 3;
//     cout << f1.fins << endl;
//     f1.swim();
//     //f1.eat();
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// class complexNum{
//     int real;
//     int imag;
// public:
//     complexNum(int r , int i){
//         real = r;
//         imag = i;

//     }
//     void showNum(){
//         cout << real << "+" << imag << "i" << endl;
//     }
//     complexNum operator + (complexNum &c2){
//         int resreal = this -> real + c2.real;
//         int resimg = this-> imag + c2.imag;
//         complexNum c3(resreal , resimg);
//         return c3;

//     }
// };

// int main(){
//     complexNum c1(3,5);
//     complexNum c2(4,5);

//     c1.showNum();
//     c2.showNum();
//     complexNum c3 = c1+c2;
//     c3.showNum();
//     return 0;
// }





// #include <iostream>
// #include <string>
// using namespace std;

// class Parent{
// public :
//     virtual void hello(){
//         cout << "parent hello\n";

//     }
// };

// class Child : public Parent{
// public :
//     void hello(){
//         cout << "child hello\n";
//     }
// };

// int main(){
//     Child childc1;
//     Parent *ptr;

//     ptr = &childc1;
//     ptr -> hello();
//     return 0;
// }




//abstraction
// #include <iostream>
// using namespace std;

// class Shape{
// public :
//     virtual void draw() = 0;
// };

// class Circle : public Shape{
// public : 
//     void draw(){
//         cout << "draw circle\n";

//     }
// };

// class Sqaure : public Shape{
// public :
//    void draw(){
//     cout << "draw square\n";
//    }
// };

// int main(){
//     Circle c1;
//     c1.draw();

//     Sqaure s1;
//     s1.draw();

//     Shape sq1;//error because abstract class cant have any object
//     sq1.draw();

//     return 0;
// }







// #include <iostream>
// #include <string>
// using namespace std;

// class A{
//     string secret = "secret";
//     friend class B;
//     friend void showSec(A &obj);
// };

// class B{
// public :
//     void showsecret(A &obj){
//         cout << obj.secret << endl;
//     }
// };
// void showSec(A &obj){
//     cout << obj.secret << endl;
// }

// int main(){
//     A a1;
//     B b1;

//     b1.showsecret(a1);
//     showSec(a1);
//     return 0;
// }






//q1
// #include <iostream>
// #include <string>
// using namespace std;

// class Complex{
//     int real;
//     int imag;
// public :
//     Complex(int real , int imag){
//         this -> real = real;
//         this -> imag = imag;

//     }
//     void show(){
//         cout << real << "+" << imag << "i" << endl;
//     }

//     Complex operator -(Complex &obj2){
//         int resReal = this -> real - obj2.real;
//         int resImag = this -> imag - obj2.imag;
//         Complex c3(resReal , resImag);
//         return c3;

//     }
// };
// int main(){
//     Complex c1(4,5);
//     Complex c2(8,6);

//     Complex c3 = c2 - c1;
//     c3.show();
//     return 0;
// }






//q2
// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount{
//     int accountNumber;
//     double balance;
// public :
//     BankAccount(int ac , int bal){
//         accountNumber = ac;
//         balance = bal;
//     }
//     void deposit(double amount){
//         balance += amount;
//     }
//     void withdraw(double amount){
//         if(balance > amount){
//             balance -= amount;
//         }else{
//             cout << "not sufficient balance\n";
//         }

//     }
//     double getBalance(){
//         return balance;

//     }
// };

// int main(){
//     BankAccount b1(4529 , 87000);
//     b1.deposit(13000);
//     b1.withdraw(5000);
//     cout << "balance : " << b1.getBalance() << endl;

//     return 0;
// }





//q3
#include <iostream>
#include <string>
using namespace std;

class Person{
protected :
    string name;
    int age;

public :
    Person(string name , int age){
        this -> name = name;
        this -> age = age;
    }
};

class Student : public Person{
    string studentID;
public : 
    Student(string name , int age , string studentID): Person(name , age){
        this -> studentID = studentID;
    }
    void displayStudentInfo(){
        cout << "name = " << this -> name << endl;
        cout << "age = " << this -> age << endl;
        cout << "studentID = " << this -> studentID << endl;

    }
};

int main(){
    Student student("Alice",20,"S12345");
    student.displayStudentInfo();
    return 0;
}