// Custom made header file with all the sorting algorithms

#ifndef sort_h // A preprocessor directive in C, which checks if the specific code is already defined or not.
#define sort_h // If not defined, this will define the code in the header file

static long long inversions = 0;

// Defining the Sorting Functions
// Bubble Sort
void bubbleSort(int arr[],int n);
long long bubbleSortAndCountInversions(int arr[], int n);

// Selection Sort
void selectionSort(int arr[],int n);
long long insertionSortAndCountInversions(int arr[], int n);

// Insertion Sort
void insertionSort(int arr[],int n);
long long selectionSortAndCountInversions(int arr[], int n);

// Merge Sort
void mergeSort(int arr[],int left,int right);
void merge(int arr[],int left,int mid,int right);
long long mergeSortAndCountInversions(int arr[], int left,int right);

// Quick Sort
void quickSort(int arr[],int left,int right);
int partition(int arr[],int left,int right);
long long quickSortAndCountInversions(int arr[], int n);

#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "mergeSort.h"
#include "quickSort.h"

#endif // This ends the #ifndef block

// Complete functions are present in respective .c files.