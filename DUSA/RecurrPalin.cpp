#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool palin(string &s, int start, int end)
{

    if (start >= end)
        return true;

    return (s[start] == s[end]) && palin(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;

    int start = 0, end = s.length() - 1;

    cout << palin(s, start, end) << endl;
    return 0;
}