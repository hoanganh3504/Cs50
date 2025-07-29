#include<stdio.h>
#include<cs50.h>
#include<string.h>

//Chữ in hoa và chữ in thường
int main(void)
{
    string s =get_string("Input:  ");
    int i = strlen(s);
    printf("Output: ");
    for( int  n =0; n < i; n++)
    {
        if (s[n] >= 'a' && s[n] <= 'z')
        {
           printf("%c", s[n] -= 32);
        }
        else
        {
            printf("%c", s[n]);
        }
    }
    printf("\n");

}
