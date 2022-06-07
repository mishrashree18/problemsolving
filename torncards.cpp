// total n + k cards
// their average = v
// k cards of same value are torn
// find the value of card if possible

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,v;
		cin>>n>>k>>v;
		
		int sum=0;
		for (int i=0; i < n; i++)
		{
			int x;
			cin>>x;
			sum+=x;
		}
		if((n+k)*v <= sum || (((n+k)*v)-sum)%k != 0){
			cout<<-1<<endl;
		}else{
			cout<<((((n+k)*v)-sum)/k )<<endl;
		}
	}
}

