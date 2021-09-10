//approach with low time complexity
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[n];

    bool check = true;
    for(int i = 1;i<n;i++)
    {
        if(arr[i-1] > arr[i])
            check = false;
    }
    
    cout<<check;
    return 0;
}
