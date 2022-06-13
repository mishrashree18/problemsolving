// Given an array
// Each element represents the height of histogram's bar and the width of each bar is 1
// Find the area of the largest rectangle in the histogram



// Brute Force approach:

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int ans=0; 
//         int n=heights.size();
//         for(int i=0;i<n;i++){
//             int minh=INT_MAX;
//         for(int j=i;j<n;j++){
//             minh = min(heights[j],minh);
//             int len = j-i + 1;
//             ans = max(ans,len*minh);
//         }
//         }
//         return ans;
//     }
// };


#include<bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> a){
    int n = a.size(),ans=0,i=0;
    stack<int> st;
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()] > a[i]){
            int t = st.top();
            int h = a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len = i - st.top() - 1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main(){
    vector<int> a = {2,1,5,6,2,3};
    cout<<get_max_area(a);
}


