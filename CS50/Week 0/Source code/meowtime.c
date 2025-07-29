#include <cs50.h>
#include <stdio.h>

void meow(int n);
int get_positive_int(void);
int main(void)


{
     int times = get_positive_int(); // Trung gian qua biến times cho dễ hiểu, nhìn gọn
    meow(times);        //Nếu muốn lấy trực tiếp có thể code meow(get_positive_int());
}






int get_positive_int(void)  //Hàm đinh nghĩa dùng int đầu ra sẽ xuất ra giá trị số nguyên dương là n
{
    int n;
    do
    {
        n = get_int("Number:  ");
    }
    while ( n < 1 );
    return n;  //Trả giá trị đầu ra
}

void meow(int)   //Hàm định nghĩa, nhận giá trị từ một số nguyên n nào đó
{
    for( int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}
