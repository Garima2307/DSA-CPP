#include <iostream>
#include <vector>
#include <string>
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

int main(){
    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    while(!heap.empty()){
        cout << heap.top() << endl;
        heap.pop();
    }


    return 0;
}
