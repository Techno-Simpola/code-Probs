#include <bits/stdc++.h>
#define ll long long
using namespace std;

// if the given matrix is sorted row-wise and column-wise separately
bool findNum(vector<vector<int>> matrix, int rows, int cols, int target)
{
    int colIdx = cols - 1;
    int rowIdx = 0;

    while (rowIdx < rows && colIdx >= 0)
    {
        int Ele = matrix[rowIdx][colIdx];

        if (Ele == target)
            return true;

        else if (Ele < target)
            rowIdx++;

        else
            colIdx--;
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
    bool ans = findNum(matrix, rows, cols, target);

    cout << ans << endl;
    return 0;
}