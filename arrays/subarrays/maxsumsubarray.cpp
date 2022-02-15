//leetcode problem 53

#include <bits/stdc++.h>
using namespace std;

    int main() {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=arr[0],i,j,sum=0;
        for(int i=0; i<n;i++){
            sum+=arr[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        cout<<ans<<" ";
        return 0;
    };