#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
	#endif

    //code_smoothing
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,s;cin>>t;
    string wordEnter;
    char x1,x2;
    while(t--)
    {
    	cin>>wordEnter;
         s = wordEnter.length();
         if(s>10)
         {
          		x1 = wordEnter[0];
          		x2 = wordEnter[s-1];
                cout<<x1<<(s-2)<<x2;
         }
         else{
         	cout<<wordEnter;
         }
         cout<<"\n";
    }
	return 0;
}