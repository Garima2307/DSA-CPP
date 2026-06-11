// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Node{
// public:
//     string key;
//     int val;
//     Node* next;

//     Node(string key , int val , Node* next){
//         this->key = key;
//         this->val = val;
//         this->next = NULL;
//     }

//     ~Node(){ //LL WILL BE DELETED FROM BOTTOM TO TOP
//         if(next != NULL){
//             delete next;
//         }
//     }
// };

// class HashTable{
//     int totSize;
//     int currSize; //for rehashing
//     Node** table;

//     int hashFunction(string key){
//         int idx = 0;

//         for(int i=0 ; i<key.size() ; i++){
//             idx = idx + (key[i] * key[i]) % totSize;
//         }
//         return idx % totSize;
//     }

//     void rehash(){//0(n)
//         Node** oldTable = table;
//         int oldSize = totSize;

//         totSize = 2*totSize;
//         currSize = 0;
//         table = new Node*[totSize];

//         for(int i=0 ; i<totSize ; i++){ //store NULL value to initialise table 
//             table[i] = NULL;
//         }

//         //copy old val
//         for(int i=0 ; i<oldSize ; i++){
//             Node* temp =oldTable[i];
//             while(temp != NULL){
//                 insert(temp->key , temp->val);
//                 temp = temp->next;
//             }
//             if(oldTable[i] != NULL){
//                 delete oldTable[i];
//             }
//         }
       
//         delete[] oldTable;
//     }

// public :
//     HashTable(int size = 5){
//         totSize = size;
//         currSize = 0;

//         table = new Node*[totSize];
//         for(int i=0 ; i<totSize ; i++){ //store NULL value to initialise table , garbage val removed and NULL placed in its position
//             table[i] = NULL;
//         }
//     }

//     void insert(string key , int val){ //0(1)
//         int idx = hashFunction(key);

//         Node* newNode = new Node(key , val, NULL);

//         newNode-> next = table[idx];
//         table[idx] = newNode;

//         currSize++;

//         double lambda = currSize / (double)totSize;
//         if(lambda > 1){
//             rehash();         //0(n) = rehashing happens in very few cases so mostly TC of insert = 0(1)
//         }
//     }
    
//     void remove(string key){
//         int idx = hashFunction(key);

//         Node* temp = table[idx];
//         Node* prev = temp;
//         while(temp != NULL){
//             if(temp->key == key){
//                 if(prev == temp){
//                     table[idx] = temp->next;
//                 }else{
//                     prev->next = temp->next;
//                 }
//                 break;
//             }
//         }

//     }

//     bool exists(string key){ //same logic as search
//         int idx = hashFunction(key);

//         Node* temp = table[idx];
//         while(temp != NULL){
//             if(temp ->key == key){
//                 return true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }

//     int search(string key){
//         int idx = hashFunction(key);

//         Node* temp = table[idx];
//         while(temp != NULL){
//             if(temp ->key == key){
//                 return temp->val;
//             }
//             temp = temp->next;
//         }
//         return -1;

//     }

//     void print(){
//         for(int i=0 ; i<currSize ; i++){
//             cout << i << "->";
//             Node* temp = table[i];
//             while(temp != NULL){
//                 cout << temp->key << ", " << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << endl;
//         }
//     }
// };

// int main(){
//     HashTable ht;

//     ht.insert("india" , 150);
//     ht.insert("china" , 150);
//     ht.insert("us" , 100);
//     ht.insert("nepal" , 10);
//     ht.insert("uk" , 20);

//     ht.remove("us");
//     ht.print();

//     cout << "--------------\n";
//     ht.remove("china");
//     ht.print();
//     //if(ht.exists("nepal")){
//     //    cout << ht.search("nepal") << endl;
//     //}
//     return 0;
// }
















//STL CONTAINERS

// #include <iostream>
// #include <unordered_map>
// #include <string>
// #include <map>
// using namespace std;

// int main(){
//     map< string , int> m;

//     m["China"] = 150;
//     m["nepal"] = 20;
//     m["india"] = 120;
//     m["us"] = 10;
//     m["uk"] = 110;

//     m["india"] = 900;        //update value

//     for(pair<string , int> country : m){
//         cout << country.first << ", " << country.second << endl;
//     }

//     m.erase("nepal");

//     if(m.count("nepal")){
//         cout << "nepal exists" << endl;
//     }else{
//         cout << "nepal does not exist" << endl;
//     }
 
