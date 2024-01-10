#include <stdio.h>

void main()
{
int a;

// 第一次輸出
a = 3;
printf("%d\n", !a); // 邏輯非運算，a為真，所以輸出0

// 第二次輸出
a = 0;
printf("%d\n", !a); // 邏輯非運算，a為假，所以輸出1
}