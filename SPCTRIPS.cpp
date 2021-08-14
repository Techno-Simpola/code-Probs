#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	//code_smoothing
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    ll a,b,c,n,count;
    while(t--)
    {
    	count = 0;
    	cin>>n;

    	for(c = 1; c <= n ; c++)
    	{
    		for(b = c; b <= n; b+=c)  //b is a multiple of c
    		{
    			for(a = c; a <= n; a+=b)   //a is a multiple of b with remainder being c
    			{
    				if((a % b == c) && (b % c == 0))
    					{count++;}
    			}
    		}
    	}

    	cout<<count<<"\n";
    }

	return 0;
}