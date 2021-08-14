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
	long double x1,x2,n,m,a; 
	cin>>n>>m>>a;
    x1 = ceil(n/a); 
    x2 = ceil(m/a);
    cout<<std::fixed<<setprecision(0)<<x1*x2;
    return 0;
}