/*
编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。
如果其中任意两个值相等，则显示“有两个值相等”。
如果上述两种情况都不满足，则显示“三个值各不相同”。
*/
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("整数A：");
    scanf("%d", &a);
    printf("整数B：");
    scanf("%d", &b);
    printf("整数C：");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("三个数相等\n");
    }
    if (a == b || a == c || b == c)
    {
        printf("两个数相等\n");
    }
    if (a != b && b != c && a != c)
    {
        printf("三个值都不相等\n");
    }
    return 0;
}