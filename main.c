#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
// #include<sys/resource.h>
#include "sort.h" // Including the custom made sorting algorithm header file / library

// Function that will create a random array of size n.
void generateRandomArray(int arr[],int n){ 
    srand(time(NULL)); // Seed the random number generator with the current time, it ensures that different sequence of random number is generated each time the program is run.
    for( int i = 0 ; i < n ; i++ ){
        arr[i] = rand() % 1000 ; // Generates a random integer from the range 0 to 999.
    }
}

// Fumction to display the array.
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

// Function to make copy of an array (This is used where same unsorted is sent to all the sorting algorithms at the same time)
// int[] copyArray(int source[], int size) {
//     int destination[size];
//     for (int i = 0; i < size; i++) {
//         destination[i] = source[i];
//     }
//     return destination;
// }

// Bubble Sort Analyser
void analyseBubble(int arr[],int n){
    
    clock_t start_time = clock(); // Get the Starting Time

    long long inversions = bubbleSortAndCountInversions(arr,n); // Sorting the array using bubble sort and storing the no of inversions in a variable.

    clock_t end_time = clock(); // Get the Ending Time

    double time_taken = (double) (end_time - start_time) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC is used to convert the CPU time into seconds.

    printf("\n\n\t\t Bubble Sort Analysis!\n");
    printf("\nThe Array was sorted using Bubble Sort Algorithm and following is it's analysis : \n\n");

    printf("Time Complexities : \n"); // Time Complexity
    printf("\tBest-Case : O(n)\n"); // Best-Case
    printf("\tAverage-Case : O(n^2)\n"); // Average-Case
    printf("\tWorst-Case : O(n^2)\n\n"); // Worst-Case

    printf("Space Complexity : O(1)\n\n"); // Space Complexity

    printf("Time Taken To Sort : %.5f seconds\n\n", time_taken); // Time Taken

    printf("No. Of Inversions / Swaps : %lld\n\n",inversions); // No. Of Inversions / Swaps
    printf("Bubble Sort Is Stable Sorting Algorithm\n\n");

    //Printing Array
    printf("Do You Want To See The Sorted Array? [ Y / N ] : ");
    char choice=getch();
    if(toupper(choice)=='Y'){
        printArray(arr,n);
    }
    else{
        main();
    }

}

// Insertion Sort Analyser
void analyseInsertion(int arr[],int n){

    clock_t start_time = clock(); // Get the Starting Time

    long long inversions = insertionSortAndCountInversions(arr,n); // Sorting the array using bubble sort and storing the no of inversions in a variable.

    clock_t end_time = clock(); // Get the Ending Time

    double time_taken = (double) (end_time - start_time) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC is used to convert the CPU time into seconds.

    printf("\n\n\t\t Insertion Sort Analysis!\n");
    printf("\nThe Array was sorted using Insertion Sort Algorithm and following is it's analysis : \n\n");

    printf("Time Complexities : \n"); // Time Complexity
    printf("\tBest-Case : O(n)\n"); // Best-Case
    printf("\tAverage-Case : O(n^2)\n"); // Average-Case
    printf("\tWorst-Case : O(n^2)\n\n"); // Worst-Case

    printf("Space Complexity : O(1)\n\n"); // Space Complexity

    printf("Time Taken To Sort : %.5f seconds\n\n", time_taken); // Time Taken

    printf("No. Of Inversions / Swaps : %lld\n\n",inversions); // No. Of Inversions / Swaps
    printf("Insertion Sort Is Stable Sorting Algorithm\n\n");

    //Printing Array
    printf("Do You Want To See The Sorted Array? [ Y / N ] : ");
    char choice=getch();
    if(toupper(choice)=='Y'){
        printArray(arr,n);
    }
    else{
        main();
    }

}

