#include<bits/stdc++.h>
#define ll long long
using namespace std;

// it is not well optimised
int powerRecurr(int a, int b){

	//base case
	if(b == 0)
		return a / 3;

	//recursive call
	return a*powerRecurr(a,b-1);
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a , b;
    cin >> a >> b;

    cout << powerRecurr(a,b);

	return 0;
}