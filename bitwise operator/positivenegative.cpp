#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if((n >> 31) == 0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}