#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t;cin>>t;
	ll n,s;
	while(t--){
		cin>>n>>s;

		if(n==1 || n>=s)
			cout<<s<<"\n";
		else     //for n<s eg, n=4,s=5 => ans=4-1, n=4,s=7 => ans=4-3=1
			cout<<n-(s-n);
	}
	return 0;
}