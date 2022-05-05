#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int rev = 0, rem, y = x;
    while (y > 0)
    {
        rem = y % 10;
        rev = (rev + rem) * 10;
        y = y / 10;
    }

    if (rev / 10 == x)
    {
        cout << "The number is palindrome" << endl;
    }
    else
    {
        cout << rev / 10 << endl;
    }
    return 0;
}