// Selection Sort Analyser
void analyseSelection(int arr[],int n){

    clock_t start_time = clock(); // Get the Starting Time

    long long inversions = selectionSortAndCountInversions(arr,n); // Sorting the array using bubble sort and storing the no of inversions in a variable.

    clock_t end_time = clock(); // Get the Ending Time

    double time_taken = (double) (end_time - start_time) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC is used to convert the CPU time into seconds.

    printf("\n\n\t\t Selection Sort Analysis!\n");
    printf("\nThe Array was sorted using Selection Sort Algorithm and following is it's analysis : \n\n");

    printf("Time Complexities : \n"); // Time Complexity
    printf("\tBest-Case : O(n^2)\n"); // Best-Case
    printf("\tAverage-Case : O(n^2)\n"); // Average-Case
    printf("\tWorst-Case : O(n^2)\n\n"); // Worst-Case

    printf("Space Complexity : O(1)\n\n"); // Space Complexity

    printf("Time Taken To Sort : %.5f seconds\n\n", time_taken); // Time Taken

    printf("No. Of Inversions / Swaps : %lld\n\n",inversions); // No. Of Inversions / Swaps
    printf("Selection Sort Is Not A Stable Sorting Algorithm\n\n");

    //Printing Array
    printf("Do You Want To See The Sorted Array? [ Y / N ] : ");
    char choice=getch();
    if(toupper(choice)=='Y'){
        printArray(arr,n);
    }
    else{
        main();
    }

}

// Merge Sort Analyser
void analyseMerge(int arr[],int n){
    
    clock_t start_time = clock(); // Get the Starting Time

    long long inversions = mergeSortAndCountInversions(arr,0,n-1); // Sorting the array using bubble sort and storing the no of inversions in a variable.

    clock_t end_time = clock(); // Get the Ending Time

    double time_taken = (double) (end_time - start_time) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC is used to convert the CPU time into seconds.

    printf("\n\n\t\t Merge Sort Analysis!\n");
    printf("\nThe Array was sorted using Merge Sort Algorithm and following is it's analysis : \n\n");

    printf("Time Complexities : \n"); // Time Complexity
    printf("\tBest-Case : O(nlogn)\n"); // Best-Case
    printf("\tAverage-Case : O(nlogn)\n"); // Average-Case
    printf("\tWorst-Case : O(nlogn)\n\n"); // Worst-Case

    printf("Space Complexity : O(n)\n\n"); // Space Complexity

    printf("Time Taken To Sort : %.5f seconds\n\n", time_taken); // Time Taken

    printf("No. Of Inversions / Swaps : %lld\n\n",inversions); // No. Of Inversions / Swaps
    printf("Merge Sort Is A Stable Sorting Algorithm\n\n");

    //Printing Array
    printf("Do You Want To See The Sorted Array? [ Y / N ] : ");
    char choice=getch();
    if(toupper(choice)=='Y'){
        printArray(arr,n);
    }
    else{
        main();
    }

}

// Quick Sort Analyser
void analyseQuick(int arr[],int n){
        
    clock_t start_time = clock(); // Get the Starting Time

    long long inversions = quickSortAndCountInversions(arr,n); // Sorting the array using bubble sort and storing the no of inversions in a variable.

    clock_t end_time = clock(); // Get the Ending Time

    double time_taken = (double) (end_time - start_time) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC is used to convert the CPU time into seconds.

    printf("\n\n\t\t Quick Sort Analysis!\n");
    printf("\nThe Array was sorted using Quick Sort Algorithm and following is it's analysis : \n\n");

    printf("Time Complexities : \n"); // Time Complexity
    printf("\tBest-Case : O(nlogn)\n"); // Best-Case
    printf("\tAverage-Case : O(nlogn)\n"); // Average-Case
    printf("\tWorst-Case : O(n^2)\n\n"); // Worst-Case

    printf("Space Complexity :\n"); // Space Complexity
    printf("\tBest-Case And Average-Case : O(logn)\n"); // Best-Case
    printf("\tWorst-Case : O(n)\n\n"); // Average-Case
    
    printf("Time Taken To Sort : %.5f seconds\n\n", time_taken); // Time Taken

    printf("No. Of Inversions / Swaps : %lld\n\n",inversions); // No. Of Inversions / Swaps
    printf("Quick Sort Is Not A Stable Sorting Algorithm\n\n");

    //Printing Array
    printf("Do You Want To See The Sorted Array? [ Y / N ] : ");
    char choice=getch();
    if(toupper(choice)=='Y'){
        printArray(arr,n);
    }
    else{
        main();
    }

}

