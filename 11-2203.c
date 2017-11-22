#include<stdio.h>

int main()
{
    int A,B,max,min,sum=0;
    puts("请输入两个整数：");   scanf("%d %d",&A,&B);
    max=(A>B)?A:B;   min=(A<B)?A:B;
    int minn=min;
    do{
        sum+=min;
        min++;
    }while(min<=max);
    printf("大于等于%d小于等于%d的所有整数之和是%d\n",minn,max,sum);
    return 0;
}
