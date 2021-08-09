#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif

    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

	int t;cin>>t;
	ll g1,s1,b1,g2,s2,b2;

	while(t--){
    cin>>g1>>s1>>b1>>g2>>s2>>b2;
    if(g1+s1+b1 > g2+s2+b2)
    	cout<<1<<"\n";
    else
    	cout<<2<<"\n";
	}
	return 0;
}