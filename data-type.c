#include <stdio.h>
int main(int argc, char** argv){
    int a = atoi(argv[1]);
    short b = a;
    char c = b;
    float f = a / 3.0;
    double d = a / 3.0;
    printf("short is %d\n",b);
    printf("char is %d\n",c);
    printf("float is %f\n",f);
    printf("double is %lf\n",d);
    return 0;
}