/*删除字符串中的数字*/
#include<stdio.h>

void del_digit(char s[])
{   
    int i = 0;
    int j=0;
    while(s[i]){
        if(s[i] >= '0' && s[i] <= '9'){
            j=i;
            while(s[j]){
                s[j]=s[j+1];
                j++;
            }
            i--;
        }
        i++;
    }
}

int main()
{   
    int i=0;
    char str[50];
    printf("请输入字符串");
    scanf("%s", str);

    printf("字符串是：%s\n", str);
    del_digit(str);
    printf("删除数字后字符串是：%s\n", str);

    return 0;
}