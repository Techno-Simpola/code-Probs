#include<bits/stdc++.h>
#define ll long long
using namespace std;

//find the unmber of ways you can climb n stairs given that you can either take a step or you can take 2.

int NumOfWaysToClimbStairs(ll n){

	//base cases
	if(n<0) return 0;
	else if(n==0) return 1;


	//recursive relation
	return NumOfWaysToClimbStairs(n-1) + NumOfWaysToClimbStairs(n-2);
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll n; cin>>n;
	cout << NumOfWaysToClimbStairs(n);

	return 0;
}