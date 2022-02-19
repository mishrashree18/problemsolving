#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "adkhbbdkdlsjisjokcorfwnckrbg";

    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
       
    }
     cout << str;
     return 0;
}

// similarly for lowercase str += 32;


// other function that can be used
// transform(s.begin(), s.end(), s.begin(), ::toupper);
