#include <bits/stdc++.h>
using namespace std;

bool yesorno(int n, int arr[], int x)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, arr[n], x;
    cout << "Enter the length of arrays" << endl;
    cin >> n;
    cout << "Enter the number x" << endl;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (yesorno(n, arr, x))
        cout << "True" << endl;
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
