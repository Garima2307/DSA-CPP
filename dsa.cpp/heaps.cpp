#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int> , greater<int>> pq;

    pq.push(56);
    pq.push(45);
    pq.push(78);
    pq.push(12);
    pq.push(51);

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}