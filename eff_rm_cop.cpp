#include <bits/stdc++.h>
#define ll long long
using namespace std;

int eff_rm_cop(int arr[], int n)
{
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[size - 1]) //checks for distinct elements
        {
            arr[size] = arr[i];
            size++;
        }
    }
    return size;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 40, 40};
    cout << eff_rm_cop(arr, 6);
    return 0;
}