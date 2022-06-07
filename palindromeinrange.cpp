#include<bits/stdc++.h>
using namespace std;

bool reverse(int i){
    int dummy = i;
    int y=0;
    while(i>0){
        
        int t = i%10;
        y = y*10 + t;
        i = i/10;
    }
   return (y==dummy);
}

int main(){
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
       if (reverse(i)){
           cout<<i<<" ";
       }
    }
    return 0;
}