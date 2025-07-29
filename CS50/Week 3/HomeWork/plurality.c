#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define max 9

typedef struct
{
    string name;
    int ballot;
}   person;
person vote[max];

void print_winner(int );

int main(int argc, string argv[])
{
    if (argc <= 2)
    {
        printf("Usage: ./test2 [candidates] \n");
        return 1;
    }
int number = get_int("Number of elevation: ");

  for (int i = 0; i < argc - 1; i++)
    {
        vote[i].name = argv[i + 1];
        vote[i].ballot = 0;
    }

    for (int i = 0; i < number; i ++)
    {
        string name = get_string("Name: ");
        bool found = false;
        for (int j = 0; j < argc - 1; j++)
        {
            if (strcmp(name, vote[j].name) == 0)
            {
                vote[j].ballot += 1;
                found = true;
                break;
            }
        }
        if (!found)
        {
            printf("Invalid value! \n");
            break;
        }
    }
        int max_vote = 0;
        string winner;
        for (int j = 0; j < argc - 1; j++)
        {
            if (vote[j].ballot > max_vote)
            {
                max_vote =  vote[j].ballot;
                winner = vote[j].name;
            }
        printf("%i \n", vote[j].ballot);
        }

        printf("Winner: ");
        for (int i = 0; i < argc - 1; i++)
            if (vote[i].ballot  == max_vote)
            {
                printf("%s ", vote[i].name);
            }
        printf("\n");

}
