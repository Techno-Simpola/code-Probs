#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string digits, int index, string output, vector<string> &ans, string mapping[])
{

    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int currDig = digits[index] - '0'; // = 2
    string val = mapping[currDig];     // = abc

    for (int i = 0; i < val.length(); i++)
    {
        output.push_back(val[i]);
        solve(digits, index + 1, output, ans, mapping);
        output.pop_back();
    }
}

vector<string> phoneKeypad(string digits)
{

    vector<string> ans;

    if (digits.length() == 0)
        return ans;

    string output = "";
    int index = 0;

    string mapping[10] = {"", "", "abc", "def",
                          "ghi", "jkl", "mno",
                          "pqrs", "tuv", "wxyz"};

    solve(digits, index, output, ans, mapping);
    return ans;
}

int main()
{

    vector<string> ans;
    string input = "12";

    ans = phoneKeypad(input);
    return 0;
}