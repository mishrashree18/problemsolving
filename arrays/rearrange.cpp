// rearrange the array such that first half of the elements are in ascending order and second half is in descending order


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }
    sort(arr.begin(), arr.end());
	for (int i = 1; i < n / 2; i++) {
		cout << arr[i]<<" ";
	}
	for (int i = n - 1; i >= n / 2; i--) {
		cout << arr[i]<<" ";
	}
    return 0;

}