#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;cin>>t;
    ll a,b,c,d,e,f;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e;
        if ((a + b <= d && c <= e) || (b + c <= d && a <= e) || (a + c <= d && b <= e))
            cout << "yes";
        else
            cout << "no";
        cout<<"\n";
    }
    return 0;
}