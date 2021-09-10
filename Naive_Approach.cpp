#include<bits/stdc++.h>
using namespace std;

int getLargest(int arr[],int n)
{
    for(int i=0;i<n;i++){
        bool temp = true;
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = false;
                break;
            }
        }

        if(temp == true)
            return i;    
    }
    return -1;
}

int main(){
    int arr[] = {5, 8, 20, 10};
    cout<<getLargest(arr,4);
    return 0;
}