//     return 0;
// } 







// #include <iostream>
// #include <unordered_set>
// #include <set>
// using namespace std;

// int main(){
//     set<int> s;

//     s.insert(3);
//     s.insert(7);
//     s.insert(9);
//     s.insert(2);

//     s.insert(3);

//     cout << s.size() << endl;

//     s.erase(7);

//     if(s.find(7) != s.end()){
//         cout << "7 exists\n";
//     }else{
//         cout << "7 dont exists\n";
//     }

//     for(auto el : s){
//         cout << el << " ";
//     }
//     cout << endl;
//     return 0;
// }









//  QUE - majority element
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// void majorityElement(vector<int> nums){
//     unordered_map<int , int> m;

//     for(int i=0 ; i<nums.size() ; i++){
//         if(m.count(nums[i])){
//             m[nums[i]]++;
//         }else{
//             m[nums[i]] = 1;
//         }
//     }

//     for(pair<int,int> p : m){
//         if(p.second > nums.size()/3){
//             cout << p.first << " ";
//         }
//     }
//     cout << endl;
// }

// int main(){
//     vector<int> nums = {1,3,2,5,1,3,1,5,1};
//     vector<int> nums2 = {1,2};

//     majorityElement(nums2);
//     return 0;
// }








//QUE - valid anagram
// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <string>
// using namespace std;

// bool validAnagram(string s , string t){
//     if(s.size() != t.size()){
//         return false;
//     }
//     unordered_map<char , int> freq;

//     for(int i=0 ; i<s.size() ; i++){
//         if(freq.count(s[i])){
//             freq[s[i]]++;
//         }else{
//             freq[s[i]] = 1;
//         }
//     }

//     for(int i=0 ; i<t.size() ; i++){
//         if(freq.count(t[i])){
//             freq[t[i]]--;
//             if(freq[t[i]] == 0){
//                 freq.erase(t[i]);
//             }
//         }else{
//             return false;
//         }

//     }

//     return freq.size() == 0;

// }

// int main(){
//     string s = "race";
//     string t = "care";

//     cout << validAnagram(s , t) << endl;
//     return 0;
// }







//QUE - count distint
// #include <iostream>
// #include <unordered_set>
// #include <vector>
// #include <string>
// using namespace std;

// int countDistinct(vector<int> arr){
//     unordered_set<int> s;

//     for(int i=0 ; i<arr.size() ; i++){
//         s.insert(arr[i]);
//     }

//     for(int el : s){
//         cout << el << " ";
//     }
//     cout << endl;

//     return s.size();
// }
// int main(){
//     vector<int> arr = {4,2,3,5,6,1,2,8,7,9,5,6,5,6,2,3,5};
//     cout << countDistinct(arr)<< endl ;

//     return 0;
// }










//QUE - union and intersection
// #include <iostream>
// #include <unordered_set>
// #include <vector>
// #include <string>
// using namespace std;

// void getunion(vector<int> arr1 , vector<int> arr2){
//     unordered_set<int> s;

//     for(int el : arr1){
//         s.insert(el);
//     }
//     for(int el : arr2){
//         s.insert(el);
//     }
//     //print union
//     for(int el : s){
//         cout << el << " ";
//     }
//     cout << endl;
// }

// void intersection(vector<int> arr1 , vector<int> arr2){
//     unordered_set<int> s;

//     for(int el : arr1){
//         s.insert(el);
//     }

//     for(int el : arr2){
//         if(s.find(el) != s.end()){ //FOUND
//             cout << el << " ";
//             s.erase(el);
//         }
//     }
//     cout << endl;

// }

// int main(){
//     vector<int> arr1 = {7,3,9};
//     vector<int> arr2 = {6,3,9,2,9,4};

//     getunion(arr1 , arr2);
//     intersection(arr1 , arr2);

//     return 0;
// }










//QUE -  LARGEST SUBARRAY WITH SUM 0
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int largestSub(vector<int> arr){
    unordered_map<int , int> m;

    int sum = 0;
    int ans = 0;

    for(int j=0 ; j<arr.size() ; j++){
        sum += arr[j];

        if(m.count(sum)){
            int currLen = j - m[sum];
            ans = max(ans , currLen);
        }else{
            m[sum] = j;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15,-2,2,-8,1,7,10};
    cout << largestSub(arr) << endl;
    return 0;
}
