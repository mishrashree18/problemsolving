#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minprice = INT_MAX;
    int maxprofit = 0;

    for(int i=0;i<n;i++){
        minprice=min(arr[i],minprice);
        maxprofit=max(maxprofit,arr[i]-minprice);
    }
    cout<<maxprofit<<endl;
    return 0;
}