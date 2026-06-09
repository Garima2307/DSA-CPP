// #include <iostream>
// #include <vector>
// #include <string>
// #include <queue>
// using namespace std;

// class Heap{
//     vector<int> vec; //CBT
// public :
//     void push(int val){      //0(log n)
//         vec.push_back(val);
//         int x = vec.size() - 1;  //x = child idx
//         int parI = (x-1) / 2;

//         while(parI>=0 && vec[x] > vec[parI]){ //reverse the comparison to convert it into min heap
//             swap(vec[x], vec[parI]);
//             x = parI;
//             parI = (x-1) /2;
//         }
//     }

//     void heapify(int i){
//         if(i>=vec.size()){
//             return;
//         }

//         int l = 2*i + 1;
//         int r = 2*i + 2;

//         int maxI = i;
//         if(l<vec.size() && vec[l]>vec[maxI]){
//             maxI = l;
//         }
//         if(r<vec.size() && vec[r]>vec[maxI]){
//             maxI = r;
//         }

//         swap(vec[maxI] , vec[i]);
//         if(maxI != i){
//             heapify(maxI);
//         }
//     }
//     void pop(){
//         swap(vec[0] , vec[vec.size() - 1]);
//         vec.pop_back();
//         heapify(0);

//     }

//     int top(){
//         return vec[0];          //0(1)
//     }

//     bool empty(){
//         return vec.size() == 0;
//     }
// };

// //PQ for objects
// class Student{  //"<" overload for PQ objects
// public:
//     string name;
//     int marks;

//     Student(string name , int marks){
//         this->name = name;
//         this->marks = marks;
//     }

//     bool operator < (const Student &obj)const {
//         return this->name < obj.name;           //> -> min heap
//     }
// };


// //HEAP SORT
// void heapify(int i , vector<int> &arr , int n){
//     int left = 2*i + 1;
//     int right = 2*i + 2;
//     int maxI = i;

//     if(left<n && arr[left] > arr[maxI]){
//         maxI = left;
//     }
//     if(right<n && arr[right] > arr[maxI]){
//         maxI = right;
//     }

//     if(maxI != i){
//         swap(arr[maxI], arr[i]);
//         heapify(maxI , arr , n);
//     }
// }
// void heapSort(vector<int> &arr){
//     int n = arr.size();
//     //step 1 : build max heap = 0(n*log n)
//     for(int i = n/2 - 1; i>=0 ; i--){
//         heapify(i , arr , n);
//     } 

//     //TAKING ELEMENTS TO THEIR CORRECT POSITION = 0(n*log n)
//     for(int i = n-1 ; i>=0 ; i--){
//         swap(arr[0] , arr[i]);
//         heapify(0 , arr , i);
//     }

// }

// int main(){
//     // priority_queue<Student> pq;

//     // pq.push(Student("aman" , 85));
//     // pq.push(Student("raman" , 45));
//     // pq.push(Student("maman" , 15));
//     // pq.push(Student("saman" , 95));
   
//     // while(!pq.empty()){
//     //     cout << pq.top().name << " " << pq.top().marks << endl;
//     //     pq.pop();
//     // }



//     vector<int> arr = {1,4,2,5,3};
//     heapSort(arr);
    
//     for(int i=0 ; i<arr.size() ; i++){
//         cout << arr[i] << endl;
//     }

//     return 0;
// }










//NEARBY CARS

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Car{
// public:
//     int idx;
//     int carSq; //distSq

//     Car(int idx , int carSq){
//         this->idx = idx;
//         this->carSq = carSq;
//     }

//     bool operator < (const Car &obj)const{
//         return this->carSq > obj.carSq;  //min heap
//     }
// };

// void nearbyCars(vector<pair<int,int>> pos , int k){
//     //idx , distSq
//     vector<Car> cars;

//     for(int i=0 ; i<pos.size() ; i++){//0(n)
//         int distSq = (pos[i].first *pos[i].first ) + (pos[i].second * pos[i].second);
//         cars.push_back(Car(i , distSq));
//     }

//     priority_queue<Car> pq(cars.begin() , cars.end());//0(n)

//     for(int i =0 ; i<k ; i++){//0(k*log n + n)
//         cout << pq.top().idx << endl;
//         pq.pop();//0(logn)
//     }
// }
// int main(){
//     vector<pair<int,int>> pos;
//     pos.push_back(make_pair(3,3));
//     pos.push_back(make_pair(5,-1));
//     pos.push_back(make_pair(-2,4));

//     int k = 2;
    
//     nearbyCars(pos , k);
// }









//CONNECT N ROPES

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// int connectNRopes(vector<int> ropes){
//     priority_queue<int , vector<int> , greater<int>> pq(ropes.begin() , ropes.end()); //0(n)
//     int cost = 0;

//     while(pq.size() > 1){
//         int min1 = pq.top();
//         pq.pop();

//         int min2 = pq.top();
//         pq.pop();

//         cost += min1 + min2;
//         pq.push(min1 + min2);
//     }

//     cout << cost << endl;
//     return cost;
// }
// int main(){
//     vector<int> ropes = {4,3,2,6};
    
//     connectNRopes(ropes);


//     return 0;
// }







//WEAKEST SOLDIER QUE

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Row{
// public :
//     int count;
//     int idx;

//     Row(int count , int idx){
//         this->count = count;
//         this->idx = idx;
//     }
//     bool operator < (const Row &obj) const{
//         if(this->count == obj.count){
//             return this->idx > obj.idx;
//         }
//         return this->count > obj.count; //min heap
//     }
// };

// void weakestSoldier(vector<vector<int>> matrix , int K){
//     vector<Row> rows;

//     for(int i=0 ; i<matrix.size() ; i++){
//         int count = 0;
//         for(int j=0 ; j<matrix[i].size() && matrix[i][j] == 1 ; j++){
//             count++;
//         }
//         rows.push_back(Row(count , i));
//     }

//     priority_queue<Row> pq(rows.begin() , rows.end());
//     for(int i=0 ; i<K ; i++){
//         cout << pq.top().idx << endl;
//         pq.pop();
//     }
// }

// int main(){
//     vector<vector<int>> matrix = {{1,0,0,0},
//                                   {1,1,1,1},
//                                   {1,0,0,0},
//                                   {1,0,0,0}};
//     weakestSoldier(matrix , 2);

//     return 0;
// }








//SLIDING WINDOW MAXIMUM
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void slidingWindow(vector<int> arr , int k){
    priority_queue<pair<int,int>> pq;
    
    //first window
    for(int i=0 ; i<k ; i++){
        pq.push(make_pair(arr[i] , i));
    }

    cout << "output =" << pq.top().first << " ";

    for(int i=k ; i<arr.size() ; i++){
        while(!pq.empty() && pq.top().second <= (i-k)){
            pq.pop();
        }
        pq.push(make_pair (arr[i],i));
        cout << pq.top().first << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int K = 3;

    slidingWindow(arr , K);
    return 0;
}

