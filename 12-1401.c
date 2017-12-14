#include<stdio.h>

void set_idx(int v[], int n)
{
    for(int i = 0; i < n; i++){
        v[i] = i;
    }
}

int main()
{
    int v[] = {1, 5, 8, 6};
    set_idx(v, 4);
    for(int i = 0; i < 4; i++){
        printf("%d\n", v[i]);
    }

    return 0;
}