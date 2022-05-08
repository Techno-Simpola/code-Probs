#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n, int x)
{
    unordered_map<int, int> freq;

    for (auto i = 0; i < n; i++)
        freq[arr[i]]++;

    for (auto j : freq)
    {
        if (j.first == x)
            cout << "frequency of " << x << " is " << j.second << endl;
    }
}

int main()
{
    int n, arr[n], x;
    cout << "enter the length of the array" << endl;
    cin >> n;
    cout << "enter the elements of array" << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "enter the number to be found" << endl;
    cin >> x;

    countFreq(arr, n, x);

    return 0;
}
