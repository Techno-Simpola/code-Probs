#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;cin>>t;
    // ll a1,a2,a3,a4;
    int a[4],i;
    while(t--){
    	
         for(i=0;i<4;i++)
         	cin>>a[i];
         
        sort(a,a+4); 
        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
    		cout<<0<<"\n";
        else if((a[0] == a[1] && a[1] == a[2] ) || (a[1] == a[2] && a[2] == a[3] ))
        	cout<<1<<"\n";
        else
        	cout<<2<<"\n";

    	// cin>>a1>>a2>>a3>>a4;
    	// if(a1 == a2 && a2 == a3 && a3 == a4)
    	// 	cout<<0<<"\n";
    	// else if(a1 != a2 && a2 != a3 && a3 != a4)
    	// 	cout<<2<<"\n";
    	// else
    	// 	cout<<1<<"\n";
}
	return 0;
}
