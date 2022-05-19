#include<bits/stdc++.h>
#define ll long long
using namespace std;


bool isPossible(vector<int> books, int noOfStud, int mid, int n){

	int cntStud = 1;
	int pageSum = 0;

	for(int i=0; i<n; i++){

		if(pageSum+books[i] <= mid)
			pageSum+=books[i];

		else{
			cntStud++;
			if(cntStud > noOfStud || books[i] > mid){
				return false;
			}

			pageSum = books[i];
		}
	}

	return true;
}

int minAllocated(vector<int>& books, int n, int noOfStud){

	int s = 0;
	int sum = 0;

	for(int i=0; i<n; i++){
		sum+=books[i];
	}

	int e = sum; int ans = -1;
	int mid = s+(e-s)/2;

	while(s<e){
		if(isPossible(books, noOfStud, mid, n))
		{
			 ans = mid;
			 e = mid-1;
		}
		else{
			s=mid+1;
		}

		mid = s+(e-s)/2;
	}

	return ans;

}


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> books = { 12, 34, 67, 90 };
	int n = books.size();
	int noOfStud; cin >> noOfStud;
	int ans = minAllocated(books, n, noOfStud);
	cout << "The maximum number of pages assigned to student is " << ans << endl;
	return 0;
}