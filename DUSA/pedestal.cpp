#include<bits/stdc++.h>
#define ll long long
using namespace std;

void pedestal(ll n){

	// even case
	if(n%2 == 0){
		ll ans1 = n / 2;
		ll ans2 = ans1 - 1;
		cout << ans2 << " " << ans1 << " " << n - (ans1 + ans2) << endl;
	}

	// odd case
	if(n%2 != 0){
		ll ans1 = n / 2 + 1;
		ll ans2 = ans1 - 2;
		cout << ans2 << " " << ans1 << " " << n - (ans1 + ans2) << endl;
	}

}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t; cin >> t;
	while(t--){
	ll n; cin >> n;
	pedestal(n);
	}

	return 0;
}