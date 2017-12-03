#include<stdio.h>

int count_bits(unsigned x)
{
    int bits =0;
    while(x)
    {
        if(x&1u){
            bits ++;
        }
        x>>=1;
    }
    return bits;
}

int int_bits(void)
{
    return count_bits(~0u);
}

void print_bits(unsigned x)
{
    int i;
    for(i=int_bits()-1;i>=0;i--)
    {
        putchar((x>>i)&1u?'1':'0');
    }
}
int main()
{
    unsigned a,b;
    printf("请输入两个非负整数。\n");
    printf("a: ");    scanf("%u",&a);
    printf("b: ");    scanf("%u",&b);

    printf("\na     =");  print_bits(a);
    printf("\nb     =");  print_bits(b);
    printf("\na&b   =");  print_bits(a&b);
    printf("\na|b   =");  print_bits(a|b);
    printf("\na^b   =");  print_bits(a^b);
    printf("\n~a    =");  print_bits(~a);
    printf("\n~b    =");  print_bits(~b);

    puts("");

    return 0;
}