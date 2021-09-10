#include <bits/stdc++.h>
#define ll long long
using namespace std;

void eff_move_to_end(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10, 5, 0, 0, 8, 0, 9, 0};
    eff_move_to_end(arr, 8);
    return 0;
}