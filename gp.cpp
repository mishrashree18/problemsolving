#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    float a,d;
    float sum=0;
    cin>>n>>a>>d;

    for(int i=0;i<n;i++){
        sum = sum + a;
        a = a*d;
    }
    cout<<sum<<endl;
    return 0;
}
