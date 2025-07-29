#include <stdio.h>



int main(void)
{
    int tong = 0;
    do
    {

    int n;
    do
    {
        printf("Vui long nhap so nguyen duong n: ");
        scanf("%d", &n);
    }
    while (n < 0 );
    if(n % 2 == 0)
    {
        for( int i = 0; i <= n; i += 2)
        {
            tong += i;
        }
    }
    else
    {
        for( int i = 1; i <= n; i += 2)
        {
            tong += i;
        }
    }
    printf("Tong cua chuoi la %d \n", tong);
    }
    while(tong < 2020);
    return 0;
}
