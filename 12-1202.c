#include<stdio.h>

void decrement_date(int *y, int *m, int *d)

{
    {
        if(*m == 1 || *m == 3 || *m == 5|| *m == 7 || *m == 8 || *m == 10 || *m == 12 ){
            if(*d == 31){
                *d = 1; 
                if(*m == 12){
                    *m = 1;
                    *y = *y +1;
                }else{
                    *m = *m +1;
                }
            }else{
                *d = *d +1;
            }
        }else{
            if(*m == 2){
                if(((*y % 4) == 0 && (*y % 100) != 0) || (*y % 400 == 0)){
                    if(*d == 29){
                        *d = 1;
                        *m = *m +1;
                    }else{
                        *d = *d +1;
                    }
                }else{
                    if(*d == 28){
                        *d = 1;
                        *m = *m +1;
                    }else{
                        *d = *d +1;
                    }
                }
            }else{
                if(*d == 30){
                    *d = 1;
                    *m = *m + 1;
                }else{
                    *d = *d +1;
                }
            }
        }
    }
}


int main()
{
    int year, month, day;
    printf("请输入年份：\n");
    scanf("%d", &year);
    printf("请输入月份：\n");
    scanf("%d", &month);
    printf("请输入日期：\n");
    scanf("%d", &day);
    decrement_date(&year, &month, &day);
    printf("后一天是 %d %d %d\n", year, month, day);

    return 0;
}