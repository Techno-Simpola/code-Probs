#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sumArr(int *arr, int size){

	//base case
	if( size == 0 )
		return 0;
	
	else if( size == 1 )
		return arr[0];
	
	int remPart = sumArr(arr+1, size-1);
	int ans = arr[0] + remPart;
	return ans;
}

int main(){

	int arr[] = { 3,2,5,1,6 };
	int size = sizeof(arr)/sizeof(arr[0]);

	cout << sumArr( arr, size) << endl;
}