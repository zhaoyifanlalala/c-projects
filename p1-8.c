/*
编写一段程序，像下面这样显示读取到的两个整数的乘积。
请输入两个整数。
整数1:27↙
整数2:35↙
它们的乘积是945。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    puts("请输入两个整数。");
    printf("整数1：");     
    scanf("%d",&a);
    printf("整数2：");     
    scanf("%d",&b);
    printf("它们的乘积是%d\n",a*b);
    return 0;
}