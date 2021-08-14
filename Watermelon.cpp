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

  
  	 ll w;cin>>w;

     if(w>2 && w%2==0 )
     		cout<<"YES";
     else{
     	cout<<"NO";
     }	
     cout<<"\n";

	return 0;
}