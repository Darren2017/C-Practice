#include<stdio.h>
int main()
{
    int sum=0;
    int cnt=0;
    int serry;
    do {
         int A;
         puts("请输入一个整数");    scanf("%d",&A);
         sum+=A;  cnt++;
         puts("是否继续输入整数  Yes--1;No--2");
         scanf("%d",&serry);
        }while (serry==1);
    printf("您输入的整数和是%d，平均数是%.2f",sum,(double)sum/cnt);
return 0;
}
