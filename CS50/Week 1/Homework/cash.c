#include<stdio.h>
#include<cs50.h>


int get_positive_int(void);
int quarter(int);
int dime(int cents);
int nickel(int cents);


int main(void)
{
    int cents = get_positive_int(); //Nhận số lượng xu > 0
        int xu25 = quarter(cents);
    printf("So dong xu la: %i\n", xu25);
    cents = cents - (xu25 * 25);
        int xu10 = dime(cents);
        printf("So dong xu 10 la: %i\n", xu10);
    cents = cents -(xu10 * 10);
    int xu5 = nickel(cents);
        printf("So dong xu 5 la: %i\n", xu5);
    cents = cents -(xu5 * 5);
    int xu1 = cents;
    printf("So dong xu 1 la: %i\n", xu1);
    int tong = xu1 +xu5 + xu10 + xu25;
    printf("Tong so xu can doi la: %i\n", tong);
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

int quarter(int cents)
{
    int quarter = cents / 25;
    return quarter;
}

int dime(int cents)
{
    int dime = cents / 10;
    return dime;
}

int nickel(int cents)
{
    int nickel = cents / 5;
    return nickel;
}
