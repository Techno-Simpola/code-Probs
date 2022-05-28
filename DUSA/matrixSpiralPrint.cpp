#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> printSpiralSum(vector<vector<int>> &arr)
{

    vector<int> ans;

    int rows = arr.size();
    int cols = arr[0].size();

    int count = 0;
    int totalEle = 0;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;

    while (count < totalEle)
    {

        // first row
        for (int i = startingCol; i < endingCol; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // ending col
        for (int i = startingRow; i < endingRow; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol++;

        // printg ending row
        for (int i = endingCol; i >= startingRow; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // print starting col
        for (int i = endingRow; i >= startingRow; i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> arr;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ansSum = printSpiralSum(arr);

    for (int i = 0; i < ansSum.size(); i++)
    {
        cout << ansSum[i] << endl;
    }

    return 0;
}