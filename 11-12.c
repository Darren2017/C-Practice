#include<stdio.h>

int main()
{
	int a,b,c,max;
	puts("请输入a，b，c的");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	
	printf("最大的数字是%d",max);

return 0;
}
