#include <iostream>
#include <string.h>
using namespace std;

string RemoveVowels(string str)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      str = str.substr(0, i) + str.substr(i + 1);
      i--;
    }
  }
  return str;
}
int main()
{
  string str = "my name is shree";
  cout <<RemoveVowels(str) << endl;
  return 0;
}