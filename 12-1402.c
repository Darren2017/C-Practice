#include<stdio.h>

void ary_set(int v[], int n, int val)
{
    int i;
    for(i = 0; i < n; i++){
        v[i] = val;
    }
}

int main()
{
    int i;
    int a[] = {1,2,3,4,5};

    ary_set(&a[2], 2, 99);  /*a[2]被当作数组的第一个元素传入ary_set函数*/
    
    for(i =0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}