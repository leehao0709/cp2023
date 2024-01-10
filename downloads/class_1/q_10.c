#include <stdio.h>

int main()
{
    char ch;

    printf("輸入一个字符：");

    // 檢查 scanf 的返回值，確保成功讀取一個字符
    if (scanf(" %c", &ch) != 1) {
        printf("讀取字符失敗\n");
        return 1; //  或者採取其他錯誤處理措施
    }

    if (ch == 'a') {
        printf("按下了 'a'\n");
    }

    return 0;
}