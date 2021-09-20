#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N;cin>>N;
	
	vector<int> v[N];

	for(auto i=0;i<N;i++)
	{	int n;cin>>n;
		for(auto j=0;j<n;j++)
		{
			int x;cin>>x;
			v[i].push_back(x);	
		}		
	}

	for(auto i=0; i<N; i++)
	{
		for(auto j=0; j<v[i].size(); j++)
			cout << v[j] << " "; //some error I don't know till now
	}
}	