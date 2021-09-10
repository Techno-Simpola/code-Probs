//Naive Approach to the question...
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[n];

    int temp[n];
    temp[0] = arr[0];
    int size = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[size - 1] != arr[i])
        {
            temp[size] = arr[i];
            size++;
        }
    }

    for (int i = 0; i < size; i++)
        arr[i] = temp[i];
    cout << "size of the new array is: " << size << "\n";
    return 0;
}