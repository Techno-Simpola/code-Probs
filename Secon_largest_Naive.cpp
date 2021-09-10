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

    //finding the largest element of the array
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
            largest = i;
    }

    //finding the second largest element of the array
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
                res = i;
            else if (arr[i] > arr[res])
                res = i;
        }
    }

    cout << "second largest element is: " << arr[res];
    return 0;
}