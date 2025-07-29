#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int dollars = get_int("Let's input dollars:  $ ");
    while(true)
{
    char c = get_char("Here's $ %i. Double it and give it to the next person?", dollars);
    if (c == 'y')
    {
        dollars *= 2;
    }
    else
    {
        break;
    }
}
}



