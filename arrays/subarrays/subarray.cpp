// Number of subarrays of an array with n elements = nC2 + n = n*(n+1)/2
// WAP to print all subarrays of an array

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;

        }
    }
    return 0;
    
}