#include<stdio.h>

#define NUMBER 5

/*冒泡排序法*/

void bsort(int a[],int n)          /*-----交换相邻的值*/
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}

int main()
{   
    int a[NUMBER];
    int i=0;
    for(i=0;i<NUMBER;i++)
    {
        printf("请输入第%d个整数",i+1);    scanf("%d",&a[i]);  
    }

    bsort(a,NUMBER);

    for(i=0;i<NUMBER;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}