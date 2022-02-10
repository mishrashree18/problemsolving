#include <iostream>
#include <math.h>
using namespace std;

// armstrong number is a number which can be formed when cubes of its digits are added

int main(){
    int n;
    cin>>n;

    int sum=0;
    int a=n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;

    }
    if(sum==a){
        cout<<"Armstrong number"<<endl;
    }
    else {
        cout<<"not"<<endl;
    }
}