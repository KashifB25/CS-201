#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4096

void insertionSort(int n, int *A)
{
    for (int j = 1; j < n; j++)
    {
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key)
        {
            A[i+1] = A[i];
            i--; 
        }
        A[i+1] = key;
    }
}

void generateAverageCaseInput(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = rand()%MAX;
}

void generateBestCaseInput(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = i;
}

void generateWorstCaseInput(int n, int input[]) {
  for(int i = 0; i<n; i++)
    input[i] = n-i-1;
}


int main() 
{

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
  
    int arr[n];

    generateBestCaseInput(n, arr);
    
    clock_t start, end;
    start = clock();

    insertionSort(n, arr);

    end = clock();
    
    printf("Total time taken by insertion sort for Best Case: %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
    
    generateAverageCaseInput(n, arr);
    
    start = clock();

    insertionSort(n, arr);

    end = clock();
    
    printf("Total time taken by insertion sort for Average Case: %f\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
    
    
    generateWorstCaseInput(n, arr);
    start = clock();

    insertionSort(n, arr);

    end = clock();
    
    printf("Total time taken by insertion sort for Worst Case: %f\n\n", (double)(end - start)/(double)CLOCKS_PER_SEC);
    return 0;
}
