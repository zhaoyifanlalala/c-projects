/*
如果在int型变量的声明中为变量赋一个实数值的初始值(如3.14或5.7等)会怎样呢?请试着生成程序并确认。
*/
#include<stdio.h>
int main(){
    int a = 3.14;
    printf("%.0f\n",a);
    return 0;
}