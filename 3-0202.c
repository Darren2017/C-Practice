#include<stdio.h>
#include<string.h>

void put_string (const char *s){
    while(*s){
        printf("%c", *s++);
    }
}

int main()
{
    char a[] = "abfasd";
    char b[23] = "1321";
    put_string(a);
    printf("\n%d\n", atol(b) - 32);
    int n = sizeof(a);
    printf("%d", n);

    return 0;
}