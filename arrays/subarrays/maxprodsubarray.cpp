// using kadane's algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int prod=1;
        int ans=a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        
        prod=prod*a[i];
        ans=max(prod,ans);
        prod=max(prod,0);
    }
    cout<<ans<<endl;
    return 0;
}