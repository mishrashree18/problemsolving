// Givem a 2 x n board tiles of size "2 x 1".
// count the no. of ways to tile the given board using these tiles


#include<bits/stdc++.h>
using namespace std;

int tilingWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}

int main(){

    cout<<tilingWays(4)<<endl;
    return 0;
}