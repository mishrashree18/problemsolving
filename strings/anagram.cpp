// the count of every letter of both strings are equal
// can sort and compare but that would take O(nlogn) time complexity
// using frequency array approach here

#include <bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    int freq[26] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        freq[str1[i] - 'A']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        freq[str2[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string str1 = "RULES";
    string str2 = "LESRU";
    if (anagram(str1, str2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}