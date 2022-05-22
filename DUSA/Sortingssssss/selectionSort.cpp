#include<bits/stdc++.h>
#define ll long lgong
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 64, 25, 12, 22, 11 };
	int n = v.size();

	for(int i=0; i<n-1; i++){
			
			int minIdx = i;
		
		for(int j=i+1;j<n;j++){

			if(v[minIdx] > v[j])
				minIdx = j;
		}
		swap(v[minIdx],v[i]);
	}

}