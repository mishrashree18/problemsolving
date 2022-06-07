#include<bits/stdc++.h>
using namespace std;
int main() {

	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	int initialSum = 0;
	cout <<"The sum of the elements of the array is ";
	cout<<accumulate(arr, arr + n, initialSum);

}