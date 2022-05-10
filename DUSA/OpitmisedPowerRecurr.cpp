#include<bits/stdc++.h>
#define ll long long
using namespace std;


//optimised case if power using recursion...
int optimPowerRecur(int a, int b)
{
	//base case
	if(b==0)
		return 1;

	if( b%2 == 0 ) // b is even
		return optimPowerRecur(a, b/2)*optimPowerRecur(a, b/2);
	
	else
		return a*optimPowerRecur(a, b/2)*optimPowerRecur(a, b/2);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int a, b;
	cin >> a >> b;

	int ans = optimPowerRecur(a, b);

	cout << ans << endl; 
}