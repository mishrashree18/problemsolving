// we have to sort 0s,1s,2s, in an array


#include<bits/stdc++.h>
using namespace std;

int main(){
  
    vector<int>arr = {1,2,0,1,2,0};
    int low=0;
    int mid=0;
    int high = arr.size()-1;

    while (mid <= high) { 
            switch (arr[mid]) { 

             
            case 0: 
                swap(arr[low++], arr[mid++]); 
                break; 

            
            case 1: 
                mid++; 
                break; 

            
            case 2: 
                swap(arr[mid], arr[high--]); 
                break; 
            }
        }
        for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}