#include <stdio.h>

int return_value(float a);

int main(void)
{
    float T;
    printf("Input environtmental temperature: ");
    scanf("%f", &T);
    return_value(T);
    if (T > 22.5 && T < 32.5)
    {
        printf("Temperature is normal \n");
    }
    else
    {
        printf("Temperature is not normal \n");
    }
    return 0;
}



int return_value(float a)
{
    if ( a > -55.7 && a < 150)
    {
        printf("Value is valid \n");
         return 1;
    }
    else
    {
        printf("Value is not valid \n");
        return 0;
    }
}
