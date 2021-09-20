#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<pair<int,int>> v_p;
	int n;cin>>n;
	for(auto i=0;i<n;i++)
	{	int x,y;
		cin>>x>>y;
		v_p.push_back({x,y});  //{x,y} <=> make_pair(x,y);
	}

	for(auto i=0;i<v_p.size();i++)
	{
		cout<<v_p[i].first<<" "<<v_p[i].second<<endl;
	}
}