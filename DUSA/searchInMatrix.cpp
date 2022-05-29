#include <bits/stdc++.h>
#define ll long long
using namespace std;

// if the given matrix is sorted totally
bool spiralMatrix(vector<vector<int>> matrix, int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int midEle = matrix[mid / cols][mid % cols];

        if (midEle == target)
            return true;

        else if (midEle < target)
            start = mid + 1;

        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<vector<int>> matrix;
    // input matrix
    int rows, cols;
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    // function call
    bool ans = spiralMatrix(matrix, rows, cols, target);

    cout << ans << endl;
    return 0;
}