#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	int n, x, rem, ans, sum;
	cin>>t;
	int arr[n];
	while(t--)
	{
		//input acc to the req question
		sum = 0;
		cin>>n>>x;
		
		for(int i=0;i<n;i++)
			cin>>arr[i];

		sum = accumulate(arr,arr+n,sum); 
		// input ends

		ans = sum / x; //returns quoteint
		rem = sum % x;  //returns remainder

		for(int i=0;i<n;i++)
		{
			if(rem >= arr[i])
			{	
				ans = -1; //inadequate customer
				break;
			}	
		}

		cout<<ans<<"\n"; 
	}

    return 0;
}