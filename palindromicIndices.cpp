#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	// a b c c b a
	// b a a a a b
	// a b c b a
	// a b b a
	// a b a
	// a a
	// a d e b c b e d a
	ll t; cin >> t;
	while(t--){
	
	int n; cin >> n;
	string s; cin >> s;
	int Evecnt = 2;
	
	int Oddcnt = 1;
	int ans = 0;
	if(n%2 == 0)
	{	
		for(int i=0; i < n/2-1; i++)
		{
			if(s[i] == s[i+1])
				Evecnt+=2;
		}
		
		ans = Evecnt;
	}
	
	else
		ans = Oddcnt;

	cout << ans << endl;


   }
}