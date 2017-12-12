#include<stdio.h>

void adjust_point(int *a)
{
    if(*a < 0){
        *a = 0;
    }else{
        if(*a > 100){
            *a = 100;
        }
    }
}

int main()
{
    int a;
    printf("请输入一个整数：\n");
    scanf("%d", &a);
    adjust_point(&a);
    printf("%d\n", a);

    return 0;
}
