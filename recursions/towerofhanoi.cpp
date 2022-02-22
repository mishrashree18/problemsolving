// source rod, helper rod, destination rod
// put n-1 to helper, take n to destination then bring n-1 to destination

#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}
int main(){

    towerofHanoi(3,'A','C','B');
    return 0;
}
