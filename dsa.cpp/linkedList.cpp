// #include <iostream>
// using namespace std;

// class Node{
// public :
//     int data ; 
//     Node* next;
//     Node(int val){
//         data = val;
//         next = NULL;
//     }
//     ~Node(){
       
//         if(next != NULL){
            
//             delete next;
//             next = NULL;
//         }
//     }

// };

// class List{
//     Node* head;
//     Node* tail;
// public :
//     List(){
//         head = NULL;
//         tail = NULL;
//     }
//     ~List(){
        
//         if(head!= NULL){
//             delete head;
//             head = NULL;
//         }
//     }
//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }else{
//             newNode -> next = head;
//             head = newNode;
//         }

//     }
//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }else{
//             tail -> next = newNode;
//             tail = newNode;
//         }

//     }
//     void printList(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout << temp -> data << "->";
//             temp = temp -> next;
//         }
//         cout << "NULL\n";
//     }

//     void insert(int val , int pos){
//         Node* newNode = new Node(val);
//         Node* temp = head;
//         for(int i=0 ; i<pos-1 ; i++){
//             if(temp == NULL){
//                 cout << "Invalid pos\n";
//                 return;
//             }
//             temp = temp-> next;
//         }
//         newNode-> next = temp -> next;
//         temp-> next = newNode;

//     }

//     void pop_front(){
//         if(head == NULL){
//             cout << "LL empty\n";
//             return ;

//         }
//         Node* temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;

//     }

//     void pop_back(){
//         Node* temp = head;
//         while(temp -> next -> next != NULL){
//             temp = temp -> next;
//         }
//         temp -> next = NULL;
//         delete tail;
//         tail = temp;
//     }

//     int searchItr(int key){
//         Node* temp = head;
//         int i =0;
//         while(temp != NULL){
//             if(temp -> data == key){
//                 return i;
//             }
//             temp = temp -> next;
//             i++;
            
//         }
//         return -1;
//     }

//     int helper(Node* temp , int key){
//         if(temp == NULL){
//             return -1;
//         }
//         if(temp -> data == key){
//             return 0;
//         }
//         int idx = helper(temp -> next , key);
//         if(idx == -1){
//             return -1;
//         }
//         return idx+1;
        
//     }
//     int searchRec(int key){
//         return helper(head , key);
//     }

//     void reverse(){
//         Node* curr = head;
//         Node* prev = NULL;
//         tail = head;
//         while(curr!= NULL){
//             Node* next = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
//     }
//     int getsize(){
//         Node* temp = head;
//         sz =0;
//         while(temp!= NULL){
//             temp = temp-> next;
//             sz++;

//         }
//         return sz;
//     }
//     void removeNth(int n){
//         int size = getsize();
//         Node* prev = head;
//         for(int i=0 ; i< (size - n) ; i++){
//             prev = prev -> next;
//         }
//         prev -> next = prev -> next -> next;
    
// };
// int main(){
//     List ll;
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.printList();
    
    
//     ll.reverse();


//     ll.printList();

//     return 0;
// }








// #include <iostream>
// using namespace std;

// class Node{
// public :
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         next = NULL;
//     }
// };

// class List{
// public :
//     Node* head;
//     Node* tail;
//     List(){
//         head = NULL;
//         tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode ;
//         }else{
//             newNode -> next = head;
//             head = newNode; 
//         }
//     }
//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         }else{
//             tail -> next = newNode;
//             tail = newNode;
//         }

//     }

//     void pop_front(int val){
//         if(head == NULL){
//             return;
//         }
//         Node* temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;
//     }
// };


// void printList(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp-> data << "->";
//         temp = temp-> next;
//     }
//     cout << "NULL\n";
// }

// void removeCycle(Node* head){
//     Node* slow = head; // cycle detection
//     Node* fast = head;
//     bool isCyclic = false;
//     while(fast != NULL && fast-> next != NULL){
//         slow = slow -> next;
//         fast = fast -> next -> next;
//         if(fast== slow){
//             cout << "yes\n";
//             isCyclic = true;
//             break;  
//         }
//     }
//     if(!isCyclic){
//         cout << "cycle dont exist\n";
//         return;
//     }

//     slow = head;
//     if(slow == fast){ // special case : tail -> head
//         while(fast -> next != slow){
//             fast = fast -> next;

