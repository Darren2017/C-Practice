#include<stdio.h>
int main()
{
    int longth,wideth;
    printf("请输入长  宽\n");   scanf("%d %d",&longth,&wideth);
    for(int i=1;i<=wideth;i++){
                                for(int j=1;j<=longth;j++){
                                                           putchar('*');
                                }puts("");
    }
return 0;
}
