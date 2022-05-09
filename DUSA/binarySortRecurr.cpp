#include<bits/stdc++.h>
#define ll long long
using namespace std;



bool isSorted(int arr[], int size){

	//base case
	if(	size == 0 || size == 1 )
		return true;

	else if ( arr[0] > arr[1] )
		return false;

	else {
		//recursive call
		bool ans = isSorted(arr+1, size-1);
		return ans;
	}
}

int main()
{

	int arr[] = { 5,2,3,4,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout<< isSorted(arr, size) << endl;

	return 0;
}
