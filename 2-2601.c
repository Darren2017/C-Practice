#include<stdio.h>
#include<limits.h>

int main()
{
    if (CHAR_MIN){
        printf("char    :%d-%d\n", CHAR_MIN, CHAR_MAX);
    }
    printf("int     :%d-%d\n", INT_MIN, INT_MAX);
    printf("long    :%ld-%ld\n", LONG_MIN, LONG_MAX);

    return 0;
}