#include<stdio.h>

#define NUMBER 80

int max11(int line[])
{
    int i=0;
    int max=line[0];
    for(i=1;i<=10;i++){
        if (line[i]>max){
            max=line[i];
        }
    }
    return max;
}

int main(void)
{
    int i,j;
    int max;
    int num;            /*实际学生人数*/  
    int gola[NUMBER];   /*各学生分数*/
    int line[11]={0};   /*分布图各行数的人数*/
    puts("请输入学生人数：");
    do{
        scanf("%d",&num);
        if(num<=0||num>80){
                            printf("请输入1～%d的数",NUMBER);   
        }
    }while(num<=0||num>80);
    
    for(i=0;i<num;i++){
        printf("%2d号：",i+1);
        do{
            scanf("%d",&gola[i]);   
            if(gola[i]<0||gola[i]>100){
                                    printf("请输入0～100之间的数值");
            }
        }while(gola[i]<0||gola[i]>100);
        line[gola[i]/10]++;
    }
    max=max11(line);
    int max1=max;
    puts("分布图---------");   /*横向输出成绩*/
    for(i=0;i<max;i++){
        for(j=0;j<11;j++){
            if(line[j]==max1){
                printf("*   ");
                --line[j];
            }else{
                printf("    ");
            }
        }
        max1--;
        puts("");
    }
    printf("--------------------------------------------\n");
    printf("0   10  20  30  40  50  60  70  80  90  100 ");
    
    return 0;
}