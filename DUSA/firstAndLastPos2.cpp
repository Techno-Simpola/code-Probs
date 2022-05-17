#include<bits/stdc++.h>
#define ll long long
using namespace std;

//going through binary search path with time complexity of O(log(n))...

int lastOcc(vector<int> arr, int n, int key){
	
 	int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;

}

int firstOcc(vector<int> arr, int n, int key){

 	int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int,int> firstAndLastPos(vector<int>& arr, int n, int x){

	pair<int,int> p;
	p.first = firstOcc(arr, n, x);
	p.second = lastOcc(arr, n, x); 

	return p;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> v = { 0,1,1,2,3,5,5,5 };
	int n = v.size();
	int key ; cin >> key;
	
	pair<int,int> p = firstAndLastPos(v, n, key);
	return 0;
}