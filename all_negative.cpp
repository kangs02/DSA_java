// A C++ program to put all negative
// numbers before positive numbers
//tc=O(n) and sc=o(1) 
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int pivot = 0;
    int j=-1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
            j++;
			swap(arr[i], arr[j]);
		}
	}
}


void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d", arr[i]);
}


int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}
