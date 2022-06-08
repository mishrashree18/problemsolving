// count the number of consonants, vowels and whitespaces in a sentence

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(int i=0;i<str.length();i++){
        str[i] = towlower(str[i]);
    }
    
    int consonant=0,vowel=0,space=0;

    for(int i=0;i<str.length();i++){
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      vowel++;
    else if (str[i] >= 'a' && str[i] <= 'z')
      consonant++;
    else if (str[i] == ' ')
      space++;
    }
    cout<<vowel<<" "<<consonant<<" "<<space;
    return 0;
}