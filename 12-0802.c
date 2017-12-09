#include<stdio.h>

int  str_char(const char s[],char c)
{
    int i=0;
    while(s[i])
    {
        if(s[i]==c){
            break;
        }
        i++;
    }
    if (!s[i])    i = -1;
    return (i);
}

int main()
{   char ch;
    char str[50];
    printf("请输入字符串。\n"); 
    scanf("%s",str);
    getchar();
    printf("\n请输入要查找的字符：");   
    ch=getchar();
    printf("%d\n",str_char(str,ch)+1);

    return 0;
}