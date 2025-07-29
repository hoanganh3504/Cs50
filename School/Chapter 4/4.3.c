#include <stdio.h>

int main(void)
{
	float a;

	for (int i = 0; i < 5; i++)
	{
			printf("Hay nhap gia tri cua dien tro R: ");
			scanf("%f", &a);
			if ( a > 0)
			{
				printf("Gia tri cua R la %.1f \n", a);
				break;
			}
			printf("Hay nhap gia tri R > 0! \n");

	}
	return 0;

}
