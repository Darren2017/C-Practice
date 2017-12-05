#include<stdio.h>              /*求出从n个不同整数中取出r个整数的组合数*/

int combination(int n,int r){
    int c;
    if(r==0||r==n){
        c=1;
        }else{
            if(r==1){
            c=n;
             }else{
                    c=combination(n-1,r-1)+combination(n-1,r);
            }
    }    
    return c;  
}
int main()
{
    int n,r;
    printf("请输入两个整数n r，结果为从n个数中取出r个数的组合数\n");
    do{
        printf("请输入n：\n");   scanf("%d",&n);
        printf("请输入r：\n");   scanf("%d",&r);
        if(n<r){
            printf("n的值应比r大，请重新输入\n");
        }
    }while(n<r);
    printf("%d的%d组合结果是：%d\n", n, r, combination(n, r));

    return 0;
}