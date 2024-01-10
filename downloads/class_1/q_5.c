#include <stdio.h>

/* ====================
計算長方形面積, 需傳入長與寬.
==================== */
int rect(int x, int y)
{
    int result;
    result = x * y;
    return result; /* 返回 result */
}

/* ====================
主函數
==================== */
int main()
{
    int x = 8, y = 4;
    int a;
    a = rect(x, y);
    printf("8*4 的面積是 %d", a);
    return 0;
}