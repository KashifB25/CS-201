#include <stdio.h>

#define N 100000

void sieve(int n, int *arr)
{
	arr[1] = 0;
	for(int i=2; i<=n; i++)
	{
		arr[i]=1;
	}
	
	for(int i=2; i*i<=n; i++)
	{
		if(arr[i]==1)
		{
			for(int j=i*i; j<=n; j+=i)
			{
				arr[j]=0;
			}
		}
	}
}


int main()
{   
    int arr[N+1];
    
	//Using Sieve of Eratosthenes to find Prime Numbers below N
    sieve(N, arr);

    printf("Prime Numbers below N: ");
    for(int i=2; i<N; i++)
	{
		if(arr[i]==1)
			printf("%d\t",i);
	}
	printf("\n");

}
