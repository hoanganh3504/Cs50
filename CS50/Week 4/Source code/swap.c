#include <cs50.h>
#include <stdio.h>

typedef unit8_
int main(void)
{
   int x = 1;
   int y = 2;

    printf("%d and %d \n", x, y);
    swap(&x, &y);
    printf("%d and %d \n", x,y);
}


void swap( int *a, int *b)
{
     int temp = *a;
     *a = * b;
     *b = temp;
}
