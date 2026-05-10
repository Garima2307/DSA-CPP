// #include <iostream>
// using namespace std;

// class Node{
// public :
//     int data;
//     Node* next;

//     Node(int data){
//         this-> data = data;
//         this->next = NULL;
//     }
// };

// class Queue{
//     Node* head;
//     Node* tail;
// public:
//     Queue(){
//         head = NULL;
//         tail = NULL;
//     }
//     void push(int data){
//         Node* newNode = new Node(data);
//         if(head == NULL){
//             head = tail = newNode;
//         }else{
//             tail->next = newNode;
//             tail = newNode;
//         }

//     }
//     void pop(){
//         if(empty()){
//             cout << "queue is empty\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;

//     }
//     int front(){
//         if(empty()){
//             cout << "queue is empty\n";
//             return -1;
//         }
//         return head -> data;

//     }
//     bool empty(){
//         return head == NULL;
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);


//     while(!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;
// }









// #include <iostream>
// using namespace std;

// class Queue{
//     int f, r;
//     int* arr;

//     int capacity;
//     int currSize;
// public :
//     Queue(int capacity){
//         this->capacity = capacity;
//         arr = new int[capacity];
//         currSize = 0;
//         f = 0;
//         r = -1;

//     }

//     void push(int data){
//         if(capacity == currSize){
//             cout << "queue full\n";
//             return;
//         }
//         r = (r+1)% capacity;
//         arr[r] = data;
//         currSize++;

//     }
//     void pop(){
//         if(empty()){
//             cout << "queue empty\n";
//             return;
//         }
//         f = (f+1) % capacity;
//         currSize--;

//     }
//     int front(){
//         if(empty()){
//             cout << "queue empty\n";
//             return -1;
//         }
//         return arr[f];
//     }
//     bool empty(){
//         return currSize == 0;

//     }
//     void printRear(){
//         cout << arr[r];
//     }
// };

// int main(){
//     Queue q(4);

//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     cout << q.front() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     q.push(5);
//     cout << q.front() << endl;
//     q.printRear() ;
//     cout << endl;

//     return 0;
// }








// #include <iostream>
// #include <stack>
// using namespace std;

// class Queue{
//     stack <int> s1;
//     stack <int> s2;
// public:
//     void push(int data){//0(n)
//         //s1->s2
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(data);
//         //s2-> s1
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }

//     void pop(){///0(1)
//         s1.pop();
//     }

//     int front(){//0(1)
//         return s1.top();
//     }

//     bool empty(){
//         return s1.empty();
//     }
// };

// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;
// }






// #include <iostream>
// #include <stack>
// using namespace std;

// class Queue{
//     stack <int> s1;
//     stack <int> s2;
// public :
//     void push(int data){
//         s1.push(data);
//     }

//     void pop(){
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         s2.pop();
//     }
//     int front(){
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }

//         return s2.top();
//     }
//     bool empty(){
//         return s2.empty() && s1.empty();
//     }
    
// };
// int main(){
//     Queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     while(!q.empty()){
//         cout << q.front() << endl;
//         q.pop();
//     }
//     return 0;

// }







// #include <iostream>
// #include <queue>
// using namespace std;

// class Stack{
//     queue<int>q1 , q2;
// public :
//     void push(int data){
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.push(data);
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
//     void pop(){
//         if(q1.empty()){
//             cout << "queue full\n";
//             return ;
//         }
//         q1.pop();
//     }
//     int top(){
//         if(q1.empty()){
//             cout << "queue full\n";
//             return -1;
//         }
//         return q1.front();
//     }

//     bool empty(){
//         return q1.empty();
//     }
// };
// int main(){
//     Stack s;
//     s.push(3);
//     s.push(2);
//     while(!s.empty()){
//         cout << s.top() << endl;
//         s.pop();
//     }
//     return 0;
// }






// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;

// void firstNonRepeat(string str){
//     queue<char> Q;
//     int freq[26] = {0};
//     for(int i=0 ; i<str.size() ; i++){
//         char ch = str[i];
//         Q.push(ch);

//         freq[ch - 'a']++;
//         while(!Q.empty() &&  freq[Q.front() - 'a'] > 1){
//             Q.pop();
//         }
//         if(Q.empty()){
//             cout << "-1\n";
//         }else{
//             cout << Q.front() << endl;
//         }
//     }

// }
// int main(){
//     string str = "aabccxb";
//     firstNonRepeat(str);
//     return 0; 
// }






// #include <iostream>
// #include <queue>

// using namespace std;

// void interleave(queue <int> &org){
//     queue<int> first;
//     int n = org.size();

//     for(int i=0 ; i<n/2 ; i++){
//         first.push(org.front());
//         org.pop();
//     }
//     while(!first.empty()){
//         org.push(first.front());
//         first.pop();

//         org.push(org.front());
//         org.pop();
//     }
// }
// int main(){
//     queue <int> org;
//     for(int i=1 ; i<=10 ;i++){
//         org.push(i);
//     }
//     interleave(org);
//     for(int i=1 ; i<=10 ;i++){
//         cout << org.front() << " ";
//         org.pop();
//     }
//     cout << endl;
//     return 0;

// }





// #include <iostream>
// #include <stack>

// #include <queue>
// using namespace std;

// void reversal(queue <int> &q){
//     stack <int> s;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }

//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }
// }
// int main(){
//     queue <int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     reversal(q);
//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
//     return 0;
// }





#include <iostream>
#include <deque>
using namespace std;

class Queue{
    deque<int> dq;
public :
    void push(int data){
        dq.push_back(data);
    }
    void pop(){
        dq.pop_front();
    }
    int front(){
        return dq.front();
    }
    bool empty(){
        return dq.empty();
    }
};
int main(){
    Queue q;
    for(int i=1 ; i<=5 ; i++){
        q.push(i);
    }
    while(!q.empty()){

        cout << q.front() << " " ;
        q.pop();
    }
    cout << endl;
    return 0;
}