#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int maxd = INT_MIN;
    int mind = INT_MAX;

    while(n>0){
        int t;
        t = n % 10;
        maxd = max(maxd,t);
        mind = min(mind,t);
        n = n/10;

    }
    cout<<maxd<<endl;
    cout<<mind<<endl;
    return 0;
}