#include<bits/stdc++.h>
using namespace std;

bool checkprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<sqrt(i);i++){
        if(n%i == 0)
            return true;
        
    }
    return false;
}

int main(){
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;

}