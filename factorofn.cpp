#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<sqrt(n);i++){
        if(n%i==0 && n/i != i){
            cout<<i<<endl<<n/i<<endl;
        }
        if(n%i==0 && n/i == i){
            cout<<i<<endl;
        }
    }
    return 0;
}