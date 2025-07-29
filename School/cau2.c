#include <stdio.h>

typedef struct
{
    float checkin;
    float checkout;
    float waittime;
    float sotien;
}   giuxe;

int main(void)
{
    float total_money = 0;

    giuxe stt[100];
    for( int i = 0; i < 100; i ++)
    {
        printf("Checkin time: ");
        scanf("%f", &stt[i].checkin);
        printf("Checkout time: ");
        scanf("%f", &stt[i].checkout);
        stt[i].waittime = stt[i].checkout - stt[i].checkin;
        if (stt[i].waittime < 4)
        {
            stt[i].sotien = 2000;
        }
        else if (stt[i].waittime >= 4 && stt[i].waittime < 7 )
        {
            stt[i].sotien = 3000;
        }
        else if (stt[i].waittime >= 7  && stt[i].waittime < 10 )
        {
            stt[i].sotien = 5000;
        }
        else
        {
            stt[i].sotien = 8000;

        }
        printf("Tien xe cua ban phai tra la: %.2f \n", stt[i].sotien);

        total_money += stt[i].sotien;
        int remain;
        printf("Remaining cars: ");
        scanf("%d", &remain);
        if (remain == 0)
        {
            break;
        }

    }
    printf("Daily revenue: %.2f", total_money);
    return 0;
}
