#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void histogram(vector <int> h){
    int n = h.size();
    if(n == 0) return;
    
    vector <int> left(n), right(n);
    stack <int> s;
    
    // Find next smaller element to left
    for(int i = 0; i < n; i++){
        while(!s.empty() && h[s.top()] >= h[i]){
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    
    // Clear stack
    while(!s.empty()) s.pop();
    
    // Find next smaller element to right
    for(int i = n - 1; i >= 0; i--){
        while(!s.empty() && h[s.top()] >= h[i]){
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    
    int maxArea = 0;
    for(int i = 0; i < n; i++){
        int width = right[i] - left[i] - 1;
        int area = h[i] * width;
        maxArea = max(maxArea, area);
       // cout << "i=" << i << " h=" << h[i] << " left=" << left[i] << " right=" << right[i] << " width=" << width << " area=" << area << endl;
    }
    cout << "Max Area: " << maxArea << endl;
}

int main(){
    vector <int> histo = {2,1,5,6,2,3};
    histogram(histo);
    return 0;
}
