/*逆向显示字符串*/
#include<stdio.h>

void put_atringr(const char a[])
{
    int i=0;
    while(a[i]){
        i++;
    }
    while(i){
        putchar(a[i-1]);
        i--;
    }
}

int main()
{
    char str[100];
    printf("请输入字符串：\n");
    scanf("%s",str);

    printf("字符串的逆向输出是：");
    put_atringr(str);
    
    putchar('\n');

    return 0;
}