// Complete Analyser
void analyseAll(int arr[],int n){
    // Tabular Representation of the comparisons between the sorting algorithms
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|   Properties   ||   Bubble Sort   |   Selection Sort   |   Insertion Sort   |   Merge Sort   |   Quick Sort   |\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|  Best-Case TC  ||      O(n)       |      O(n^2)        |       O(n)         |     O(nlogn)   |     O(nlogn)   |\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|  Avg-Case TC   ||      O(n^2)     |      O(n^2)        |       O(n^2)       |     O(nlogn)   |     O(nlogn)   |\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("| Worst-Case TC  ||      O(n^2)     |      O(n^2)        |       O(n^2)       |     O(nlogn)   |     O(n^2)     |\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|Space Complexity||      O(1)       |      O(1)          |       O(1)         |     O(n)       | O(nlogn) / O(n)|\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("|     Stable?    ||      Yes        |         No         |          Yes       |       Yes      |       No       |\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
    getch();
    main();
    

}

// Main Function
void main(){

    system("cls"); // Clears Screen

    // Welcome
    printf("\n\n\t\tWelcome To The Sorting Algorithm Analysis!\n\n\n"); 
    printf("\t\t\tPress S to start the analysis\n");
    if(toupper(getch())=='S'){
        goto start; // To start section
    }
    else{
        exit(1); // Exiting the program
    }
    
    //Start Section
    start:

    system("cls");

    printf("\n\n\t\tDo you want to generate an array of specific size ? [ Y / N ]  ");
    char choice = getch();
    int n=10000; // If specific size not provided then array will be generated of size 10000.
    if(toupper(choice)=='Y'){ // If want specific size array
        printf("\n\t\tEnter the size of array you want me to generate:  ");
        scanf("%d",&n);
    }

    system("cls");
    int arr[n];

    // Generating random array of size n.
    generateRandomArray(arr,n); // Calling Function to create random array

    printf("\n\n\t\tI have generated a random array of size %d !\n\n",n);
    printf("\t\tDo you wish to see the array ? [ Y / N ]  ");

    choice = getch();
    if(toupper(choice)=='Y'){ // Displaying array on demand
        printf("\n\n\n");
        printArray(arr,n);

        printf("\t\tLet's continue to analysing?  ");
        getch();
        goto analyse; // Going to analyse section for further execution ( analysis )

    }

    else{
        goto analyse;
    }

    // Analyse Section
    analyse:

    system("cls");

    printf("\n\n\t\tPress S to Analyse Sorting Algorithms seprarately  \n");
    printf("\t\tPress C to Compare all the Sorting Algorithms  ");
    //Two options given by the program, either analyse each algorithm separately of compare between all of them at the same time.
    choice = getch();
    if(toupper(choice)=='S'){
        goto separate; // Going to separate section for separate execution of the program
    }
    else if(toupper(choice)=='C'){
        goto compare; // Going to compare section to anlayse all the algorithms at the same time;
    }
    else{
        goto analyse;
    }

    // Separate Section
    separate:
    system("cls");

    // Asking for which sorting technique to use.
    printf("\n\n\t\tWhich Sorting Algorithm You Want To Analyse \n");
    printf("\t\tPress B For Bubble Sort\n");
    printf("\t\tPress I For Insertion Sort\n");
    printf("\t\tPress S For Selection Sort\n");
    printf("\t\tPress M For Merge Sort\n");
    printf("\t\tPress Q For Quick Sort\n");
    printf("\t\tPress E To Exit\n");
    printf("\t\tPress Any Other Key To Back   ");

    choice=getch();
    system("cls");

    switch( toupper(choice) ){ // Switching between the choices;

        case 'B': analyseBubble(arr,n);
                  getch();
                  main();

        case 'I': analyseInsertion(arr,n);
                  getch();
                  main();

        case 'S': analyseSelection(arr,n);
                  getch();
                  main();

        case 'M': analyseMerge(arr,n);
                  getch();
                  main();

        case 'Q': analyseQuick(arr,n);
                  getch();
                  main();

        case 'E': exit(1);

        default : main();
    }

    // Compare Section
    compare:
    system("cls");
    analyseAll(arr,n);

}
