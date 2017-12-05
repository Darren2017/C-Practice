#include<stdio.h>


/*使用递归函数求n的阶乘*/
/*int factorial(int n)
{
    if(n>0)
    {
        return n*factorial(n-1);
    }else return 1;
}

int main()
{
    int n;
    printf("请输一个正整数：");    scanf("%d",&n);
    printf("%d的阶乘是%d\n",n,factorial(n));

    return 0;
}*/



/*不使用递归函数求n的阶乘*/
/*int main()                
{
    int n;
    int i=0,x=1;
    printf("请输入一个正整数：");    scanf("%d",&n);
    if(n==0){printf("0的阶乘是1\n");}
    else{
        for(i=1;i<=n;i++){
            x*=i;
        }
        printf("%d的阶乘是%d\n",n,x);
    }
    return 0;
}*/