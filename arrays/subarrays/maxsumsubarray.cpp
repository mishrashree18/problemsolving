// leetcode problem 53
// Kadane's Algorithm
// time complexity O(n)

#include <bits/stdc++.h>
using namespace std;

    int main() {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxsofar=arr[0],sum=0;
        for(int i=0; i<n;i++){
            sum+=arr[i];
            maxsofar=max(sum,maxsofar);  // max so far is the maximum of sum till now or max so far
            sum=max(sum,0); // if sum is less than zero then sum is zero
        }
        cout<<maxsofar<<" ";
        return 0;
    };