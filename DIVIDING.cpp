#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n,sum = 0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sum = accumulate(arr,arr+n,sum);
	if(sum == n*(n+1)/2)
		cout<<"Yes"<<"\n";
	else
		cout<<"No"<<"\n";
}