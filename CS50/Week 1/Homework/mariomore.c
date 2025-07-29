#include <cs50.h>
#include <stdio.h>
//Mario full

int get_positive_int(void);
void height(int n);

int main(void)
{
    int times = get_positive_int();
    height(times);
}



int get_positive_int(void)
{
    int n;
    do
    {
    n = get_int("Height? ");
    }
    while (n < 0);
    return n;
}

void height(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
