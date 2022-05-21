#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
//failed attempt......

void solve(vector<int>& input, int index, vector<int> output, vector<vector<int>> &ans)
{

    // base case
    if (index >= input.size()){
        ans.push_back(output);
        return;
    
    }

    // excluding case
    solve(input, index + 1, output, ans);

    // including case
    int ele = input[index];
    output.push_back(ele);
    solve(input, index + 1, output, ans);

}

vector< vector<int> > subSequence(vector<int>& input, int index){

    vector<vector<int>> ans;
    vector<int> output;

    solve(input, index, output, ans);
    return ans;

}

int subSevenNum(vector<vector<int>>& ans){

	vector<int> innerAns;
	vector<int> temp;
	int sum = 0;
	int flag = 0;
	
	for(int i=0; i<ans.size(); i++){
		
		for(int k=0;k<ans[i].size();k++){

			innerAns[k] = ans[i][k]; 
		}

		for(int j=0; j<innerAns.size(); j++)
		{
			sum = (sum + innerAns[i])*10; 
		}

		cout << sum << endl;
		if((sum/10)%7==0)
			flag++;

	}
	return flag;

}


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<vector<int>> ans;
    vector<int> input = { 7,7 };

    int index = 0;
    ans = subSequence(input, index);

    // for(int i=0;i<ans.size();i++){

    // 	for(int j=0; j<ans[i].size(); j++){
    		
    // 		cout << ans[i][j] << " ";
    	
    // 	}
    // 	cout << endl ;
    // }

    int ansF = subSevenNum(ans);
    cout << ansF << endl;
    
    return 0;

}