#include<stdio.h>
#include<cs50.h>

int lonhon10(int digit);
void mastercard( string number);
void visa(string number);
void american_express(string number, int length);
int so_ki_tu(string s);
void checklegit(string number);

int main(void)
{
    string number = get_string("Hay nhap the ngan hang cua ban: ");
    int length = so_ki_tu(number);
    printf(" So ki tu cua the ngan hang ban la: %i\n", length);
        american_express(number, length);
        visa(number);
        mastercard(number);
         checklegit(number);


}


int so_ki_tu(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}

//Check xem có phải là American express
void american_express(string number, int length) // Chỉnh sửa thêm hàm int length vào
{

    if (length == 15 &&  number[0] == '3' && (number[1] == '4' || number[1] == '7'))
    {
        printf(" The cua ban la American Express! \n");

    }

}

//Check xem có phải là Visa
void visa(string number)
{
    int b = so_ki_tu(number);
    if ((b == 13 || b == 16) && number[0] == '4' )
    {
        printf("The cua ban la Visa! \n");
    }
}

//
void mastercard(string number)
{
    int c = so_ki_tu(number);
    if ( c == 16 && ((number[0] == '5' && (number[1] > '0' && number[1] < '6'))))
    {
        printf(" The cua ban la Master Card! \n");
    }
    else
    {
        printf(" Vui long nhap lai so the! \n");
    }
}

//Check legit
void checklegit(string number)
{
    int d = so_ki_tu(number);
    int sum = 0; //Tong cua so gan cuoi x2
    int i = d - 2;
    while (i >= 0)
    {

        int digit = number[i] - '0';
        printf("Digit la: %i\n", digit);
        int total = lonhon10(digit);
        sum += total;
        i -= 2;
    }

    int z = d-1;
    int sum1 = 0; // Tong cua so cuoi x2
    while (z > 0)
    {
        int digit1 = number[z] -'0';
        printf("Digit 1: %i\n", digit1);
        sum1 += digit1;
        z -= 2;

    }
    int sum_all = sum + sum1;
    printf("sum la: %i \n", sum);
    printf("sum1 la: %i \n", sum1);
    printf("tong cua so the la: %i \n", sum_all);
    if (sum_all % 10 == 0)
    {
        printf(" So tai khoan ban chinh xac \n");
    }
    else
    {
        printf(" So tai khoan cua ban khong chinh xac \n");
    }


}
//Lớn hơn 10
    int lonhon10(int digit)
    {   int k = digit * 2;
        int tong;
        if (k > 9)
        {
            char s[25];
            sprintf(s, "%i", k);
            tong = s[0] + s[1] - 2*'0';
        }
        else
        {
            tong = k;
        }
        return tong;
    }
