#include <bits/stdc++.h>
#define ll long long
using namespace std;

string removeAllAdjacentChar(string s){

	string part;
	int flag = 0;
	for(int i=0; i<s.length(); i++){
		
		if(s[i] == s[i+1]){
		
			part.push_back(s[i]);
			part.push_back(s[i+1]);
			s.erase(s.find(part), part.length());
			flag++ ;	
		
		}

	}

	if( flag == 0 )
		return s;

	return removeAllAdjacentChar(s);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string str = "aababaab";

	string ans = removeAllAdjacentChar(str);
	cout << ans << endl;
	return 0;
}