#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l = 2, r = 7;
            //sum(1 to r) - sum(1 to l-1)
	int ans = (r * (r + 1)) / 2 - ((l - 1) * (l)) / 2;
	cout << "The sum of the numbers in the given range is "<<ans;
}