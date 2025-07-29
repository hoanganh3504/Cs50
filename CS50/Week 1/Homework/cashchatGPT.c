#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
    int cents = get_positive_int(); // Nhận số lượng xu > 0

    int denominations[] = {25, 10, 5, 1}; // Các mệnh giá: 25, 10, 5, 1
    int total_coins = 0; // Tổng số lượng xu cần đổi

    for (int i = 0; i < 4; i++)
    {
        int coin_count = cents / denominations[i]; // Số lượng xu cho mệnh giá hiện tại
        cents -= coin_count * denominations[i];   // Trừ đi số xu đã tính
        total_coins += coin_count; // Cộng vào tổng số xu

        printf("So dong xu %i la: %i\n", denominations[i], coin_count);
    }

    printf("Tong so xu can doi la: %i\n", total_coins);
}

int get_positive_int(void)
{
    int cents;
    do
    {
        cents = get_int("Let's input cents: ");
    }
    while (cents < 0);
    return cents;
}
