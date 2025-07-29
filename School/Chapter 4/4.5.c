#include <stdio.h>

int main(void)
{
	int n, tong, i = 0;

	for ( int j = 0; ;j++)
	{
		printf("Hay nhap vao so nguyen: ");
		scanf("%d", &n);
		tong =	 ((i + n)*(n - i + 1))/2;
		printf("Tong cua ban la: %d \n", tong);
		if (tong > 10000)
		return 1;
	}
}
