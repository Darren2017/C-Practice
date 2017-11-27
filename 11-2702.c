#include<stdio.h>

int sqr(int x)
    {
        return x*x; 
    }

int pow4(int x)
{
    return sqr(x)*sqr(x);
}

int main(void)
{
    int a;
    printf("请输入一个正整数:");    scanf("%d",&a);
    printf("%d的四次方是：%d\n",a,pow4(a));

    return 0;
}