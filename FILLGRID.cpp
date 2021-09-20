#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(n%2==0)
					cout<<-1<<" ";

				else{
					if((i==j))
						cout<<1<<" ";
					else
						cout<<-1<<" ";
				}
			}
		cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}