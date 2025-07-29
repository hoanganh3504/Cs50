#include<stdio.h>
#include<cs50.h>

//Code đếm số kí tự hoặc có thể sài strlen(s)
//Nếu sài thì thêm file header
int nhan(string a);

int main(void)
{
    string name = get_string("Name: ");
    int length = nhan(name);
    printf("%i\n", length);
}

int nhan(string a)
{
   int n = 0;
    while( a[n] != '\0')
    {
        n++;
    }
    return n;
}
