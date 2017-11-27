#include<stdio.h>

double power2(double x,int n)
{
    int i;
    double tmp=1.0;
    for(i=0;i<n;i++){
        tmp*=x;
    }
    return tmp;
}

int main()
{
    double x;
    int n;
    printf("求a的b次幂。");
    printf("a:");   scanf("%lf",&x);
    printf("b:"); 
    scanf("%d",&n);
    printf("%f的%d次幂是：%f",x,n,power2(x,n));

    return 0;
}
