#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    int district;
    int number;
    int money;
}   invoice;

int calculate(int a)
{
	if (a < 100)
	{
		return a *25000;
	}
	else if( a>=100 && a < 500)
	{
		return a*25000*0.95;
	}
	else
	{
		return a*25000*0.9;
	}
}
int main(void)
{
    printf("Pls input number of households: ");
    int n;
    scanf("%d", &n);
    invoice *household = (invoice*)malloc(n *sizeof(invoice));
    for (int i = 0; i < n; i++)
    {

        printf("Pls input your name: ");
        scanf(" %s", household[i].name);  // Nhập chuỗi có dấu cách

		printf("Pls input your distric: ");
		scanf("%d", &household[i].district);

		printf("Pls input your number: ");
		scanf("%d", &household[i].number);


    }

	for ( int i = 0; i < n; i++)
	{
		household[i].money=calculate(household[i].number);
		printf("You must pay money is %d",household[i].money);
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (household[i].district == 1 && household[i].number > 100)
		{
			printf("Ten khach hang tren 100 la: %s \n", household[i]. name);
			count++;
		}
	}
	printf("Number of household have number biggger than 100 is: %d \n", count);
	return 0;

}
