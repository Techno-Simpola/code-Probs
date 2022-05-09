#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isFound(int *arr, int size, int x){

	//base case
	if( size <= 0 ) return false;  //full array has been traversed

	else if( arr[0] == x ) return true;

	//recursive call
	return isFound(arr+1,size-1,x);
}


int main()
{
	int arr[] = { 4,6,1,8,9,2,10 };
	int size = sizeof(arr)/sizeof(arr[0]);

	int x = 7;//element to be found
	bool ans = isFound(arr, size, x);


	cout<< ans << endl;
	return 0;
}