#include<stdio.h>

int unsigned rrotate(unsigned x,int n)
{
    x=x>>n;
    printf("%u",x);

    return x;
}

int main()
{
    int n;
    unsigned x;
    scanf("%d %u",&n,&x);
    rrotate(x,n);

    return 0;
}