#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

string solve(string& s, int start, int end)
{
	//base case
	if(start > end)
		return s;
	
	swap(s[start], s[end]);
	
	//recursive call
	return solve(s, start+1, end-1);
}


string removeUn(string& s)
{
	int j = 0;
	for(int i=0;i<s.length();i++)
	{
		if( s[i] >= 'A' && s[i] <= 'Z' || s[i]>='a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' )
		{
			s[j] = s[i];
			j++;
		}	
	}
	
	return s.substr(0,j);
}

bool checkPalindrome(string s)
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	string s_sort = removeUn(s);

	string s_1 = s_sort;
	
	string snew = solve(s_sort,0, s_sort.length()-1);
	if( snew == s_1 )
		return true;
	else
		return false;
}


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	string s;
	cin >> s;

	bool checkString = checkPalindrome(s);

	if(checkPalindrome)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;

	return 0;
}