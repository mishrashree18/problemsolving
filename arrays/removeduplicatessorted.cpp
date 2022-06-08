#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[]) {
  int i = 0;
  for (int j = 1; j < 7; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i;
}
int main() {
  int arr[] = {1,2,3,3,4,5};
  int k = removeDuplicates(arr);
  for (int i = 0; i < k; i++) {
    cout << arr[i];
  }
}