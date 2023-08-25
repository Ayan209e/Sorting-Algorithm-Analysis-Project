#ifndef bubbleSort_h
#define bubbleSort_h

#include "sort.h" // Importing the custom made sort header file
#include<stdbool.h> // Including the stdbool file to use boolean data type in C.

// static long long inversions = 0;

// Bubble Sort Function
void bubbleSort(int arr[],int n){

    bool swapped; // Boolean variable to check if any swaps happen
    
    for( int i=0 ; i<n-1 ; i++ ){

        swapped = false;
        for( int j=0 ; j<n-i ; j++ ){
            if(arr[j] > arr[j+1]){
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                inversions++;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if(!swapped){
            break;
        }
    
    }
}

long long bubbleSortAndCountInversions(int arr[], int n) {
    inversions = 0;
    bubbleSort(arr,n);
    return inversions;
}

#endif