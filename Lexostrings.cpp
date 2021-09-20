#include<bits/stdc++.h>
using namespace std;
// given N strings print unique string
// in lexographical order with their
// frequencies...

int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	map<string,int> m; //string is taken as key because we have to print unique strings
	int n;cin>>n;
	for(auto i = 0; i < n;i++)
	{
		string s;cin>>s;
		m[s]++; //m[s] is automatically initiallised to zero;
	}
	for(auto pr:m)
	{
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	return 0;
}