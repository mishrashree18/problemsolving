#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"no"<<endl;
            break;
        }
        else {
            cout<<"prime"<<endl;
        }
    }
    return 0;
}