#include<bits/stdc++.h>
#define ll long long
using namespace std;


void merge(int *arr, int s, int e){

	int m = (s+e)/2;

	int length1 = m - s + 1 ;
	int length2 = e - m ;

	//now new array banalo
	int *first = new int[length1]; //arr one
	int *second = new int[length2]; //arr two


	//now copy karlo 
    int mainArrayIndex = s;
    for( int i = 0; i < length1; i++)
    	first[i] = arr[mainArrayIndex++];

    mainArrayIndex = m + 1;
    for( int j = 0; j < length2; j++)
    	second[j] = arr[mainArrayIndex++];


    //merge 2 sorted arrays
    int index1 = 0, index2 = 0;

    mainArrayIndex = s;

    while(index1 < length1 && index2 < length2 )
    {
    	if(first[index1] < second[index2])
    		arr[mainArrayIndex++] = first[index1++];
    	
    	else
    		arr[mainArrayIndex++] = second[index2++];
    }

    while(index1 < length1){
    	arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < length2){
    	arr[mainArrayIndex++] = second[index2++];
    }

}

void mergeSort(int *arr, int start, int end)
{
	//base case
	if(start >= end)   //be careful
		return;

	int mid = (start + end) / 2;

	//left part sort
	mergeSort(arr, start, mid);

	//right part sort
	mergeSort(arr, mid+1, end);

	//ab dono parts ko merge krdo 
	merge(arr, start, end);
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int arr[] = { 38,27,43,3,9,82,10 };
	int size = sizeof(arr)/sizeof(arr[0]);

	mergeSort(arr, 0, size-1);

	for(int i=0; i<size; i++)
		cout << arr[i] << " ";
	
	cout << endl;
	return 0;
}
