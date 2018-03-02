#include<stdio.h>
#include<string.h>

int main()
{
    char str[][12] = {"ABC", "DEF"};
    int i = 2;
    for (int j = 0; j < i; j++){
        int len = strlen(str[j]);
        for (int m = 0; m < len / 2; m++){
            char c = str[j][m];
            str[j][m] = str[j][len - m -1];
            str[j][len - m - 1] = c;
        }
    }  

    for (i = 0; i < 2; i ++){
        printf("%s ", str[i]);
    }  
    return 0;
}