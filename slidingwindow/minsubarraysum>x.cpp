#include<bits/stdc++.h>
using namespace std;

int minSubarraylen(int arr[], int n, int x){
    int sum = 0;
    int minLength = n+1, start =0,end =0;
    while(end<n){
        while(sum < x && end < n){
            sum += arr[end++];
        }
        while(sum >= x && start < n){
            if(end - start < minLength){
                minLength = end - start;
            }
            sum -= arr[start++];
        }

    }
    return minLength;
}



int main(){

    int arr[] = {2,3,1,2,4,3};
    int x = 7;
    int n = 6;

    int minLength = minSubarraylen(arr, n, x);
    if(minLength == n+1){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<minLength<<endl;
    }
    return 0;
}