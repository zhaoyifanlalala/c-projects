/*
使用if语句替换代码清单3-15程序中的条件运算符，实现同样的功能。
*/
#include <stdio.h>
int main(){
    int n1, n2;
    int x = 0;

    puts("请输入两个整数：");
    printf("整数1："); 
    scanf("%d", &n1);
    printf("整数2："); 
    scanf("%d", &n2);

    if(n1 > n2){
        x = n1 - n2;
    }else{
        x = n2 - n1;
    }
    printf("它们的差是%d。\n", x);
    return 0;
}