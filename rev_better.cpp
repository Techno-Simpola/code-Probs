#include <bits/stdc++.h>
#define ll long long
using namespace std;

void rev_better(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10, 5, 7, 3, 12, 20};
    rev_better(arr, 6);
    return 0;
}