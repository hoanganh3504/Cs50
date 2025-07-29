#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int finished_products;
}   manage;

int main(void)
{
    printf("Days to manage: ");
    int n;
    scanf("%d", &n);
    manage *day = (manage*)malloc(n*sizeof(manage));
    for( int i = 0; i < n; i++)
    {
        printf("Finished products in the day %d: ", i +1);
        scanf("%d", &day[i].finished_products);

        if(day[i].finished_products >= 400)
        {
            printf("Day %d achieve the target! \n", i +1 );
        }
        else
        {
            printf("Day %d not achieve the target! \n", i+1 );
        }
    }
    return 0;
}
