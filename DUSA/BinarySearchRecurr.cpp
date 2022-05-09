#include<bits/stdc++.h>
#define ll long long
using namespace std;


//BINARY SEARCH USING RECURSION

bool isFoundBinarySearch(int arr[], int start, int end, int key){

	int mid = ( start + end ) / 2;

	//base case
	if(start > end)
		return false;

	else if( arr[mid] == key )
		return true;

	//recursive call
	else if ( arr[mid] < key )
		return isFoundBinarySearch(arr, mid+1, end, key); //search in the right half
	else
		return isFoundBinarySearch(arr, start, mid-1, key); //search in the left half

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int arr[] = { 2,4,6,8,19,21,22 };

	int size = sizeof(arr)/sizeof(arr[0]);

	int key ; cin >> key ; //element to be found

	int start = 0, end = size ; 
	
	bool ans = isFoundBinarySearch(arr, start, end, key);

	if( ans == true )
		cout << "The element is present in the given array" << endl;
	else
		cout << "The element is not present in the given array" << endl;
	return 0;
}