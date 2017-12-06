#include<stdio.h>

int gcd(int a,int b)
{
    return (b==0?a:gcd(b,a%b));
}

int gcdm(int a,int b)
{
    return ((a>b)?gcd(a,b):gcd(b,a));
}

int main()
{
    int a,b;
    printf("请输入两个正整数：\n");
    printf("a:");   scanf("%d",&a);
    printf("b:\n");   scanf("%d",&b);

    printf("%d和%d的最大公约数为%d\n",a,b,gcd(a,b));

    return 0;
}