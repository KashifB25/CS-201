#include <stdio.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insertionSort(int *A, int n);
void bubbleSort(int *A, int n);

int main()
{
    printf("Enter no of elements:\n");
    long long int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    clock_t start,end;
    long int t;
    start=clock();
    selection_sort(a,n);
    end=clock();
    t=end-start;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}

void insertionSort(int *A, int n)
{
    int min;
    for(int i = 0; i < n; i++)
    for (i = 0; i < n-1; i++)
    {
        min= i;
        for (int j = i+1; j < n; j++)
          if (A[j] < A[min])
            min = j;
        swap(&A[min], &A[i]);
    }
}

void bubbleSort(int *A, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = n-1; j > i; j--)
        {
            if(A[j] < A[j-1])
            {
                swap(&A[j], &A[j-1]);
            }
        }
    }
}
