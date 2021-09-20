#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;cin>>t;
	ll n,s,sum,out;
	while(t--){
		cin>>n>>s;
		out = 0;
		sum = (n+1)*n/2; //calculates the sum of n numbers 
		
		if( s < sum)
			out = sum - s;

		if(out>=1 && out<=n)
			cout<<out<<"\n";
		else:
			cout<<-1<<"\n";
	}	

	return 0;
}