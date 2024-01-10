#include <stdio.h>

void main()
{
    char a;

    // 使用 %zu 格式說明符輸出 size_t 類型
    printf("The size of int is %zu\n", sizeof(int));

    // 使用 %zu 格式說明符輸出 size_t 類型
    printf("The size of char a is %zu\n", sizeof(a));
}