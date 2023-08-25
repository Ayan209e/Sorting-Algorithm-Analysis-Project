#ifndef quickSort_h
#define quickSort_h

#include "sort.h"

// static long long inversions = 0;

// Swap Function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition Function
int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = (left - 1);

    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
            inversions++;
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return (i + 1);
}

// Quick Sort Function
void quickSort(int arr[],int left,int right){
    if(left<right){
        int pivot=partition(arr,left,right);

        quickSort(arr,left,pivot-1);
        quickSort(arr,pivot+1,right);
    }
}

long long quickSortAndCountInversions(int arr[], int n){
    inversions = 0;
    quickSort(arr,0,n-1);
    return inversions;
}

#endif