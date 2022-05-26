#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool countEq(int count1[], int count2[]){

	for(int i=0; i<26; i++){
		if(count1[i] != count2[i])
			return false;
	}

	return true;
}


bool permutationPresent(string s1, string s2){

	int count[26] = {0};
	
	//counting of perticular character done...
	for(int i=0; i<s1.length(); i++){
		int idx = s1[i] - 'a';
		count[idx]++;
	}

	//traverse s2 string of window of size s1.length()
	int windowLen=s1.length();

	int i=0;
	int count1[26] = {0};

	//running for first window
	while(i < windowLen && i < s2.length()){
		int idx = s2[i] - 'a';
		count1[idx]++;
		i++;
	}


	if(countEq(count,count1))
		return true;

	//running for the second window
	while(i < s2.length()){
		char newChar = s2[i];
		int idx = newChar - 'a';
		count1[idx]++;

		char oldChar = s2[i-windowLen];
		idx = oldChar - 'a';
		count1[idx]--;

		i++;

		if(countEq(count,count1))
			return true;
	}

	return false;

}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string str2 = "eidbbooo";
	string str1 = "abb";

	bool ans = permutationPresent(str1, str2);

	cout << ans << endl;
	return 0;
}