#include<bits/stdc++.h>
#define ll long long
using namespace std;



void printNum(string cont[], int n){

	//base case
	if( n == 0 ){
		return;
	}

	int x = n % 10;  //would give remainder
	n = n / 10;

	//recursive call
	printNum(cont, n);
	cout << cont[x] << " ";
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string cont[10];
	cont[0] = "zero";
	cont[1] = "one";
	cont[2] = "two";
	cont[3] = "three";
	cont[4] = "four";
	cont[5] = "five";
	cont[6] = "six";
	cont[7] = "seven";
	cont[8] = "eight";
	cont[9] = "nine";

	int n; cin >> n;
	int x = n;

	//have to extract the digits
	// while( x > 0){

	// 	int rem = x % 10; 
	// 	cout << cont[rem] << " " ;
	// 	x = x / 10 ;
	// }

	printNum(cont, n);

	return 0;
}