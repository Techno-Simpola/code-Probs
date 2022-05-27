#include <bits/stdc++.h>
#define ll long long
using namespace std;


int compresString(vector<char>& chars){
	
	int ansIdx = 0;
	int i = 0;
	int n = chars.size();

	while( i < n ){
		int j = i+1;
		
		while(j<n && chars[i] == chars[j]){
			j++;
		}

		chars[ansIdx++] = chars[i];  //storing the old character...
		//if vector is fully traversed
		int count = j - i;
		if(count > 1){

			//converting counting into single digits and putting in the string
			string cnt = to_string(count);
			for(char ch: cnt){
				chars[ansIdx++] = ch;
			}
		}

		//new or a diff char is encountered
		i = j;
	}

	return ansIdx;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<char> ch = { 'a','a','a','b','c','c','c','c','c','c','c','c','c','c','c' };
	int ans = compresString(ch);

	cout << ans << endl;
	return 0;
}