#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int device_code ;
  char device_name[50];
  int manufactoring_year;
  int device_status;
} device;

int main(void)
{
  int n;
  printf("Input device quantity: ");
  scanf("%d", &n);
  device *manage =(device*) malloc(n*sizeof(device));

  for (int i = 0; i < n; i++)
  {
    printf("Input device[%d] code: ", i + 1);
    scanf("%d",&manage[i].device_status);
    while(getchar() != '\n');

    printf("Input device[%d] name: ", i + 1);
    fgets(manage[i].device_name, sizeof(manage[i].device_name), stdin);

    printf("Input thedevice[%d] manufactoring year: ", i + 1);
    scanf("%d", &manage[i].manufactoring_year);

    printf("Input the device[%d] status: ", i + 1);
    scanf("%d", &manage[i].device_status);

    while(getchar() != '\n');
  }
  int on_device = 0;
  //Manage on/off device
  for (int i = 0; i < n; i++)
  {
    if(manage[i].device_status == 0)
    {
      printf("Device %d is on \n", i + 1);
      on_device += 1;
    }
  }
  if (on_device == 0)
  {
    printf("All device is off \n");
  }
  //Manage manufactoring year
  for( int i = 0; i < n; i++)
  {
    if(manage[i].manufactoring_year < 2020)
    {
      printf("Device %d is manufactoring year: %d \n", i + 1, manage[i].manufactoring_year);
    }
  }
  return 0;
}
