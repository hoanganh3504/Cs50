#include <stdio.h>

int main(void)
{
    int a, tong = 0;
    printf("Hay nhap so nguyen duong n: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
		tong += i;
    }
	printf("%d \n", tong);
}
