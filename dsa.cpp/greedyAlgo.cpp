#include <iostream>
#include <vector>
using namespace std;

int maxActivities(vector<int> start , vector<int> end){
    //sort end time
    //A0 select
    int count = 1; // because A0 is always counted by default
    int currEnd = end[0];
    cout << "Selecting activity A0\n";
    for(int i=1 ; i<=start.size() ; i++){
        if(start[i] >= currEnd){
            cout << "A" << i << endl;
            count++;
            currEnd = end[i];
        }
    }
    return count;
}

int main(){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};
    cout << maxActivities(start , end)<< endl;
    return 0;
}