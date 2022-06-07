#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;i<=sqrt(n), n>1;i++){
        if(n%i == 0){
            while(n%i ==0){
                cout<<i<<endl;
                n = n/i;
            }
        }
    }
    return 0;
}