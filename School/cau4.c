#include <stdio.h>

int main()
{
  int total = 0;
  int factorial = 1;
  int n;
  do
  {
    printf("Pls input natural number: ");
    scanf("%d", &n);
  }while(n<=0);
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      factorial *= j;
    }
    total += factorial;
    factorial = 1;
  }
  printf("Total: %d", total);
}
