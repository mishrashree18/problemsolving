#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void nonRepeating(string & st, int freq[200]) {
      int i, j;
      int l = st.length();

      for (int i = 0; i < l; i++) {
        if (st[i] == ' ') 
          continue;
        else
          freq[st[i] - 'a']++; 
      }

     
      for (int i = 0; i < l; i++) {
        if (freq[st[i] - 'a'] == 1 && st[i] != ' ') {
          cout << st[i] << " ";
        }
      }
    }
};
int main() {

  string st = "my name is shree";

  int l = st.length();
  int freq[200] = {
    0
  };

  Solution obj;
  obj.nonRepeating(st, freq);

  return 0;
}