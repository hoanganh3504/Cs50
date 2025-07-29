#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    int district;
    int number;
    int money;
}   invoice;
int main(void)
{
    printf("Pls input number of households: ");
    int n;
    scanf("%d", &n);
    invoice *household = (invoice*)malloc(n *sizeof(invoice));
    for( int i = 0; i < n; i++)
    {
        printf("Pls input your name: ");
        fgets()
    }
}
