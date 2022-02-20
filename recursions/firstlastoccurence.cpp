// find the first and last occurence of a number in an array

#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!= -1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){

    int arr[]={3,4,2,5,3,54,6,3,2,3,4};
    cout<<firstocc(arr,11,0,2)<<endl;
    cout<<lastocc(arr,11,0,2)<<endl;
    return 0;
}