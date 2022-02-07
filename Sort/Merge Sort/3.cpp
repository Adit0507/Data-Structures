// MERGE SORT //
// It divides the input array into two halves, 
// calls itself for the two halves, and then merges the two sorted halves. 
// The merge() function is used for merging two halves.

// TIME COMPLEXITY = O(nlogn)

#include "bits\stdc++.h"
using namespace std;

void merge(int *Arr, int l, int mid, int r) {
	// create a temp array
	int temp[r - l + 1];

	// crawlers for both intervals and for temp
	int i = l, j = mid+1, k = 0;
 
	// traverse both arrays and in each iteration add smaller of both elements in temp 
	while(i <= mid && j <= r) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval 
	while(j <= r) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = l; i <= r; i += 1) {
		Arr[i] = temp[i - l];
	}
}

// Arr is an array of integer type
// start and end are the starting and ending index of current interval of Arr

void mergeSort(int *Arr, int l, int r) {

	if(l < r) {
		int mid = (l + r) / 2;
		mergeSort(Arr, l, mid);
		mergeSort(Arr, mid+1, r);
		merge(Arr, l, mid, r);
	}
}

void Display(int A[] , int size)
{
    for(int i  =0; i < size; i++){

        cout << A[i];
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    Display(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    Display(arr, arr_size);

    return 0; 
}