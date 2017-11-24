#include<stdio.h>

int main()
{
    int i,j,len;    
    puts("显示直角在右上角的等腰直角三角形\n");
    printf("输入短边 ");   scanf("%d",&len);
    for(i=1;i<=len;i++){
                        for(j=i-1;j>0;j--){
                                            printf("  ");
                        }
                        for(j=1;j<len-i+1;j++){
                                            printf("* ");
                        }
    puts("");
    }
return 0;
}
