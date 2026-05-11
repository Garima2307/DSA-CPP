// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int maxActivities(vector<int> start , vector<int> end){
//     //sort end time
//     //A0 select
//     int count = 1; // because A0 is always counted by default
//     int currEnd = end[0];
//     cout << "Selecting activity A0\n";
//     for(int i=1 ; i<=start.size() ; i++){
//         if(start[i] >= currEnd){
//             cout << "A" << i << endl;
//             count++;
//             currEnd = end[i];
//         }
//     }
//     return count;
// }
// bool compare(pair<int ,int> p1 , pair<int ,int> p2){
//     return p1.second < p2.second;

// }

// int main(){
//     vector<int> start = {0,1,2};
//     vector<int> end = {9,2,4};

//     vector<pair<int , int>> act(3 , make_pair(0,0));
//     act[0] = make_pair(0,9);
//     act[1] = make_pair(1,2);
//     act[2] = make_pair(2,4);
//     for(int i=0 ; i<act.size() ; i++){
//         cout << "A" << i << ":" << act[i].first << "," << act[i].second << endl;
//     }
//     sort(act.begin() , act.end() , compare);

//     cout << "--------------sorted-------------\n";
//     for(int i=0 ; i<act.size() ; i++){
//         cout << "A" << i << ":" << act[i].first << "," << act[i].second << endl;
//     }
//     return 0;
// }








//FRACTIONAL KNAPSACK QUE
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool compare(pair<double , int> p1 , pair<double,int> p2){
//     return p1.first > p2.first ;
// }
// int fractionalKnapsack(vector<int> val , vector<int> weight , int W){
//     int n=val.size();
//     vector<pair<double,int>> ratio(n , make_pair(0.0 , 0));

//     for(int i=0 ; i<n ; i++){
//         double r = val[i] / (double)weight[i];
//         ratio[i] = make_pair(r , i);
//     }
//     sort(ratio.begin() , ratio.end() , compare);

//     int ans =0;
//     for(int i=0 ; i<n ; i++){
//         int idx = ratio[i].second;
//         if(weight[idx] <= W){
//             ans += val[idx];
//             W -= weight[idx];
//         }else{
//             ans += ratio[i].first*W;
//             W =0;
//             break;
//         }

//     }
//     cout << ans << endl;
//     return ans;
// }
// int main(){
//     vector<int> val = {60,100,120};
//     vector<int> weight = {10,20,30};

//     int W = 50;
//     fractionalKnapsack(val , weight , W);
//     return 0;
// }







//mini absolute differenece
// #include <iostream>
// #include <vector> 
// #include <algorithm>
// #include <cstdlib>
// using namespace std;

// int main(){
//     vector <int> A = {1,2,3};
//     vector <int> B = {2,1,3};

//     sort(A.begin() , A.end());
//     sort(B.begin() , B.end());

//     int ans =0;
//     for(int i=0 ; i<A.size() ; i++){
//         ans += abs(A[i] - B[i]);
//     }
//     cout << ans << endl;
//     return 0;
// }






//max length chaiin of pairs
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// bool compare(pair <int,int>p1 , pair<int , int> p2){
//     return p1.second < p2.second;
// }

// int maxChainLen(vector<pair<int,int>> pairs){
//     int n = pairs.size();
//     sort(pairs.begin() , pairs.end() , compare);
//     int ans = 1;
//     int currEnd = pairs[0].second;

//     for(int i=1 ; i<n ; i++){
//         if(pairs[i].first > currEnd){
//             ans++;
//             currEnd = pairs[i].second;
//         }
//     }
//     cout << ans << endl;
//     return ans;
// }

// int main(){
//     int n = 5;
//     vector<pair<int,int>> pairs(n , make_pair(0,0));
//     pairs[0] = make_pair(5,24);
//     pairs[1] = make_pair(39,60);
//     pairs[2] = make_pair(5,28);
//     pairs[3] = make_pair(27,40);
//     pairs[4] = make_pair(50,90);
//     maxChainLen(pairs);
//     return 0;
// }








//indian coins
#include <iostream>
#include <vector>
using namespace std;

int getMinChange(vector<int> coins , int V){
    int ans=0;
    int n = coins.size();

    for(int i=n-1 ; i>=0 && V>0 ; i--){
        if(V >= coins[i]){
            ans += V / coins[i];
            V = V % coins[i];
        }
    }
    cout << ans;
    return 0;
}
int main(){
    vector <int> coins = {1,2,5,10,20,50,100,500,2000};
    int V = 590;
    getMinChange(coins , V);
    return 0;
}