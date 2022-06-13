// {[( )]} - balanced paranthesis

#include<bits/stdc++.h>
using namespace std;


bool isValid(string s){
    int n=s.size();
    stack<char> stack;
    bool ans = true;
    for(int i=0;i<n;i++){
        if (s[i] == '('){
                stack.push(')');
            }
            else if (s[i] == '{'){
                stack.push('}');
            }
             else if (s[i] == '['){
                stack.push(']');
            }
            else {
                char top = stack.empty() ? '#' : stack.top ();
                stack.pop();
                if (top != s[i]){
                    return false;
                }
            }
    }
            return stack.empty();
    }

int main(){
    string s = "{[()]}";

    if(isValid(s)){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}