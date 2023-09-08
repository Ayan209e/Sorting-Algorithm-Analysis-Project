#ifndef quickSort_h
#define quickSort_h

#include "sort.h"

// static long long inversions = 0;

// Swap Function
void swap(int arr[],int i,int j) {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j] = temp;
}

// Partition Function
int partition(int arr[],int s, int e){

        int pivot=arr[s];
        int cnt=0;
        for(int i=s+1;i<=e;i++){
                if(arr[i]<pivot){
                        cnt++;
                }
        }

        int pivotIndex = s+cnt;
        swap(arr,pivotIndex,s);

        int i=s;
        int j=e;
        while(i<pivotIndex && j>pivotIndex){
                while(arr[i]<=pivot){
                        i++;
                }
                while(arr[j]>pivot){
                        j--;
                }
                if(i<pivotIndex && j>pivotIndex){
                        swap(arr,i++,j--);
                }
        }
        return pivotIndex;

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
