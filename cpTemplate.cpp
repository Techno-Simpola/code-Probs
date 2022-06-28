#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,l,r) for(ll i=l;i<r;i++)
#define Endl cout<<"\n";
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl
#define scan_vector(v)      for (auto &it: v) { cin>>it; }
#define print_vector(v)     for (auto &it: v) { cout<<it<<" "; } cout<<endl;
#define print_map(m)     for (auto &it: m) { cout<<it.first<<"->"<<it.second<<"\n"; } 
#define deb(x) cout<<#x<<"="<<x<<endl;
#define all(x) x.begin(),x.end()
typedef long long ll;
typedef unsigned long long ull;
const ll MOD=(1e9+7);
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll mod(ll n)
{
    return ((n%MOD+MOD)%MOD);
}
void solve()
{

}

int main()
{
    fastIO(); 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif
    ll t=1;
    cin>>t;
    ll T=t;
    while(t--)
    {
        // cout<<"Case #"<<T-t<<": ";
        solve();     
    }
 
}
