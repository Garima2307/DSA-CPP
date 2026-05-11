#include <iostream>
#include <vector>
#include <algorithm>
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
bool compare(pair<int ,int> p1 , pair<int ,int> p2){
    return p1.second < p2.second;

}

int main(){
    vector<int> start = {0,1,2};
    vector<int> end = {9,2,4};

    vector<pair<int , int>> act(3 , make_pair(0,0));
    act[0] = make_pair(0,9);
    act[1] = make_pair(1,2);
    act[2] = make_pair(2,4);
    for(int i=0 ; i<act.size() ; i++){
        cout << "A" << i << ":" << act[i].first << "," << act[i].second << endl;
    }
    sort(act.begin() , act.end() , compare);

    cout << "--------------sorted-------------\n";
    for(int i=0 ; i<act.size() ; i++){
        cout << "A" << i << ":" << act[i].first << "," << act[i].second << endl;
    }
    return 0;
}