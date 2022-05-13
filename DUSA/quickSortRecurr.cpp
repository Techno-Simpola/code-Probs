#include <bits/stdc++.h>
#define ll long long
using namespace std;

int partition(int *arr, int s, int e)
{
    // 1. take a pivot
    // 2. count all the elements < pivot
    // 3. pivot -> s + coun

    /*
        [ 3,1,4,5,2 ] pivot is 3
        [ 4,1,3,5,2 ]
          i       j
          as 4 > 2 and we should have small elements in right and vice versa

          swap(4,2);
          i->i+1 , j->j-1

        [ 2,1, 3 ,5,4 ]    //here we have done the first pass
              ij
        pivot = 4
    */

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // placing pivot at the right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // ab left and right wala part smbhal lete hain
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
            i++;

        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end)
{

    // base case
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    // recursice call
    // left part sorting
    quickSort(arr, start, p - 1);

    // right part sorting
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[] = {3, 8, 1, 4, 7, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}