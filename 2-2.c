/*
显示读取出的整数的最后一位数字
1234 -> 4
3127 -> 7
*/
#include <stdio.h>

int main(void)
{
    int a;

    printf("请输入一个整数：");
    scanf("%d", &a);

    printf("最后一位是：%d。\n", a % 10);

    return 0;
}