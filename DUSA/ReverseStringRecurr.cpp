#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void reverStringRecurr(string &s, int start, int end){

	//base case
	if(start > end){	
		cout << s << endl;
		return;
	}

	swap(s[start], s[end]);
	
	//recursive call
	reverStringRecurr(s, start+1, end-1);

}

int main()
{  
	string s = "glue"; 
	int size = s.length();
	cout << size << endl;
	reverStringRecurr(s, 0, size-1);
	return 0;
}