//         }
//         fast -> next = NULL;
//     }else{
//         Node* prev = fast;
//         while(slow != fast){
//             slow = slow-> next;
//             prev = fast;
//             fast = fast -> next;
//         }
//         prev -> next = NULL; //remove cycle

//     }

// }
// Node* splitAtMid(Node* head){
//     Node* slow = head;
//     Node* fast = head;
//     Node* prev = NULL;
//     while(fast!= NULL && fast-> next !=NULL){
//         prev = slow;
//         slow = slow-> next;
//         fast = fast -> next -> next;
//     }
//     if(prev != NULL){ //split
//         prev-> next = NULL;
//     }
//     return slow;
// }

// Node* reverse(Node* head){
//     Node* prev = NULL;
//     Node* curr = head;
//     while(curr!= NULL){
//         Node* next = curr -> next;
//         curr-> next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
// Node* zigZag(Node* head){

//     Node* rightHead = splitAtMid(head);
//     Node* rightHeadRev = reverse(rightHead);
//     //alternate merging

//     Node* left = head;
//     Node* right = rightHeadRev;
//     Node* tail = NULL;
//     while(left !=NULL && right != NULL){
//         Node* nextLeft = left -> next;
//         Node* nextRight = right -> next;
//         left -> next = right;
//         right-> next = nextLeft;

//         tail = right;
//         left = nextLeft;
//         right = nextRight;

//     }
//     if(right!=NULL){
//         tail -> next = right;
//     }
//     return head;
// }
// Node* merge(Node* left , Node* right){
//     Node* i = left;
//     Node* j = right;
//     List ans;

//     while(i!= NULL && j!= NULL){
//         if(i-> data < j-> data){
//             ans.push_back(i->data);
//             i = i-> next;
//         }else{
//             ans.push_back(j->data);
//             j = j-> next;

//         }
//     }
//     while(i!= NULL){
//         ans.push_back(i->data);
//         i = i-> next;

//     }
//     while(j!=NULL){
//         ans.push_back(j->data);
//         j = j-> next;

//     }
//     return ans.head;
// }
// Node* mergeSort(Node* head){
//     if(head == NULL || head -> next ==NULL){
//         return head;
//     }
//     Node* rightHead = splitAtMid(head);
//     Node* left = mergeSort(head); //left head
//     Node* right = mergeSort(rightHead); //right head
//     return merge(left , right); //head of sorted ll
    
// }

// int main(){
//     List ll;
//     ll.push_front(4);
//     ll.push_front(3);
//     ll.push_front(2);
//     ll.push_front(1);
//     ll.push_front(6);
    
    
//     printList(ll.head);
//     ll.head = zigZag(ll.head);
//     printList(ll.head);

// }







//STL LL Implementation
// #include <iostream>
// #include <list>
// #include <iterator>
// using namespace std;
// void print(list <int> ll){
//     list <int> :: iterator itr;
//     for(itr = ll.begin() ; itr != ll.end() ; itr++){
//         cout << (*itr) << " ";
//     }
//     cout << "NULL\n";

// }
// int main(){
//     list <int> ll;
//     ll.push_back(2);
//     ll.push_back(1);
//     ll.push_front(3);
//     ll.push_front(4);
//     print(ll);
//     cout << ll.size() << " " << ll.front() << " " << ll.back();
//     return 0;
// }





//DOUBLY LL
#include <iostream>
using namespace std;

class Node{
public : 
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class doublyList{
public :
    Node* head;
    Node* tail;

    doublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode -> next = head;
            head -> prev = newNode;

            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head-> next;
        if(head!=NULL){
            head -> prev =NULL;
        }
        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        if(head == NULL){
            return;
        }
        if(head == tail){
            delete head;

            head = tail = NULL;
            return;
        }
        while(temp -> next -> next != NULL){
            temp = temp -> next;
        }
        tail = temp -> next;
        temp -> next = NULL;
        tail -> prev = NULL;
        delete tail ;
        tail = temp;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << "<=>";
            temp = temp -> next;
        }
        cout << "NULL\n";
    }
};
int main(){
    doublyList dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.print();
    dbll.pop_front();
    dbll.pop_back();
    dbll.push_back(8);
    dbll.print();

    return 0;
}