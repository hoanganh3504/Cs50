#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main( int argc, string argv[])
{
     if (argc != 27 )
    {
        printf("Usage: ./ceasar key \n");
        return 1;
    }
    string s = get_string("Plaintext: ");
        printf("Cyphertext: ");
         for(int i = 0; i < strlen(s); i++)
    {
        for ( int n =0; n < 26; n++)
        {
           char a = 'A' + n;

            if (s[i] == a)
            {
                printf("%s", argv[n + 1]);
            }
        }
    }
        printf("\n");
        return 0;
}





