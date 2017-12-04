#include<stdio.h>

int main()
{
    float x,y;
    float sumx=0.0,sumy=0.0;
    int i;
    for(i=0,x=0.0;i<=100||x<=1.0;i++,x+=0.01)
    {   ;
        y=i/100.0;
        sumx+=x;    sumy+=y;
        printf("sumy=%f           ",sumy);   printf("sumx=%f\n",sumx);
    }
    return 0;
}