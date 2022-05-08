#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int x, int y){

    if ( x == 0 && y == 0 || x != y )
        cout << "NO" << endl ;
    else
        cout << "YES" << endl ;    
}

int main()
{
    ll t; cin>>t;
    while(t--){
        
        ll x,y;
        cin>>x>>y;
        solve(x,y);
    }
    return 0;
}