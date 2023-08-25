#ifndef insertionSort_h
#define insertionSort_h

#include "sort.h"

// static long long inversions = 0;

// Insertion Sort Function
void insertionSort(int arr[],int n){

    for( int i = 1 ; i < n ; i++ ){
        int key = arr[i];
        int j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
            inversions++;
        }
        arr[j + 1] = key;
    }
  
}

long long insertionSortAndCountInversions(int arr[], int n){
    inversions = 0;
    insertionSort(arr,n);
    return inversions;
}

#endif