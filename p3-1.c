/*
编写一段程序，输入两个整数值，
如果后者是前者的约数，则显示“B是A的约数”，
如果不是，则显示“B不是A的约数”。

请输入两个整数。
整数A:17
整数A:5
B不是A的约数。
*/
#include<stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("整数A：");     
    scanf("%d",&a);
    printf("整数B：");     
    scanf("%d",&b);
    if( a % b){
        printf("B不是A的约数\n");
    }else{
        printf("B是A的约数\n");
    }
    return 0;
}