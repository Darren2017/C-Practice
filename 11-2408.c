#include<stdio.h>

#define NUMBER 80

int main()
{
    int i,j;
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
    puts("分布图---------");
    printf("    100:");
    for(i=0;i<line[10];i++){puts("*");}
    puts("");
    for(j=9;j>=0;j--){
                    printf("%3d~%3d:",j*10,j*10+9);
                    for(i=0;i<line[j];i++){putchar('*');}
                    puts("");
    }
return 0;
}
