#include<stdio.h>

int count (char *a[]){                   //求字符串数组的组数，程序不对，怎么改啊？？？？？？
    int cnt = 0;
    while(a[cnt]){
        printf("%s", a[cnt]);
        cnt++;
    }
    return cnt;
}

int main()
{
    char a[][5] = {"LISP", "C"};
    char *p[] = {"PALl", "X", "MAC"};
    int cnt = count(p);
    printf("%d", cnt);
    
    return 0;
}