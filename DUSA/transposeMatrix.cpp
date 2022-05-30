#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // input matrix

    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp;
            cin >> temp;
            matrix[i].push_back(temp);
        }
    }

    // printing transpose of matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < cols; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }

        cout << endl;
    }
    return 0;
}