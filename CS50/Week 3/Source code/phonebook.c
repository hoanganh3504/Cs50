#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct
{
    string name;
    string phone;
}   person;

int main(void)
{
    person people[3];
    people[0].name = "David";
    people[1].name = "John";
    people[2].name = "Malan";

    people[0].phone  = "0989343565";
    people[1].phone  = "0156455664";
    people[2].phone  = "0046464554";

    string a = get_string("Name: ");
    for(int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, a) == 0)
        {
            printf("Found! Phone number: %s \n", people[i].phone);
            return 0;
        }
    }
        printf("Not Found! \n");
        return 1;
}
