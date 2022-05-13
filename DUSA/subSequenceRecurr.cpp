#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string input, int index, string output, vector<string> &ans)
{

    // base case
    if (index >= input.length())
    {
        ans.push_back(output);
        return;
    }

    // excluding case
    solve(input, index + 1, output, ans);

    // including case
    char ele = input[index];
    output.push_back(ele);
    solve(input, index + 1, output, ans);
}

vector<string> subSequence(string input, int index)
{
    vector<string> ans;
    string output = "";

    solve(input, index, output, ans);
    return ans;
}

int main()
{
    vector<string> ans;
    string input = "abs";

    int index = 0;
    ans = subSequence(input, index);
}
