#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fact(int n)
{

    if (n == 0)
        return 1; // base case

    return n * fact(n - 1); // required statement
}

int main()
{
    int n;
    cin >> n;

    cout << fact(n) << endl;
    return 0;
}
