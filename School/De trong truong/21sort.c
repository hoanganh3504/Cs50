#include <stdio.h>
#include <stdlib.h>


void swap( int *a,  int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int n;
	do
	{
		printf("Vui long nhap gia tri n > 2: \n");
		scanf("%d", &n);
	}	while (n <= 2);
	int *arr =(int *)malloc(n*sizeof(int));
	for(int i = 0; i < n; i++)
	{
		do
		{
			printf("Vui long nhap gia tri nguyen duong cho phan tu %d:", i + 1);
			scanf("%d",&arr[i]);
		} while (arr[i] < 0);
	}
	for ( int j = 0; j < n; j++)
	{
		if (arr[j] % 2 == 0)
		{
			printf("%d \n", arr[j]);
		}
	}

	for( int i = 0; i < n - 1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(&arr[i], &arr[j]);
			}
		}
	}
	for ( int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
