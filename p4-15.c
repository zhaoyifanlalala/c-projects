/*
编写一段程序，显示出身高和标准体重的对照表。
显示的身高范围和间隔由输入的整数值进行结控制，标准体重精确到小数点后2位。
开始数值（cm）：155
结束数值（cm）：190
间隔数值（cm）：5
155cm    49.50kg
160cm    54.00kg
...(以下省略)...
ps:标准体重=（身高-100）*0.9
*/
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    double d = 0;

    printf("开始数值（cm）：");
    scanf("%d", &a);
    printf("结束数值（cm）：");
    scanf("%d", &b);
    printf("间隔数值（cm）：");
    scanf("%d", &c);

    for (int i = a; i < b; i = i + c)
    {
        d = (i - 100) * 0.9;
        printf("%dcm   %.2f\n", i, d);
    }

    return 0;
}