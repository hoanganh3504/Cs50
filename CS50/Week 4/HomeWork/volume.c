#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t header[44];
typedef uint16_t WORD;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./%s input.wav outut.wave factor \n", argv[0]);
        return 0;
    }

    FILE *csr = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");
    if ( csr == NULL || dst == NULL)
    {
        printf("Can't open this file");
        return 1;
    }

    header ha;
    fread(ha, sizeof(ha), 1, csr);      //Mảng không cần khai báo địa chỉ
    fwrite(ha,sizeof(ha), 1, dst );

    float factor;
    factor = atof(argv[3]);             //Chuyển từ string sang float

    WORD buffer;
    while(fread(&buffer, sizeof(buffer), 1, csr) != 0)  //biến đơn cần khai báo địa chỉ
    {
        buffer *= factor;
        fwrite(&buffer, sizeof(buffer), 1, dst);
    }
    fclose(dst);
    fclose(csr);
    return 0;


}
