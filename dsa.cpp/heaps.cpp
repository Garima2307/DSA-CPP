#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

class Heap{
    vector<int> vec; //CBT
public :
    void push(int val){      //0(log n)
        vec.push_back(val);
        int x = vec.size() - 1;  //x = child idx
        int parI = (x-1) / 2;

        while(parI>=0 && vec[x] > vec[parI]){ //reverse the comparison to convert it into min heap
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x-1) /2;
        }
    }

    void heapify(int i){
        if(i>=vec.size()){
            return;
        }

        int l = 2*i + 1;
        int r = 2*i + 2;

        int maxI = i;
        if(l<vec.size() && vec[l]>vec[maxI]){
            maxI = l;
        }
        if(r<vec.size() && vec[r]>vec[maxI]){
            maxI = r;
        }

        swap(vec[maxI] , vec[i]);
        if(maxI != i){
            heapify(maxI);
        }
    }
    void pop(){
        swap(vec[0] , vec[vec.size() - 1]);
        vec.pop_back();
        heapify(0);

    }

    int top(){
        return vec[0];          //0(1)
    }

    bool empty(){
        return vec.size() == 0;
    }
};

//PQ for objects
class Student{  //"<" overload for PQ objects
public:
    string name;
    int marks;

    Student(string name , int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj)const {
        return this->name < obj.name;           //> -> min heap
    }
};


//HEAP SORT
void heapify(int i , vector<int> &arr , int n){
    int left = 2*i + 1;
    int right = 2*i + 2;
    int maxI = i;

    if(left<n && arr[left] > arr[maxI]){
        maxI = left;
    }
    if(right<n && arr[right] > arr[maxI]){
        maxI = right;
    }

    if(maxI != i){
        swap(arr[maxI], arr[i]);
        heapify(maxI , arr , n);
    }
}
void heapSort(vector<int> &arr){
    int n = arr.size();
    //step 1 : build max heap = 0(n*log n)
    for(int i = n/2 - 1; i>=0 ; i--){
        heapify(i , arr , n);
    } 

    //TAKING ELEMENTS TO THEIR CORRECT POSITION = 0(n*log n)
    for(int i = n-1 ; i>=0 ; i--){
        swap(arr[0] , arr[i]);
        heapify(0 , arr , i);
    }

}

int main(){
    // priority_queue<Student> pq;

    // pq.push(Student("aman" , 85));
    // pq.push(Student("raman" , 45));
    // pq.push(Student("maman" , 15));
    // pq.push(Student("saman" , 95));
   
    // while(!pq.empty()){
    //     cout << pq.top().name << " " << pq.top().marks << endl;
    //     pq.pop();
    // }



    vector<int> arr = {1,4,2,5,3};
    heapSort(arr);
    
    for(int i=0 ; i<arr.size() ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
