
//MAP IN C++
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int,string> m;
    m[101] = "rahul";
    m[120] = "simran";
    m[132] = "rahul";

    //cout << m[111] << endl;         //no output for key
    m[101] = "sonia";
    cout << m[101] << endl;         //overwrite existing key

    cout << m.count(120) << endl;   //tell whether key exists in the map m or not

    for(auto it : m){
        cout << it.first << "," << it.second << endl;
    }


    return 0;
}