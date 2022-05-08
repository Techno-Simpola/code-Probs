//Bracktracking....
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

//have to use recursion in backtracking
void solveString(string str, string perm, int idx){

	if(str.length() == 0){
		cout<<perm<<endl;
		return;
	}

	for(int i=0; i<str.length(); i++)
	{
		char currChar = str[i]; //A //B
		string newStr = str.substr(0,i) /* nothin' */ /*  */+ str.substr(i+1); /* BC */
		return solveString(newStr, perm+currChar, idx+1);
	}

}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string str = "ABC" ;
	solveString(str, "", 0);

	return 0;
}