#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	int t;cin>>t;
	ll x;
	while(t--){
		cin>>x;
		if(x==1 || x%4==1)
			cout<<"East";
		else if(x==2 || x%4==2)
			cout<<"South";
		else if(x==3 || x%4==3)
			cout<<"West";
		else
			cout<<"North";
	}
	return 0;
}