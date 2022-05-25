#include<bits/stdc++.h>
#define ll long long
using namespace std;

string reverseWords(string& str){

	int n = str.length();
	int s = 0;
	int e = n-1;

	//spaces at the beginning and at the end
	while(str[s] == ' ' || str[e] == ' ')
	{
		if(str[s] == ' ')
			s++;
		else if(str[e] == ' ')
			e--;
	}

	string news = str.substr(s,e);

	int l = 0;
	int r = news.length()-1;

	string ans="";
	string temp="";
	
	while(l<r){
		char c = news[l];

		if(c != ' ')
		{
			temp += c;
		}

		else{
			if( temp != "" ){
				
				if(ans != "")
					ans = temp + " " + ans;
				else
					ans = temp;
				temp = "";
			}
		}

		l++;
	}

	return ans;
}


int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string str = " cool are   we ";
	string ans = reverseWords(str);	

	cout << ans << endl;
	return 0;
}