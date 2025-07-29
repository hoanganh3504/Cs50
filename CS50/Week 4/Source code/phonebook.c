#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *HA = fopen("phonebook.csv", "a");
    if( HA == NULL)
    {
        printf("Can't open this file");
        return 1;
    }

    char name[100];
    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    char phone[100];
    printf("Phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    fprintf(HA, "%s, %s \n", name, phone);

    fclose(HA);
    return 0;





}
