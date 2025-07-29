#include <stdio.h>

int main(void)
{
    float number_kilomet, waittime, money_total;

    printf("Hay nhap so kilomet ban di: ");
    scanf("%f", &number_kilomet);
    printf("Hay nhap so thoi gian cho: ");
    scanf("%f", &waittime);
    int money_wait = ((int)(waittime/5) + 1) * 3000;  //waiting_time (phut)

    if (number_kilomet < 0.7)
    {
        money_total = 11000 + money_wait;
        printf("So tien quy khach phai tra la %.3f \n", money_total);
    }
     else if (number_kilomet > 0.7 && number_kilomet < 31 )
    {
        float number_kilotmet_greater07 = number_kilomet - 0.7 ;
        money_total = 11000 + money_wait + (int) (number_kilotmet_greater07 + 1) * 15800;
        printf("So tien quy khach phai tra la %.3f \n", money_total);

    }
    else
    {
        float number_kilotmet_greater31 = number_kilomet - 31 ;
        money_total = 11000 + money_wait + 31* 15800 + (int) (number_kilotmet_greater31 + 1) * 12500;
        printf("So tien quy khach phai tra la %.3f \n", money_total);

    }
}
