#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main( int argc, string argv[])
{
     if (argc != 2)
    {
        printf("Usage: ./ceasar key \n");
        return 1;
    }
      int key = atoi(argv[1]) % 26;
    string s = get_string("Plaintext: ");
    printf("Cyphertext: ");
         for(int i = 0; i < strlen(s); i++)
    {
    if (isupper(s[i]))
    {
        printf("%c", ((s[i] - 'A' + key) % 26) + 'A');

    }

     else if (islower(s[i]))
    {
        printf("%c", ((s[i] - 'a' + key) % 26) + 'a');

    }
    else
    {
        printf("%c", s[i]);
    }
}
    printf("\n");
    return 0;
}




