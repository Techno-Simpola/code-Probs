#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t; cin >> t;
    ll arr[4];
    
    while(t--){
        int cnt = 0;
        for(ll i=0; i<4; i++){
            cin >> arr[i];    
        }

        ll a = arr[0];

        for(ll i=1; i<4; i++){
            if(arr[i] > a)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}