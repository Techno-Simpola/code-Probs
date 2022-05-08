#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fib(int n)
{

    if (n == 0)
        return 0; // base condition

    else if (n == 1 || n == 2)
        return 1; // conditional condition

    else
        return fib(n - 1) + fib(n - 2); // required condition
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << fib(i) << endl;

    return 0;
}