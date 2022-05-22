#include<bits/stdc++.h>
#define ll long long
using namespace std;

//there's no swap in insertion sort but we shift

int main(){

	vector<int> inser = { 6, 8, 1, 3, 9, 10, 12 };
	int n = inser.size();
	
	for(int i=1; i<n; i++){
		int temp = inser[i];
		int j = i-1;
		for(;j>=0;j--){
			
			if(inser[j]>temp){
				//shift
				inser[j+1] = inser[j];
			}
			else //ruk jao
				break;
		}
		inser[j+1] = temp; 
	}

	for(int i=0;i< n; i++){
		cout << inser[i] << " ";
	}
	return 0;
}
