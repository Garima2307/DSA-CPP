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

class Student{  //"<" overload for PQ objects
public:
    string name;
    int marks;

    Student(string name , int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj)const {
        return this->name < obj.name;
    }
};

int main(){
    priority_queue<Student> pq;

    pq.push(Student("aman" , 85));
    pq.push(Student("raman" , 45));
    pq.push(Student("maman" , 15));
    pq.push(Student("saman" , 95));
   
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().marks << endl;
        pq.pop();
    }


    return 0;
}
