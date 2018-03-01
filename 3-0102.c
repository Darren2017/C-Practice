#include<stdio.h>

void del_digit(char s[]){
    int i = 0;
    while(s[i]){
        if (s[i] - '0' >= 0 && s[i] - '0' <=9){
            int j = i;
            while(s[j]){
                s[j] = s[j + 1];
                j++;
            }
        }else{
            i++;
        }
    }
}

int main()
{
    char str[128];
    scanf("%s", str);
    del_digit(str);
    printf("%s", str);

    return 0;
}