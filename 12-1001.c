#include<stdio.h>
#include<string.h>

#define NUMBER 50
#define LENGTH 128

void put_strary(const char s[][LENGTH], int n)
{
    int i;
    for(i = 0; i < n-1; i++){
        printf("s[%d] = \"%s\" \n", i, s[i]);
    }
}   

int main()
{
    char cs[NUMBER][LENGTH];
    int i = 0;
    while(1){
        scanf("%s", cs[i]);
        if(!strcmp( cs[i], "$$$$$")){
            break;
        }else{
            i++;
        }
    }
    put_strary(cs, i);

    return 0;
}
