#include<bits/stdc++.h>
using namespace std;
/*
Given N strings and Q queries.
In each query you are given a string , print the
frequency of that string.

N = 10^6
|S| <= 100
Q <= 10^6 
*/


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int N;cin>>N;
	unordered_map<string,int> um;
	for(auto i=0; i<N; i++)
	{
		string s;cin>>s;
		um[s]++;
	}

	int q;cin>>q;
	while(q--){
		string qs;cin>>qs;
		cout<<um[qs]<<"\n";
	}
}