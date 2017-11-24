#include<stdio.h>

int main()
{
    int i,j,len;
    printf("输入层数：");    scanf("%d",&len);
    for(i=1;i<=len;i++){
                        for(j=1;j<=len-i;j++){
                                                printf(" ");  
                        } 
                        for(j=1;j<=(i-1)*2+1;j++){
                                                    printf("*");
                        }puts("");      
    }
return 0;
}
