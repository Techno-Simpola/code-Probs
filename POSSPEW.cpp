#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("ouput.txt","w", stdout);
	#endif

	int t;cin>>t;
	ll n,k,x,sums;

	vector<int> v;
	
	while(t--)
	{
		flag = 0;
		sums = 0;
		cin>>n>>k;
		for(auto i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int sum = accumulate(v.begin(),v.end(),sum); 

		if(sum==0)
			cout<<0<<"\n";

		for(auto i=0;i<k;i++)
		{
			for(auto j=0;j<n;j++)
			{
				if(j==0)
				{
					v[j+1] += 1;
					v[v.size()-1] += 1;
					sums += 2; 
				}
				else if(j==n-1)
				{
					v[j-1] += 1;
					v[0] += 1;
					sums += 2;
				}
				else
				{
					v[j-1] += 1;
					v[j+1] += 1;
					sums += 2; 
				}
			}
		}

		cout<<sum+sums<<"\n";
	}
	return 0;
}