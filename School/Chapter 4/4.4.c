#include <stdio.h>

int main(void)
{
    printf("Hay nhap vao mot so nguyen: ");
    int a;
    scanf("%d", &a);
    if (a == 100)
    {
        return 2;
    }
    else if (a % 2 == 0)
    {
        printf("So ban vua nhap la so chan! \n");
    }
    else
    {
        printf("So ban vua nhap la so le! \n");
    }
    return 0;
}
