#ifndef selectionSort_h
#define selectionSort_h

#include "sort.h" // Importing the custom made sort header file
#include<stdbool.h> // Including the stdbool file to use boolean data type in C.

// static long long inversions = 0;

// Selection Sort Function
void selectionSort(int arr[],int n){

    for(int i=0 ; i<n-1 ; i++){
        int minIndex=i;

        for(int j=i+1 ; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        if(minIndex != i){
            // Swap arr[i] and arr[minIndex]
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            inversions++;
        }
    }
}

long long selectionSortAndCountInversions(int arr[], int n){

    inversions = 0; 
    selectionSort(arr,n);
    return inversions;

}

#endif