/*
编写一段程序，像下面那样显示出读取的实数的值
请输入一个实数:57.3
你输入的是57.300000
*/
#include<stdio.h>
int main(){
    double a = 0;
    printf("请输入一个实数：");     
    scanf("%lf",&a);
    printf("你的输入是%f\n",a);
    return 0;
}