#include <stdio.h>

// Hàm KHÔNG dùng con trỏ – chỉ hoán vị bản sao
void HoanViKhongConTro(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Trong HoanViKhongConTro: a = %d, b = %d\n", a, b);
}

// Hàm CÓ dùng con trỏ – hoán vị trực tiếp biến gốc
void HoanViCoConTro(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Trong HoanViCoConTro: a = %d, b = %d\n", *a, *b);
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Ban dau: x = %d, y = %d\n", x, y);

    // Gọi hàm KHÔNG dùng con trỏ
    HoanViKhongConTro(x, y);
    printf("Sau HoanViKhongConTro: x = %d, y = %d\n", x, y);

    // Gọi hàm CÓ dùng con trỏ
    HoanViCoConTro(&x, &y);
    printf("Sau HoanViCoConTro: x = %d, y = %d\n", x, y);

    return 0;
}
