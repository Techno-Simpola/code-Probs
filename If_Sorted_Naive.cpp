//Naive Approach to the question...
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    
    int check  = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            check = -1;
        }
    }

    if(check == -1)
        cout<<"no";
    else
        cout<<"yes";    
    return 0;        
}