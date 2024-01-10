#include <stdio.h>

int main()
{
    int a = 64;
    int b = 0x40; // 以十六進制表示
    long c = 64L;

    // 打印變量的質
    printf("%d, %d, %ld", a, b, c);

    return 0;
}