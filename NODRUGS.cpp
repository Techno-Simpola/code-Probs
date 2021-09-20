#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;cin >> t;
	ll n,k,l,x,maxs;

	while(t--)
	{
		cin>>n>>k>>l;
		
		maxs = 0;
		for(auto i=0; i<n; i++)
		{
			cin>>x;
			maxs = max(maxs,x); //returns maximum speed
		}

		if(x==maxs)
			cout<<"Yes\n";
		
		if(k<0)
		{
			if(x>maxs) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else
		{
			x += k*(l-1);
			if(x>maxs) cout<<"Yes\n";
			else cout<<"No\n";
		}	 
	}
	return 0;
}	