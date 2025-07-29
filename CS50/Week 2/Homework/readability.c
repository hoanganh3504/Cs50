#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void blank(string r);
int main(void)
{
    string r = get_string("Text:");
    blank(r);
}


void blank(string r)
{
    int d; // biến đếm số từ
    int b = 0; // biến lưu số chữ
    int a = 0; // biến lưu số khoảng cách
    int e = 0; // biến đếm số câu
    for (int i = 0; i < strlen(r); i++)
    {
        if (isspace(r[i]))
        {
            a++;
        }
        else
        {
            b++;
        }
        if (r[i] == '!' || r[i] == '?' || r[i] == '.')
        { 
            e++;
        }
    }
    d = a + 1;
    float L = (float) b / d * 100; // chữ chia từ
    float S = (float) e / d * 100; // câu chia từ
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index < 1)
    {
        printf("Under Grade 1!\n");
    }
    else if (index > 16)
    {
        printf("Over Grade 16! \n");
    }
    else
    {
        printf("Grade: %.0f\n", index);
    }
}
