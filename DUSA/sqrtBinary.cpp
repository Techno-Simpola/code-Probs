#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
using namespace std;

lli findSqrtInt(int n){

	lli s = 0, e = n, m=s+(e-s)/2;
	lli ans = -1;
	while(s<e){
		lli square = m*m;
		if(square < n){
			ans = m;
			s=m+1;
		}

		else if(square == n){
			ans = m;
		}
		
		else
			e=m-1;
		m=s+(e-s)/2;
	}
	return ans;
}


double findSqrtFul(int ans,int n, int precision){

	double factor = 1;
	double ansF = ans;
	
	for(int i=0; i < precision; i++){
		factor = factor / 10;
		
	//	double j = 0;
		for(double j=ans; j*j < n; j+=factor){
			ansF=j;
		}
	}	
	return ansF;
}

int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	lli n; cin >> n;
	lli ans = findSqrtInt(n);
	

	double ansF = findSqrtFul(ans, n, 3); 
	cout << ansF << endl;
	return 0;
}