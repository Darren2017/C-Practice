#include<stdio.h>

//#define N 6;

int search_idx(const int v[],int idx[],int key,int n)
{
    int i=0,j=0;

    for(i=0;i<n;i++){
        if(v[i]==key){
            idx[j]=i;
            j++;
        }
    }
    return (j>0)?j:0;
}

int main()
{
    int v[6]={12,52,52,31,12,12};
    int idx[6]={0};
    int i=0;
    int key;
    printf("请输入要查找的数字：");  scanf("%d",&key);
    search_idx(v,idx,key,6);

    if(search_idx(v,idx,key,6)==0)printf("\a\a查找失败");
    else{
        printf("您要找的数字的下标是{ ");
        for(i=0;i<search_idx(v,idx,key,6);i++){
            printf("%d ",idx[i]);
        }
        printf("}\n");
        printf("共有%d个",search_idx(v,idx,key,6));
    }
    return 0;
}
