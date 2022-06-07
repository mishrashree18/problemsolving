#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sml=a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(sml>a[i]){
            sml = a[i];
        }
    }
    cout<<sml;
    return 0;
}