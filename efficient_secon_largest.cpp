//Efficient Approach to the question...
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

    int largest = 0, sec_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            sec_largest = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (sec_largest == -1 || arr[i] > arr[sec_largest]) // 12, 12, 12, "6" || 5, 8, 12, "10"
                sec_largest = i;
        }
    }

    cout << "Largest is at: " << largest << "\n";
    cout << "Second largest is at: " << sec_largest << "\n";
    return 0;
}