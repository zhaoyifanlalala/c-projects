#include <stdio.h>
int main(){
    int a;
    int b;
    printf("输入第一个数：");
    scanf("%d",&a);
    printf("第一个数是 %d\n",a);
    printf("输入第二个数：");
    scanf("%d",&b);
    printf("第二个数是 %d\n",b);

    //计算两个数的和
    int c = a + b;
    printf("%d+%d=%d\n",a,b,c);

    //计算两个数的余
    c = a % b;
    printf("%d %% %d=%d\n",a,b,c);

    //计算两个数的差
    c = a - b;
    printf("%d-%d=%d\n",a,b,c);

    //计算两个数的积
    c = a * b;
    printf("%d*%d=%d\n",a,b,c);

    //计算两个数的商
    c = a / b;
    printf("%d/%d=%d\n",a,b,c);
    return 0;
}