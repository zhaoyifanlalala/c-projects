
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("a is %d\n",a);

    if (a > 0){
        if (a % 2){
            printf("%d 是奇数\n",a);
        }
        else{
            printf("%d 是偶数\n",a);
        }
    }
    else{
            printf("%d 不是正整数\n",a);
        }
}