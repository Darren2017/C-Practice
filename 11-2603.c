#include<stdio.h>

int main()
{
    int i,j,k,l,m,n;
    int tensu1[4][3];
    int tensu2[3][4];
    int sum[4][4]={{0}};

    for(i=0;i<4;i++){            /*行列式１*/
        printf("请输入行列式１第%d行的值: ",i+1);      
        for(j=0;j<3;j++){
            scanf("%d",&tensu1[i][j]);
        }
    }
    for(i=0;i<3;i++){           /*行列式２*/
        printf("请输入行列式2第%d行的值: ",i+1);       
        for(j=0;j<4;j++){
            scanf("%d",&tensu2[i][j]);
        }
    }
        for(k=0,m=0;k<4;k++,m++){
            for(j=0,n=0;j<4;j++,n++){
                for(l=0,i=0;l<3;i++,l++){
                    sum[m][n]=sum[m][n]+tensu1[k][l]*tensu2[i][j];
                }
            }
        }
    for(m=0;m<4;m++){
        for(n=0;n<4;n++){
            printf("%4d  ",sum[m][n]);
        }puts("");
    }
    return 0;
}