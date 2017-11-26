#include<stdio.h>

int main()
{
    int i,j;
    int tensu1[4][3];
    int tensu2[4][3];
    int sum[4][3];

    for(int i=0;i<4;i++){      /*读取第一次成绩*/
        for(int j=0;j<3;j++){
            printf("请输入%d号同学第%d科第一次的成绩：  " ,i+1,j+1);
            scanf("%d",&tensu1[i][j]);
        }
    }
    for(i=0;i<4;i++){      /*读取第二次成绩*/
        for(j=0;j<3;j++){
            printf("请输入%d号同学第%d科第二次的成绩:   ",i+1,j+1);
            scanf("%d",&tensu2[i][j]);
        }
    }
    for(i=0;i<4;i++){      /*计算总成绩*/
        for(j=0;j<3;j++){
            sum[i][j]=tensu1[i][j]+tensu2[i][j];
        }
    }
    printf("总成绩：\n");    /*显示总成绩*/
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%3d ",sum[i][j]);
        }puts("");
    }
    printf("第一次成绩：\n");    /*显示第一次成绩*/ 
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%3d ",tensu1[i][j]);
        }puts("");
    }
    printf("第二次成绩：\n");     /*显示第二次成绩*/
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%3d ",tensu2[i][j]);
        }puts("");
    }
    return 0;
}