#include <bits/stdc++.h>
using namespace std;
int immediateGreater(int arr[], int n, int x)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 9, 5, 12, 16, 17, 18, 45, 88, 21, 33};
    cout << immediateGreater(arr, 11, 14) << endl;
    return 0;
}