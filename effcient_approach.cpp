#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n)
{ int res = 0;
  for(int i=0;i<n-1;i++)
  {
      if(arr[res] < arr[i+1])
      {
          res = i+1;
      }
  }
  return res;
}


int main()
{
    int arr[] = {5, 8, 20, 10, 1, 19, 44, 21, 32, 101, 81, 99};
    cout<<getLargest(arr, 12);
    return 0;
}